#ifndef TIME_H
#define TIME_H

#include<iostream>

using namespace std;

//定义一个Time类 - 时间
class Time
{
    private:
        int hour;//时
        int minute;//分
        int second;//秒
    
    public:
        Time();//构造函数
        Time(int hour,int minute,int second);//构造函数
        ~Time();//析构函数
        void set(int hour,int minute,int second);//设置时间
        void display();//显示时间
};

#endif