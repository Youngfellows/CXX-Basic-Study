#ifndef MY_DATE_H
#define MY_DATE_H

#include "./Global.h"
#include "./Date.h"

//定义MyDate类 - 获取日期信息
class MyDate
{
    private:
        struct Date date;//私有属性成员,结构体变量
    public:
        MyDate();//构造函数
        MyDate(int year,int month,int day);//构造函数
        MyDate(struct Date &date);//构造函数
        ~MyDate();//析构函数
        int getDays();//获取指定日期是一年中的第几天
        bool leapYear();//是否是闰年
};

#endif