#ifndef PRODUCER_CONSUMER_H
#define PRODUCER_CONSUMER_H

#include "./Global.h"
#include "./Audio.h"
#include "./Callback.h"

/**
 * @brief 生产者消费者模型
 *
 */
class ProducerConsumer
{
private:
    std::mutex mMutex;                                //线程锁
    std::condition_variable mProducerThreadSemaphore; //生产者线程唤醒条件变量
    std::condition_variable mConsumerThreadSemaphore; //消费者线程唤醒条件变量
    // std::atomic<bool> mThreadRun;                     // 原子布尔型 std::atomic_bool 等价于 sta::atomic<bool>
    bool mThreadRun;                              // 原子布尔型 std::atomic_bool 等价于 sta::atomic<bool>
    int mProducerNumber;                          //生产者线程数量
    int mConsumerNumber;                          //消费者线程数量
    unsigned int mCacheSize;                      //缓冲区大小
    std::list<Audio> *mCacheList;                 //音频数据缓存列表
    AudioCallback mCallback = nullptr;            //函数回调,使用函数指针来实现
    std::vector<std::thread> *mThreads = nullptr; //线程列表

public:
    ProducerConsumer(AudioCallback callback);
    ~ProducerConsumer();
    void run(); //启动生产者消费者模型

private:
    void producertTask(); //多线程生产任务
    void consumerTask();  //多线程消费者任务
    void productAudio();   //产生音频
    void consumeAudio();  //消费音频
};
#endif