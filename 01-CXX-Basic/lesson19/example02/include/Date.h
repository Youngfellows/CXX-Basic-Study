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
        Date(int year = 2022,int month = 1,int day = 1);//使用带有默认构造函数
        void display();//显然日期
};

#endif