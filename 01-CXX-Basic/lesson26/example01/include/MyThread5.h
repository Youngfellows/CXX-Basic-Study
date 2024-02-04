#ifndef MY_THREAD5_H
#define MY_THREAD5_H

#include "./Global.h"

//定义MyThread1类 - 重载()运算符
class MyThread5
{
    private:
        long t;//变量
        mutex testMutex1;//互斥量1
        mutex testMutex2;//互斥量1

    public:
        MyThread5();
        ~MyThread5();
        void myTask1();//成员函数作为线程入口
        void myTask2();//成员函数作为线程入口
        long get();   
};

#endif