#include "../include/MyThread4.h"

//在类外实现函数 - 构造函数
MyThread4::MyThread4()
{
    cout << "MyThread4()构造函数" << endl;
}

//在类外实现函数 - 析构函数
MyThread4::~MyThread4()
{
    cout << "~MyThread4()析构函数" << endl;
}

//在类外实现函数 - 重载()运算符
void MyThread4::myThreadIn()
{
    cout << "myThreadIn():: ..." << endl;
    for(int i = 0; i < 100000; i++)
    {
        //cout << "myThreadIn():: i=" << i << endl;
        //this->testMutex.lock();//加锁
        std::lock_guard<std::mutex> lock(testMutex);//自动加锁&自动解锁
        this->t++;
        //this->testMutex.unlock();//释放锁(解锁)
    }
}

//在类外实现函数 - get()函数
long MyThread4::get()
{
    return this->t;
}