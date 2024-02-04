#ifndef AUDIO_PRODUCER_CONSUMER_H
#define AUDIO_PRODUCER_CONSUMER_H

#include "./Global.h"
#include "./AudioBlockQueue.h"
#include "./Callback.h"

/**
 * @brief 多线程音频生产者消费者模型
 *
 */
class AudioProducerConsumer
{
private:
    int mProNum;                                                                       //生产者线程数量
    int mConsNum;                                                                      //消费者线程数量
    std::shared_ptr<std::vector<std::shared_ptr<std::thread>>> mProThreads = nullptr;  //生产者线程列表
    std::shared_ptr<std::vector<std::shared_ptr<std::thread>>> mConsThreads = nullptr; //消费者线程列表
    std::shared_ptr<AudioBlockQueue> mAudioBlockQueue;                                 //音频队列
    AudioCallback mAudioCallback;                                                      //音频回调

public:
    AudioProducerConsumer(AudioCallback callback);
    ~AudioProducerConsumer();
    void run(); //启动音频生产者消费者模型

private:
    void produceTask();                                                                     //多线程生产者任务
    void consumeTask();                                                                     //多线程消费者任务
    void consumer(std::shared_ptr<AudioBlockQueue> audioBlockQueue);                        //消费者
    void producer(std::shared_ptr<AudioBlockQueue> audioBlockQueue, int start, int maxNum); //生产者
    void test(int start, int maxNum);                                                       //测试线程回调函数
    void test2();                                                                           //测试线程回调函数
};
#endif