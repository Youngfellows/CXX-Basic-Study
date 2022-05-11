#ifndef TIME_H
#define TIME_H

#include<iostream>
#include "./Date.h"

using namespace std;

class Date;//预引用

//定义Time类 - 日期
class Time
{
    private:
        int hour;//时
        int minute;//分
        int second;//秒

    public:
        Time(int hour,int minute,int second);//构造函数
        ~Time();//析构函数
        //定义display函数是类Date的友元函数,display可以访问Date对象的私有成员
        friend void display(const Date &date,const Time &time);
};

#endif