#ifndef MY_THREAD1_H
#define MY_THREAD1_H

#include "./Global.h"

//定义MyThread1类 - 重载()运算符
class MyThread1
{
    public:
        MyThread1();
        ~MyThread1();
        void operator()();//重载()运算符
};

#endif