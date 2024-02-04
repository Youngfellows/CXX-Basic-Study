#ifndef MY_THREAD8_H
#define MY_THREAD8_H

#include "./Global.h"

//定义MyThread1类 - 重载()运算符
class MyThread8
{
    private:
        long t;//变量
        mutex testMutex;//互斥量

    public:
        MyThread8();
        ~MyThread8();
        void myTask();//成员函数作为线程入口
        long get();   
};

#endif