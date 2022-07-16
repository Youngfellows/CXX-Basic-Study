#ifndef AUDIO_FLINGER_H
#define AUDIO_FLINGER_H

#include "./Global.h"
#include "./AudioQueue.h"
#include "./Callback.h"

/**
 * @brief 音频系统: 模拟获取录音数据与消费录音数据
 *
 */
class AudioFlinger
{
private:
    std::shared_ptr<std::vector<thread>> mThreads = nullptr; //线程容器列表
    std::shared_ptr<AudioQueue> mAudioQueue;                 //音频队列

public:
    AudioFlinger(AudioCallback callback);
    ~AudioFlinger();
    void run(); //运行音频系统

private:
    void producertAudioTask(); //生产音频的任务
    void consumerAudioTask();  //消耗音频的任务
    void processProducer();
    void processConsumer();
};
#endif