#ifndef MY_THREAD2_H
#define MY_THREAD2_H

#include "./Global.h"

//定义MyThread1类 - 重载()运算符
class MyThread2
{
    public:
        MyThread2();
        ~MyThread2();
        void myThreadIn();//成员函数作为线程入口
};

#endif