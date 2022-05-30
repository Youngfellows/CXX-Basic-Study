#include "./include/Sample.h"

void test15()
{
    cout << "test15():: ..." << endl;
    //创建对象,动态申请内存
    Wallet *wallet = new Wallet();

    //集合
    std::vector<std::thread *> threads;

    //创建100个线程
    for(int i = 0; i < SIZE; i++)
    {
        std::thread *myThread = new std::thread(&Wallet::addMoney,wallet,100000); 
        threads.push_back(myThread);
    }

    //等待线程执行结束
    for(int i = 0; i < SIZE; i++)
    {
        threads.at(i)->join();
    }

    //获取多线程执行的结果
    long money = wallet->getMoney();
    cout << "test15():: money=" << money << endl;
    cout << endl;

    //释放内存,使用迭代器遍历集合
    std::vector<std::thread *>::iterator it;
    for(it = threads.begin(); it != threads.end(); it++)
    {
        std::thread *myThread = *it;
        delete myThread;
    }
    threads.clear();//清空集合

    //释放内存
    delete wallet;
}


void test16()
{
    cout << "test16():: ..." << endl;
    //创建对象,动态申请内存
    Application *app = new Application();

    //集合
    std::vector<std::thread *> threads;

    //再来一共线程
    std::thread *myThread2 = new std::thread(&Application::mainTask,app); 

    //创建100个线程
    for(int i = 0; i < SIZE; i++)
    {
        std::thread *myThread = new std::thread(&Application::loadData,app); 
        threads.push_back(myThread);
    }

    //等待线程执行结束
    myThread2->join();
    for(int i = 0; i < SIZE; i++)
    {
        threads.at(i)->join();
    }
 
    //获取多线程执行的结果
    long money = app->getMoney();
    cout << "test15():: money=" << money << endl;
    cout << endl;

    //释放内存,使用迭代器遍历集合
    std::vector<std::thread *>::iterator it;
    for(it = threads.begin(); it != threads.end(); it++)
    {
        std::thread *myThread = *it;
        delete myThread;
    }
    threads.clear();//清空集合

    //释放内存
    delete app;
    delete myThread2;
}