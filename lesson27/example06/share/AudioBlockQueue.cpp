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
 * @brief 向队列中插入音频数据
 *
 * @param audio 要插入队列的音频数据
 */
void AudioBlockQueue::push(const Audio &audio)
{
    cout << "AudioBlockQueue::push():: ..." << endl;
}

/**
 * @brief 取出队列中的音频数据
 *
 * @param audio 取出的音频数据保存到audio中
 */
void AudioBlockQueue::pop(Audio &audio)
{
    cout << "AudioBlockQueue::pop():: ..." << endl;
}