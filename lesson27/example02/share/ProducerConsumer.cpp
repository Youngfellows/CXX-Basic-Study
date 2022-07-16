#include "../include/ProducerConsumer.h"

ProducerConsumer::ProducerConsumer(AudioCallback callback)
{
    cout << "ProducerConsumer()构造函数" << endl;
    this->mCacheSize = 10;
    this->mProducerNumber = 10;
    this->mConsumerNumber = 15;
    this->mCallback = callback;
    this->mThreadRun = true; //工作状态置为开启
    this->mCacheList = new std::list<Audio>();
    this->mThreads = new std::vector<std::thread>();
    srand(time(0));
}

ProducerConsumer::~ProducerConsumer()
{
    cout << "~ProducerConsumer()析构函数" << endl;
    //停掉全部线程
    if (this->mThreadRun)
    {
        this->mThreadRun = false;
        mConsumerThreadSemaphore.notify_all(); //用于唤醒其他线程，即唤醒消费者线程，进行消费
        mProducerThreadSemaphore.notify_all(); //用于唤醒其他线程，即唤醒生产者线程，可以进行生产产品

        //等待线程退出的经典操作
        for (auto &iThread : *(this->mThreads))
        {
            if (iThread.joinable())
            {
                iThread.join(); //等待线程执行
            }
        }
    }
    //释放内存
    if (this->mCacheList != nullptr)
    {
        this->mCacheList->clear();
    }
}

/**
 * @brief 启动生产者消费者模型
 *
 */
void ProducerConsumer::run()
{
    producertTask();
    consumerTask();
    for (auto &iThread : *(this->mThreads))
    {
        iThread.join(); //等待线程执行
        // iThread.detach();
    }
}

/**
 * @brief 创建生产者多线程任务
 *
 */
void ProducerConsumer::producertTask()
{
    // 5个线程生产者生产音频
    for (int i = 0; i < this->mProducerNumber; i++)
    {
        this->mThreads->emplace_back(std::thread(&ProducerConsumer::productAudio, this));
    }
}

/**
 * @brief 创建消费者多线程任务
 *
 */
void ProducerConsumer::consumerTask()
{
    // 8个线程在消费音频数据
    for (int i = 0; i < this->mConsumerNumber; i++)
    {
        this->mThreads->emplace_back(std::thread(&ProducerConsumer::consumeAudio, this));
    }
}

/**
 * @brief 生产者线程回调函数
 *
 */
void ProducerConsumer::productAudio()
{
    while (mThreadRun)
    {
        // std::lock_guard<std::mutex> lockGuard(this->mMutex); //抢占锁,会自动释放锁
        std::unique_lock<std::mutex> uniqueLock(this->mMutex); //抢占锁
        //如果容器是满的,则等待消费者线程消费
        while (this->mCacheList->size() > this->mCacheSize)
        {
            cout << "productAudio():: wait ..." << endl;
            // wait()有两个参数，第二个参数可以为true或false（不写默认为false），若为true，那么wait直接返回并继续执行，若为false，阻塞等待，即下面的作用
            //用来等待一个东西：就本例子来说，wait解除互斥锁，并阻塞到本行，直到某个线程调用notify_all成员函数为止
            mProducerThreadSemaphore.wait(uniqueLock); //生产者线程释放锁,并挂起等待
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); //休眠110毫秒
        std::thread::id threadId = std::this_thread::get_id();

        //容器不为空,插入数据
        int id = rand() % 100; //产生0 ~ 100的随机数
        //字符串拼接
        std::string message = "音频数据";
        std::ostringstream oss;
        oss << message << id;
        std::string data = oss.str();
        Audio audio(id, data);
        this->mCacheList->push_back(std::move(audio)); //添加数据到容器列表,右值插入数据
        cout << "productAudio():: id:" << audio.getId() << ",data:" << audio.getData() << ",threadId:" << threadId << endl;

        mConsumerThreadSemaphore.notify_all(); //用于唤醒其他线程，即唤醒消费者线程，进行消费
        uniqueLock.unlock();                   //释放锁
    }
}

/**
 * @brief 消费者线程回调函数
 *
 */
void ProducerConsumer::consumeAudio()
{
    while (mThreadRun)
    {
        std::unique_lock<std::mutex> uniqueLock(this->mMutex); //抢占锁
        //容器是空的,则等待生产者生产产品
        while (this->mCacheList->empty())
        {
            cout << "consumeAudio():: wait ..." << endl;
            // wait()有两个参数，第二个参数可以为true或false（不写默认为false），若为true，那么wait直接返回并继续执行，若为false，阻塞等待，即下面的作用
            //用来等待一个东西：就本例子来说，wait解除互斥锁，并阻塞到本行，直到某个线程调用notify_all成员函数为止
            mConsumerThreadSemaphore.wait(uniqueLock); //消费者线程释放锁,并挂起等待
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(1500)); //休眠500毫秒
        std::thread::id threadId = std::this_thread::get_id();

        if (!this->mCacheList->empty())
        {
            Audio audio = std::move(this->mCacheList->front()); //右值取出数据
            this->mCacheList->pop_front();                      //队列中删除取出的数据
            //回调数据
            if (this->mCallback != nullptr)
            {
                cout << "consumeAudio():: id:" << audio.getId() << ",data:" << audio.getData() << ",threadId:" << threadId << endl;
                mCallback(audio);
            }
        }

        //通知生产者线程,容器不为空
        mProducerThreadSemaphore.notify_all(); //用于唤醒其他线程，即唤醒生产者线程，可以进行生产产品
        uniqueLock.unlock();                   //释放锁
    }
}