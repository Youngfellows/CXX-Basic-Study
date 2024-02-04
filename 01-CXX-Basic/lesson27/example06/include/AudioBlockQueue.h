#ifndef AUDIO_BLOCK_QUEUE_H
#define AUDIO_BLOCK_QUEUE_H

#include "./Audio.h"
#include "./Global.h"
/**
 * @brief 阻塞式音频队列,线程安全的
 * @brief 支持生产者消费者模式
 *
 */
class AudioBlockQueue
{
private:
    std::mutex mMutex;                                           //定义一个互斥量，即可以理解为一把锁，防止两个线程同时操作一个内存空间
    std::condition_variable mProCondition;                       //生产者线程唤醒条件变量
    std::condition_variable mConsCondition;                      //消费者线程唤醒条件变量
    unsigned int mCapacity;                                      //缓存大小
    std::shared_ptr<std::queue<std::shared_ptr<Audio>>> mCaches; //音频缓存列表
    std::atomic<bool> isStopped;                                 //是否停止插入数据

public:
    AudioBlockQueue();
    ~AudioBlockQueue();
    void push(std::shared_ptr<Audio> audio); //向队列中插入音频数据
    std::shared_ptr<Audio> pop();            //取出队列中的音频数据
    void stop();                             //停止插入数据
    bool available();                        // 队列是否可用
    bool stopped();                          //是否停止插入数据

private:
    bool empty(); //队列是否为空
    bool full();  //队列是否满了
};
#endif