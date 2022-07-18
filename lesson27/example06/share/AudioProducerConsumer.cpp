#include "../include/AudioProducerConsumer.h"

AudioProducerConsumer::AudioProducerConsumer(AudioCallback callback)
{
    cout << "AudioProducerConsumer()构造函数" << endl;
    this->mAudioCallback = callback;
    this->mProNum = PRODUCER_THREAD_NUMBER;
    this->mConsNum = CONSUMER_THREAD_NUMBER;
    this->mProThreads = std::make_shared<std::vector<std::shared_ptr<std::thread>>>();
    this->mConsThreads = std::make_shared<std::vector<std::shared_ptr<std::thread>>>();
    this->mAudioBlockQueue = std::make_shared<AudioBlockQueue>();
    srand(time(0));
}

AudioProducerConsumer::~AudioProducerConsumer()
{
    cout << "~AudioProducerConsumer()析构函数" << endl;
    //停止线程
}

/**
 * @brief 多线程生产者任务
 *
 */
void AudioProducerConsumer::produceTask()
{
    for (int i = 0; i < mProNum; i++)
    {
        //创建线程,并向线程回调函数传递参数,注意一定要传递this指针,代表是哪一个对象在使用线程
        int start = i * 100;
        int maxNum = mProNum * 100;
        // std::thread pPhread(&AudioProducerConsumer::test2, this);
        // std::thread pPhread(&AudioProducerConsumer::test, this, std::ref(star), std::ref(maxNum));
        // std::shared_ptr<std::thread> pThread = std::make_shared<std::thread>(&AudioProducerConsumer::test,this, std::move(mAudioBlockQueue) i * 1000,  mProNum * 1000);
        // std::shared_ptr<std::thread> pThread = std::make_shared<std::thread>(&AudioProducerConsumer::producer, this, std::move(mAudioBlockQueue), i * 1000, mProNum * 1000);
        cout << "AudioProducerConsumer::produceTask():: " << i << " start, start:" << start << ",maxNum:" << maxNum << endl;
        // std::shared_ptr<std::thread> pThread = std::make_shared<std::thread>(&AudioProducerConsumer::producer, this, std::move(mAudioBlockQueue), start, maxNum);
        //不能使用move,否则消费者线程获取到的是nullptr
        std::shared_ptr<std::thread> pThread = std::make_shared<std::thread>(&AudioProducerConsumer::producer, this, std::ref(mAudioBlockQueue), start, maxNum);
        mProThreads->push_back(pThread);
        cout << "AudioProducerConsumer::produceTask():: " << i << " end, start:" << start << ",maxNum:" << maxNum << endl;
    }
}

/**
 * @brief 多线程消费者任务
 *
 */
void AudioProducerConsumer::consumeTask()
{
    for (int i = 0; i < mConsNum; i++)
    {
        //创建线程,并向线程回调函数传递参数
        cout << "AudioProducerConsumer::consumeTask():: " << i << " start ..." << endl;
        // std::shared_ptr<std::thread> cThread = std::make_shared<std::thread>(&AudioProducerConsumer::consumer, this, std::move(mAudioBlockQueue));
        std::shared_ptr<std::thread> cThread = std::make_shared<std::thread>(&AudioProducerConsumer::consumer, this, std::ref(mAudioBlockQueue));
        mProThreads->push_back(cThread);
        cout << "AudioProducerConsumer::consumeTask():: " << i << " end ..." << endl;
    }
}

/**
 * @brief 启动音频生产者消费者模型
 *
 */
void AudioProducerConsumer::run()
{
    produceTask();
    consumeTask();
    //启动生产者线程
    for (auto &pThread : *mProThreads)
    {
        pThread->join();
    }
    //启动消费者线程
    for (auto &cThread : *mConsThreads)
    {
        cThread->join();
    }
    mAudioBlockQueue->stop();
}

/**
 * @brief 多线程生产者
 * @brief 线程回调函数
 * @param audioBlockQueue 音频队列,回调函数的参数
 */
void AudioProducerConsumer::consumer(std::shared_ptr<AudioBlockQueue> audioBlockQueue)
{
    cout << "AudioProducerConsumer::consumer():: audioBlockQueue=" << audioBlockQueue << endl;

    //在这里尽情的消费数据吧
    // std::shared_ptr<Audio> audio = std::make_shared<Audio>(); //接收数据的智能指针

    while (audioBlockQueue->available())
    {
        // cout << "AudioProducerConsumer::consumer():: 111 ..." << endl;
        std::shared_ptr<Audio> audio = audioBlockQueue->pop();
        // cout << "AudioProducerConsumer::consumer():: 2222 ..." << endl;
        if (audio != nullptr)
        {
            cout << "AudioProducerConsumer::consumer():: 消费音频:" << audio->toString() << endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1500)); //休眠1500毫秒
    }
    std::thread::id threadId = std::this_thread::get_id(); //获取线程ID方式2
    cout << "threadId:" << threadId << "线程消费产品完成 ..." << endl;
}

/**
 * @brief 多线程消费者
 * @brief 线程回调函数
 *
 * @param audioBlockQueue 音频队列,回调函数的参数
 * @param start 音频数据开始编号,回调函数的参数
 * @param maxNum 音频数据结束编号,回调函数的参数
 */
void AudioProducerConsumer::producer(std::shared_ptr<AudioBlockQueue> audioBlockQueue, int start, int maxNum)
{
    cout << "AudioProducerConsumer::producer():: audioBlockQueue=" << audioBlockQueue << endl;
    cout << "AudioProducerConsumer::producer():: start:" << start << ",maxNum:" << maxNum << endl;
    //在这里尽情的生产数据吧
    // int i = 0;
    // while (i++ < maxNum)
    // {
    //     //模拟组装音频数据
    //     int id = i + start; //编号
    //     std::string message = "报警音音频数据";
    //     std::ostringstream oss;
    //     oss << message << id; //字符串拼接,
    //     std::string data = oss.str();
    //     std::shared_ptr<Audio> audio = std::make_shared<Audio>(id, data);
    //     audioBlockQueue->push(audio);
    //     std::this_thread::sleep_for(std::chrono::milliseconds(1000)); //休眠1000毫秒
    // }

    while (!mAudioBlockQueue->stopped())
    {
        //模拟组装音频数据
        int id = rand() % 100; //产生0 ~ 100的随机数
        std::string message = "报警音音频数据";
        std::ostringstream oss;
        oss << message << id; //字符串拼接,
        std::string data = oss.str();
        std::shared_ptr<Audio> audio = std::make_shared<Audio>(id, data);
        audioBlockQueue->push(audio);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); //休眠1000毫秒
    }

    std::thread::id threadId = std::this_thread::get_id(); //获取线程ID方式2
    cout << "threadId:" << threadId << "线程生产产品完成 ..." << endl;
}

/**
 * @brief 测试线程回调函数
 *
 * @param start 向线程传递过来的参数
 * @param maxNum 向线程传递过来的参数
 */
void AudioProducerConsumer::test(int start, int maxNum)
{
    cout << "AudioProducerConsumer::test():: start:" << start << ",maxNum:" << maxNum << endl;
}

/**
 * @brief 测试线程回调函数
 *
 * @param start 向线程传递过来的参数
 * @param maxNum 向线程传递过来的参数
 */
void AudioProducerConsumer::test2()
{
    cout << "AudioProducerConsumer::test2():: ..." << endl;
}
