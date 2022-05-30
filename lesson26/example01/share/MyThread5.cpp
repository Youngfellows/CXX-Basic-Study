#include "../include/MyThread5.h"

//在类外实现函数 - 构造函数
MyThread5::MyThread5()
{
    cout << "MyThread5()构造函数" << endl;
}

//在类外实现函数 - 析构函数
MyThread5::~MyThread5()
{
    cout << "~MyThread5()析构函数" << endl;
}

//在类外实现函数 - myTask1()成员函数作为线程入口
void MyThread5::myTask1()
{
    cout << "myTask1():: ..." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));//延迟1秒确定testMutex1上锁了
    for(int i = 0; i < 100000; i++)
    {
        //cout << "myThreadIn():: i=" << i << endl;
        //this->testMutex.lock();//加锁
        //std::lock_guard<std::mutex> lock(testMutex);//自动加锁&自动解锁
        std::lock(testMutex1,testMutex2);//同时锁住多个互斥量
        //cout << "myTask1():: all lock ..." << endl;//所有锁都上锁了才执行这一句
        this->t++;
        //this->testMutex.unlock();//释放锁(解锁)
        testMutex1.unlock();
        testMutex2.unlock();
    }
}

//在类外实现函数 - myTask2()成员函数作为线程入口
void MyThread5::myTask2()
{
    cout << "myTask2():: ..." << endl;
    for(int i = 0; i < 100000; i++)
    {
        this->testMutex1.lock();//加锁
        //cout << "myTask2():: i=" << i << endl;
        //std::lock_guard<std::mutex> lock(testMutex);//自动加锁&自动解锁
        this->t++;
        //std::this_thread::sleep_for(std::chrono::seconds(1));//延迟1秒能更好的看到std::lock等待的效果
        this->testMutex1.unlock();//释放锁(解锁)
    }
}

//在类外实现函数 - get()函数
long MyThread5::get()
{
    return this->t;
}