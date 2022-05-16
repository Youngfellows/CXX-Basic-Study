#include "../include/Birthday.h"

//在类外定义函数 - 构造函数
Birthday::Birthday()
{
    cout << "Birthday()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
Birthday::Birthday(int year,int month,int day)
{
    cout << "Birthday()有参数构造函数" << endl;
    this->year = year;
    this->month = month;
    this->day = day;
}

//在类外定义函数 - 析构函数
Birthday::~Birthday()
{
    cout << "~Birthday()析构函数" << endl;
}

//在类外定义函数 - getYear()函数
int Birthday::getYear()
{
    return this->year;
}

//在类外定义函数 - getMonth()函数
int Birthday::getMonth()
{
    return this->month;
}

//在类外定义函数 - getDay()函数
int Birthday::getDay()
{
    return this->day;
}

//在类外定义函数 - display()函数
void Birthday::display()
{
    cout << "Birthday::display() ~~~ " << endl;
    cout << "年:" << this->year << endl;
    cout << "月:" << this->month << endl;
    cout << "日:" << this->day << endl;
}
