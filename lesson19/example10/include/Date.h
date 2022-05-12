#ifndef DATE_H
#define DATE_H

#include<iostream>
#include "./Time.h"

using namespace std;

class Time;

//定义Date类 - 日期
class Date
{
    private:
        int year;//年
        int month;//月
        int day;//日

    public:
        Date(int year,int month,int day);//构造函数
        ~Date();//析构函数
        //定义display函数是类Date的友元函数,display可以访问Date对象的私有成员
        friend void display(const Date &date,const Time &time);
};

#endif