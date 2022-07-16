#ifndef DATE_H
#define DATE_H

#include<iostream>
#include "./Time.h"

using namespace std;

class Time;//预先引用,稍后定义

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
        friend Time;//Time类是类Date类的友元类,Time类可以访问Date类的私有数据
};

#endif