#ifndef AUDIO_QUEUE_H
#define AUDIO_QUEUE_H

#include "./Audio.h"
#include "./Global.h"
#include "./Callback.h"

/**
 * @brief 音频队列,支持生产者消费者模型
 * @brief 保证线程安全的
 *
 */
class AudioQueue
{
private:
    std::mutex mMutex;                                //定义一个互斥量，即可以理解为一把锁，防止两个线程同时操作一个内存空间
    std::condition_variable mProducerThreadSemaphore; //生产者线程唤醒条件变量
    std::condition_variable mConsumerThreadSemaphore; //消费者线程唤醒条件变量
    int mCacheSize;                                   //缓存大小
    std::shared_ptr<std::queue<std::shared_ptr<Audio>>> mCacheAudio; //音频缓存列表
    AudioCallback mAudioCallback;                                    //回调
    // std::atomic<bool> threadRun(false);                              //线程是否运行
    bool threadRun = false; //线程是否运行

public:
    AudioQueue(AudioCallback mAudioCallback);
    ~AudioQueue();
    void startAudioRecord(); //启动录音,模拟产生数据
    void feedAudioEngin();   //语音识别引擎消耗音频

private:
    void put(std::shared_ptr<Audio> audio); //缓存音频到队列
    std::shared_ptr<Audio> get();           //从队列获取到音频
};
#endif