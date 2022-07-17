#ifndef AUDIO_BLOCK_QUEUE_H
#define AUDIO_BLOCK_QUEUE_H

#include "./Audio.h"

/**
 * @brief 阻塞式音频队列,线程安全的
 * @brief 支持生产者消费者模式
 *
 */
class AudioBlockQueue
{
private:


public:
    AudioBlockQueue();
    ~AudioBlockQueue();
    void push(const Audio &audio); //向队列中插入音频数据
    void pop(Audio &audio);        //取出队列中的音频数据
};
#endif