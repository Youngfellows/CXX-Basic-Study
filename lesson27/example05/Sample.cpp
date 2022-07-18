#include "./include/Sample.h"

/**
 * @brief 回调函数
 *
 * @param audio
 */
void audioCallback(std::shared_ptr<Audio> audio)
{
    //audio->toString();
    cout << "audioCallback:: audio data,id:" << audio->getId() << ",data:" << audio->getData() << endl;
}

void test1()
{
    cout << "test1():: ..." << endl;
    //生产者消费者模型,使用智能指针
    std::shared_ptr<AudioFlinger> audioFlinger = std::make_shared<AudioFlinger>(audioCallback);
    audioFlinger->run();
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}