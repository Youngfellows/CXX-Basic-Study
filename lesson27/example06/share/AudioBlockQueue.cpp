#include "../include/AudioBlockQueue.h"

AudioBlockQueue::AudioBlockQueue()
{
    cout << "AudioBlockQueue()构造函数" << endl;
}

AudioBlockQueue::~AudioBlockQueue()
{
    cout << "~AudioBlockQueue()析构函数" << endl;
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
    return len ? true : false;
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
    cout << "AudioBlockQueue::push():: ..." << endl;
}

/**
 * @brief 取出队列中的音频数据
 *
 * @param audio 取出的音频数据保存到audio中
 */
void AudioBlockQueue::pop(std::shared_ptr<Audio> audio)
{
    cout << "AudioBlockQueue::pop():: ..." << endl;
    audio->set(1, "报警音频数据");
}