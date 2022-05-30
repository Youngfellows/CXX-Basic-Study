#ifndef MY_THREAD7_H
#define MY_THREAD7_H

#include "./Global.h"

//定义MyThread1类 - 重载()运算符
class MyThread7
{
    private:
        long t;//变量
        mutex testMutex;//互斥量

    public:
        MyThread7();
        ~MyThread7();
        void myTask();//成员函数作为线程入口
        long get();   
};

#endif