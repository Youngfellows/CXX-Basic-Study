#include "../include/AudioQueue.h"

/**
 * @brief 构造函数
 *
 */
AudioQueue::AudioQueue(AudioCallback callback)
{
    cout << "AudioQueue()构造函数" << endl;
    this->mAudioCallback = callback;
    this->threadRun = true;
    this->mCacheAudio = std::make_shared<std::queue<std::shared_ptr<Audio>>>();
}

/**
 * @brief 析构函数
 *
 */
AudioQueue::~AudioQueue()
{
    cout << "~AudioQueue()析构函数" << endl;
    threadRun = false;
    mConsumerThreadSemaphore.notify_all(); //唤醒消费者线程被挂起的wait函数,是消费者线程能继续执行
    mProducerThreadSemaphore.notify_all(); //唤醒生产者线程被挂起的wait()函数,使生产者线程能继续往下执行
    //释放内存
    mCacheAudio = nullptr;
}

/**
 * @brief 启动录音,模拟产生数据
 *
 */
void AudioQueue::startAudioRecord()
{
    while (threadRun)
    {
        //容器不为空,插入数据
        int id = rand() % 100; //产生0 ~ 100的随机数
        //字符串拼接
        std::string message = "报警音音频数据";
        std::ostringstream oss;
        oss << message << id;
        std::string data = oss.str();
        // cout << "xxx" << endl;
        std::shared_ptr<Audio> audio = std::make_shared<Audio>(id, data);
        // cout << "mmmmm" << endl;
        put(audio);

        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); //休眠110毫秒
    }
}

/**
 * @brief 语音识别引擎消耗音频
 *
 */
void AudioQueue::feedAudioEngin()
{
    while (threadRun)
    {
        std::shared_ptr<Audio> audio = get();
        if (mAudioCallback != nullptr)
        {
            mAudioCallback(audio);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1500)); //休眠110毫秒
    }
}

/**
 * @brief 生产产品: 向容器中插入数据,线程安全的
 *
 * @param audio 生产者生产音频数据,要插入的音频数据
 */
void AudioQueue::put(std::shared_ptr<Audio> audio)
{
    std::unique_lock<std::mutex> uniqueLock(mMutex); //抢占锁
    //如果容器是满的,则等待消费者线程消费产品
    while (mCacheAudio->size() > MAX_CACHES_SIZE)
    {
        cout << " AudioQueue::put():: wait ..." << endl;
        // wait()有两个参数，第二个参数可以为true或false（不写默认为false），若为true，那么wait直接返回并继续执行，若为false，阻塞(挂起)等待，
        //即下面的作用,用来等待一个东西：就本例子来说，wait解除互斥锁，并阻塞到本行，直到某个线程调用notify_all成员函数为止
        mProducerThreadSemaphore.wait(uniqueLock); //释放锁,并挂起,直到消费者线程调用notify_all成员函数才唤醒被继续往下执行
    }
    // cout << "yyyy" << endl;
    int id = syscall(SYS_gettid);
    cout << "AudioQueue::put():: threadId:" << id << ",生产音频,id:" << audio->getId() << ",data:" << audio->getData() << endl;
    // std::thread::id threadId = std::this_thread::get_id();
    // cout << "AudioQueue::put():: threadId:" << threadId << ",生产音频,id:" << audio->getId() << ",data:" << audio->getData() << endl;

    mCacheAudio->push(std::move(audio)); //生产产品,插入数据,添加数据到容器列表,右值插入数据

    uniqueLock.unlock();                   //先释放锁,再通知
    mConsumerThreadSemaphore.notify_all(); //唤醒消费者线程被挂起的wait函数,是消费者线程能继续执行
}

/**
 * @brief 消费产品: 获取容器中的数据,安全的
 *
 * @return std::shared_ptr<Audio> 返回应该消费的音频数据
 */
std::shared_ptr<Audio> AudioQueue::get()
{
    std::unique_lock<std::mutex> uniqueLock(mMutex); //抢占锁
    //若容器是空的,则等待生产者线程生产好产品在继续消费
    while (mCacheAudio->empty())
    {
        cout << "AudioQueue::get():: wait ..." << endl;
        // wait()有两个参数，第二个参数可以为true或false（不写默认为false），若为true，那么wait直接返回并继续执行，若为false，阻塞(挂起)等待，
        //即下面的作用,用来等待一个东西：就本例子来说，wait解除互斥锁，并阻塞到本行，直到某个线程调用notify_all成员函数为止
        mConsumerThreadSemaphore.wait(uniqueLock); //释放锁,并挂起,直到生产者线程调用notify_all成员函数才唤醒被继续往下执行
    }
    //其实可以不用判空了,不为空才能走到这里
    std::shared_ptr<Audio> audio = std::move(mCacheAudio->front()); //取出头部数据
    mCacheAudio->pop();                                             //移除已经消费的数据
    // std::thread::id threadId = std::this_thread::get_id();
    int id = syscall(SYS_gettid);
    cout << "AudioQueue::get()::  threadId:" << id << ",消费了了,id:" << audio->getId() << ",data:" << audio->getData() << endl;
    uniqueLock.unlock();                   //先释放锁,再通知
    mProducerThreadSemaphore.notify_all(); //唤醒生产者线程被挂起的wait()函数,使生产者线程能继续往下执行
    return audio;                          //返回要消费的数据
}