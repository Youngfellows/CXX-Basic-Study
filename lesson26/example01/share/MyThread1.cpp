#include "../include/MyThread1.h"

//在类外实现函数 - 构造函数
MyThread1::MyThread1()
{
    cout << "MyThread1()构造函数" << endl;
}

//在类外实现函数 - 析构函数
MyThread1::~MyThread1()
{
    cout << "~MyThread1()析构函数" << endl;
}

//在类外实现函数 - 重载()运算符
void MyThread1::operator()()
{
    cout << "operator():: ..." << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << "operator():: i=" << i << endl;
    }
}