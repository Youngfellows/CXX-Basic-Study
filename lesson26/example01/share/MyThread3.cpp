#include "../include/MyThread3.h"

//在类外实现函数 - 构造函数
MyThread3::MyThread3()
{
    cout << "MyThread3()构造函数" << endl;
}

//在类外实现函数 - 析构函数
MyThread3::~MyThread3()
{
    cout << "~MyThread3()析构函数" << endl;
}

//在类外实现函数 - 重载()运算符
void MyThread3::myThreadIn()
{
    cout << "myThreadIn():: ..." << endl;
    for(int i = 0; i < 100000; i++)
    {
        //cout << "myThreadIn():: i=" << i << endl;
        this->testMutex.lock();//加锁
        this->t++;
        this->testMutex.unlock();//释放锁(解锁)
    }
}

//在类外实现函数 - get()函数
long MyThread3::get()
{
    return this->t;
}