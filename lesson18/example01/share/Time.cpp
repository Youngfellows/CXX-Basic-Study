#include "../include/Time.h"

//在类外定义函数 - 构造函数
Time::Time()
{
    cout << "Time()构造函数" << endl;
}

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

//在类外定义函数 - set()函数
void Time::set(int hour,int minute,int second)
{
     cout << "set()::" << endl;
     this->hour = hour;
     this->minute = minute;
     this->second = second;
}

//在类外定义函数 - display()函数
void Time::display()
{
    cout << this->hour << "时" << this->minute << "分" << this->second << "秒" << endl;
}