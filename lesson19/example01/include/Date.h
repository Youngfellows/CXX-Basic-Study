#ifndef DATE_H
#define DATE_H

#include<iostream>

using namespace std;

//定义Date类 - 日期类
class Date
{
    private:
        int year;//年
        int month;//月
        int day;//日

    public:
        Date();//构造函数
        Date(int year);//重载构造函数
        Date(int year,int month);//重载构造函数
        Date(int year,int month,int day);//重载构造函数
        void display();//显然日期
};

#endif