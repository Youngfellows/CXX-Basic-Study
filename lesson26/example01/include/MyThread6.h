#ifndef MY_THREAD6_H
#define MY_THREAD6_H

#include "./Global.h"

//定义MyThread1类 - 重载()运算符
class MyThread6
{
    private:
        long t;//变量
        mutex testMutex;//互斥量

    public:
        MyThread6();
        ~MyThread6();
        void myTask();//成员函数作为线程入口
        long get();   
};

#endif