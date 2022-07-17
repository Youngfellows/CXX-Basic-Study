#include "../include/AudioBlockQueue.h"

AudioBlockQueue::AudioBlockQueue()
{
    cout << "AudioBlockQueue()构造函数" << endl;
    this->mCapacity = MAX_CACHES_SIZE;
    this->isStopped = false;
    this->mCaches = std::make_shared<std::queue<std::shared_ptr<Audio>>>();
}

AudioBlockQueue::~AudioBlockQueue()
{
    cout << "~AudioBlockQueue()析构函数" << endl;
    stop();
    mProCondition.notify_all();
    mConsCondition.notify_all();
}

/**
 * @brief 是否停止插入数据
 *
 * @return true 已经停止
 * @return false 没有停止
 */
bool AudioBlockQueue::stopped()
{
    return isStopped.load();
}

/**
 * @brief 队列是否为空
 *
 * @return true  队列为空
 * @return false  队列不为空
 */
bool AudioBlockQueue::empty()
{
    // long unsigned int len = mCaches->size();
    // return mCaches->size() == 0 ? true : false;
    return mCaches->empty() ? true : false;
}

/**
 * @brief 队列是否满了
 *
 * @return true 队列满了
 * @return false 队列没有满
 */
bool AudioBlockQueue::full()
{
    long unsigned int len = mCaches->size();
    return len > mCapacity ? true : false;
}

/**
 * @brief 停止插入数据
 *
 */
void AudioBlockQueue::stop()
{
    isStopped.store(true);
    mConsCondition.notify_all(); //通知消费者线程消费数据
}

/**
 * @brief 队列是否可用
 *
 * @return true 队列可用
 * @return false 队列不可用
 */
bool AudioBlockQueue::available()
{
    return !stopped() || !empty();
}

/**
 * @brief 向队列中插入音频数据
 *
 * @param audio 要插入队列的音频数据
 */
void AudioBlockQueue::push(std::shared_ptr<Audio> audio)
{
    // cout << "AudioBlockQueue::push():: ..." << endl;
    std::unique_lock<std::mutex> uniqueLock(mMutex); //抢占锁
    //如果容器是满的,则等待消费者线程消费
    while (full())
    {
        mConsCondition.notify_all(); //通知消费者线程进行消费
        cout << "AudioBlockQueue::push():: wait ..." << endl;
        mProCondition.wait(uniqueLock); //生产者线程释放锁,并挂起等待,直到一个线程的mProCondition.notify_all()后唤起再继续往下执行
    }
    int id = syscall(SYS_gettid);                          //获取线程ID方式1
    std::thread::id threadId = std::this_thread::get_id(); //获取线程ID方式2
    cout << "AudioBlockQueue::push():: id:" << id << ",threadId:" << threadId << ",数据:" << audio->toString() << endl;
    mCaches->push(std::move(audio)); //生产产品,插入数据,添加数据到容器列表,右值插入数据

    mConsCondition.notify_all(); //通知消费者线程
    uniqueLock.unlock();         //释放锁
}

/**
 * @brief 取出队列中的音频数据
 *
 * @param audio 取出的音频数据保存到audio中
 */
std::shared_ptr<Audio> AudioBlockQueue::pop()
{
    // cout << "AudioBlockQueue::pop():: ..." << endl;
    std::unique_lock<std::mutex> uniqueLock(mMutex); //抢占锁
    //若干容器是空的,如若没有停止插入数据,则等待生产者线程生产数据,然后再消费
    while (empty())
    {
        if (stopped())
        {
            return nullptr; //跳出pop函数,获取是接收while()循环
        }
        cout << "AudioBlockQueue::pop():: wait ..." << endl;
        //通知生产者线程生产产品
        mProCondition.notify_all();

        // wait()有两个参数，第二个参数可以为true或false（不写默认为false），若为true，那么wait直接返回并继续执行，若为false，阻塞(挂起)等待，
        //即下面的作用,用来等待一个东西：就本例子来说，wait解除互斥锁，并阻塞到本行，直到某个线程调用notify_all成员函数为止
        bool block = this->stopped() || !this->empty();
        cout << "AudioBlockQueue::pop():: block:" << block << endl;
        //消费者线程释放锁,并挂起,直到生产者线程调用mConsCondition.notify_all()成员函数才唤醒被继续往下执行
        // mConsCondition.wait(uniqueLock, block);
        mConsCondition.wait(uniqueLock, [this]()
                            { return this->stopped() || !this->empty(); });
    }
    std::shared_ptr<Audio> audio = nullptr;
    if (!empty())
    {
        // audio->set(1, "报警音频数据");
        //其实可以不用判空了,不为空才能走到这里
        audio = std::move(mCaches->front());                   //取出头部数据
        mCaches->pop();                                        //移除已经消费的数据
        int id = syscall(SYS_gettid);                          //获取线程ID方式1
        std::thread::id threadId = std::this_thread::get_id(); //获取线程ID方式2
        cout << "AudioBlockQueue::pop():: id:" << id << ",threadId:" << threadId << ",数据:" << audio->toString() << endl;
    }
    mProCondition.notify_all(); //通知生产者线程可用进行产品生产了
    uniqueLock.unlock();        //释放锁
    return audio;
}