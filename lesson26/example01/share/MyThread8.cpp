#include "../include/MyThread8.h"

//在类外实现函数 - 构造函数
MyThread8::MyThread8()
{
    cout << "MyThread8()构造函数" << endl;
}

//在类外实现函数 - 析构函数
MyThread8::~MyThread8()
{
    cout << "~MyThread8()析构函数" << endl;
}

//在类外实现函数 - myTask1()成员函数作为线程入口
void MyThread8::myTask()
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
        //std::unique_lock<mutex> *myUniqueLock = new std::unique_lock<mutex>(testMutex,std::try_to_lock);

        //defer_lock 则是完全手动模式 需要手动调用lock（） unlock() 加锁解锁 使用api try_lock() 来进行尝试加锁 如果没有锁住则返回true 加锁成功 如果锁了则返回false 加锁失败
        // std::unique_lock<mutex> *myUniqueLock = new std::unique_lock<mutex>(testMutex,std::defer_lock);
        // if (myUniqueLock->try_lock())
        // { 
        //     //cout << "myTask():: lock,t=" << t << endl;//锁住了
        //     this->t++;
        //     this->testMutex.unlock();//释放锁(解锁)
        // }else
        // {
        //     //cout << "myTask():: not lock ..." << endl;//没有锁住
        // }

        //adopt_lock_t是指已知该mutex上锁，直接持有该mutex
        //testMutex.lock();
        std::unique_lock<mutex> *myUniqueLock = new std::unique_lock<mutex>(testMutex);
        myUniqueLock->lock();//上锁,有bug
        this->t++;

        myUniqueLock->unlock();//释放锁
        
        //释放内存
        delete myUniqueLock;
    }
}

//在类外实现函数 - get()函数
long MyThread8::get()
{
    return this->t;
}