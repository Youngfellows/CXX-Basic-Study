#include "../include/MyThread2.h"

//在类外实现函数 - 构造函数
MyThread2::MyThread2()
{
    cout << "MyThread2()构造函数" << endl;
}

//在类外实现函数 - 析构函数
MyThread2::~MyThread2()
{
    cout << "~MyThread2()析构函数" << endl;
}

//在类外实现函数 - 重载()运算符
void MyThread2::myThreadIn()
{
    cout << "myThreadIn():: ..." << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << "myThreadIn():: i=" << i << endl;
    }
}