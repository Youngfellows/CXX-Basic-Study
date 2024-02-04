#include "../include/AudioFlinger.h"

AudioFlinger::AudioFlinger(AudioCallback callback)
{
    cout << "AudioFlinger()构造函数" << endl;
    this->mThreads = std::make_shared<std::vector<thread>>();
    this->mAudioQueue = std::make_shared<AudioQueue>(callback);
}

AudioFlinger::~AudioFlinger()
{
    cout << "~AudioFlinger()析构函数" << endl;
    //停止线程,释放内存
    for (auto &iThread : *mThreads)
    {
        if (iThread.joinable())
        {
            iThread.join(); //等待线程执行
        }
    }
}

/**
 * @brief 启动音频系统
 *
 */
void AudioFlinger::run()
{
    producertAudioTask();
    consumerAudioTask();
    //启动多线程线程
    for (auto &iThread : *mThreads)
    {
        iThread.join();
    }
}

/**
 * @brief 生产者: 产生音频数据
 * @brief 多线程执行生产任务
 *
 */
void AudioFlinger::producertAudioTask()
{
    for (int i = 0; i < PRODUCER_THREAD_NUMBER; i++)
    {
        this->mThreads->push_back(std::thread(&AudioFlinger::processProducer, this));
    }
}

/**
 * @brief 消费者: 使用音频数据
 * @brief 多线程执行消耗任务
 */
void AudioFlinger::consumerAudioTask()
{
    for (int i = 0; i < CONSUMER_THREAD_NUMBER; i++)
    {
        this->mThreads->push_back(std::thread(&AudioFlinger::processConsumer, this));
    }
}

/**
 * @brief 生产者线程回调函数
 *
 */
void AudioFlinger::processProducer()
{
    mAudioQueue->startAudioRecord();
}

/**
 * @brief 消费者线程回调函数
 *
 */
void AudioFlinger::processConsumer()
{
    mAudioQueue->feedAudioEngin();
}