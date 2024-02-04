#ifndef MY_THREAD4_H
#define MY_THREAD4_H

#include "./Global.h"

//定义MyThread1类 - 重载()运算符
class MyThread4
{
    private:
        long t;//变量
        mutex testMutex;//

    public:
        MyThread4();
        ~MyThread4();
        void myThreadIn();//成员函数作为线程入口
        long get();   
};

#endif