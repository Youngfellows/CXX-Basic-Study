#include "../include/Application.h"

Application::Application()
{
    cout << "Application()构造函数" << endl;
}

Application::~Application()
{
    cout << "~Application()析构函数" << endl;
}

bool Application::isDataLoaded()//数据是否加载完成
{
    return this->mDataLoaded;
}

long Application::getMoney()//获取钱
{
    return this->mMoney;
}



void Application::loadData()//加载数据
{
    cout << "loadData():: ..." << endl;
    //使该线程sleep 1秒
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Loading Data from XML" << std::endl;

    //锁定数据
    //std::lock_guard<std::mutex> guard(this->mMutex);

    //flag设为true，表明数据已加载
    for(int i = 0; i < 100000; i++)
    {
        std::lock_guard<std::mutex> guard(this->mMutex);//获取锁,并上锁
        this->mMoney++;
    }
    this->notify();
}

void Application::notify()
{
    cout << "notify():: ..." << endl;
    std::lock_guard<std::mutex> guard(this->mMutex2);//自动上锁
    this->count++;
    if(this->count == SIZE)//数据加载完成
    {
        this->mDataLoaded = true;
        //通知条件变量
        this->mCondVar.notify_one();
        cout << "notify():: 数据加载成功,通知另外一共线程" << endl;
    }
}

void Application::mainTask()//添加任务
{
    cout << "mainTask():: ..." << endl;
    cout << "Do some handshaking" << std::endl;
    cout << "mainTask():: 1,isDataLoaded = " << isDataLoaded() << std::endl;
   
    //获取锁
    std::unique_lock<std::mutex> mlock(mMutex);

    //开始等待条件变量得到信号
    //wait()将在内部释放锁，并使线程阻塞
    //一旦条件变量发出信号，则恢复线程并再次获取锁
    //然后检测条件是否满足，如果条件满足，则继续，否则再次进入wait
    mCondVar.wait(mlock, std::bind(&Application::isDataLoaded, this));
    cout << "mainTask():: Do Processing On loaded Data" << std::endl;
    cout << "mainTask():: 2,isDataLoaded = " << isDataLoaded() << std::endl;
    for(int i = 0; i < 4; i++)
    {
        this->mMoney += 7;
    }
}
