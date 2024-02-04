#include "../include/Date.h"

//在类外定义函数 - 构造函数
Date::Date(int year,int month,int day)
{
    cout << "Date()有参数构造函数" << endl;
    this->year = year;
    this->month = month;
    this->day = day;
}

//在类外定义函数 - 析构函数
Date::~Date()
{
    cout << "~Date()析构函数" << endl;
}
