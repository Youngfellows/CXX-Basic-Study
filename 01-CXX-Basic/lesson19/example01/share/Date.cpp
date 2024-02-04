#include "../include/Date.h"

//在类外定义函数 - 构造函数
Date::Date()
{
    this->year = 2022;
    this->month = 1;
    this->day = 1;
}

//在类外定义函数 - 重载构造函数
Date::Date(int year)
{
    this->year = year;
    this->month = 1;
    this->day = 1;
}

//在类外定义函数 - 重载构造函数
Date::Date(int year,int month)
{
    this->year = year;
    this->month = month;
    this->day = 1;
}

//在类外定义函数 - 重载构造函数
Date::Date(int year,int month,int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}

//在类外定义函数 - display()函数
void Date::display()
{
    cout << this->year << "年" << this->month << "月" << this->day << "日" << endl; 
}

