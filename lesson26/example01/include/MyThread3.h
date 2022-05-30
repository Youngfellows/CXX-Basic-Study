#ifndef MY_THREAD3_H
#define MY_THREAD3_H

#include "./Global.h"

//定义MyThread1类 - 重载()运算符
class MyThread3
{
    private:
        long t;//变量
        mutex testMutex;//

    public:
        MyThread3();
        ~MyThread3();
        void myThreadIn();//成员函数作为线程入口
        long get();   
};

#endif