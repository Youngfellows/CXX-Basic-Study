#include "../include/MyThread6.h"

//在类外实现函数 - 构造函数
MyThread6::MyThread6()
{
    cout << "MyThread6()构造函数" << endl;
}

//在类外实现函数 - 析构函数
MyThread6::~MyThread6()
{
    cout << "~MyThread6()析构函数" << endl;
}

//在类外实现函数 - myTask1()成员函数作为线程入口
void MyThread6::myTask()
{
    cout << "myTask():: ..." << endl;
    //std::this_thread::sleep_for(std::chrono::seconds(1));//延迟1秒确定testMutex1上锁了
    for(int i = 0; i < 100000; i++)
    {
        //cout << "myTask():: i=" << i << endl;
        //this->testMutex.lock();//加锁
        //std::lock_guard<std::mutex> lock(testMutex);//自动加锁&自动解锁
        //std::lock(testMutex1,testMutex2);//同时锁住多个互斥量

        //try_to_lock 尝试去锁如果没锁住不堵塞（用了这个在这个前面不能有lock()）不堵塞如何判断是否锁上了呢，系统提供了一个api owns_lock()用于判断是否锁上了
        std::unique_lock<mutex> *myUniqueLock = new std::unique_lock<mutex>(testMutex,std::try_to_lock);
        if (myUniqueLock->owns_lock())
        { 
            //cout << "myTask():: not lock ..." << endl;//没有锁住
        }else
        {
            //cout << "myTask():: lock,t=" << t << endl;//锁住了
            this->t++;
        }
        
        //this->testMutex.unlock();//释放锁(解锁)
        testMutex.unlock();
    
        //释放内存
        delete myUniqueLock;
    }
}

//在类外实现函数 - get()函数
long MyThread6::get()
{
    return this->t;
}