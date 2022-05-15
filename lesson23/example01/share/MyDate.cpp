#include "../include/MyDate.h"

//在类外实现函数 - 构造函数
MyDate::MyDate()
{
    cout << "MyDate()构造函数" << endl;
}

//在类外实现函数 - 构造函数
MyDate::MyDate(int year,int month,int day)
{
    cout << "MyDate()有参数构造函数1" << endl;
    this->date.year = year;
    this->date.month = month;
    this->date.day = day;
}

//在类外实现函数 - 构造函数
MyDate::MyDate(struct Date &d)
{
    cout << "MyDate()有参数构造函数2" << endl;
    this->date = d;
}

//在类外实现函数 - 析构函数
MyDate::~MyDate()
{
    cout << "~MyDate()析构函数" << endl;
}

/**
 * @brief 在类外实现函数,获取指定日期是一年中的第几天
 * 
 * @return int 返回指定日期是一年中的第几天
 */
int MyDate::getDays()
{
    cout << "getDays() ..." << endl;
    int days = 0;
    int month = this->date.month;
    cout << "getDays:: month:" << month << endl;
    for(int i = 0; i < month; i++)
    {
        days += DAYS[i];
    }
    cout << "getDays:: 1,days:" << days << endl;
    //是否是闰年
    if(leapYear())
    {
        cout << this->date.year << "年是闰年 __^_^__" << endl;
        days += 1;
    }
    cout << "getDays:: 2,days:" << days << endl;
    return days;
}

/**
 * @brief 是否是闰年
 * 
 * @return true 是闰年
 * @return false 不是闰年
 */
bool MyDate::leapYear()
{
    int year = this->date.year;
    int month = this->date.month;
    if(((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) && month >= 3)
    {
        return true;
    }
    return false;
}