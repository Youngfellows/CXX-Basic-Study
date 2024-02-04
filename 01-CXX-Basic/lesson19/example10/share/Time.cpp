#include "../include/Time.h"

//在类外定义函数 - 构造函数
Time::Time(int hour,int minute,int second)
{
    cout << "Time()有参数构造函数" << endl;
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

//在类外定义函数 - 析构函数
Time::~Time()
{
    cout << "~Time()析构函数" << endl;
}
