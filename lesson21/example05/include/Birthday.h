#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include "./Global.h"

//定义Birthday类 - 生日类
class Birthday
{
    private:
        int year;//年
        int month;//月
        int day;//日

    public:
        Birthday();//构造函数
        Birthday(int year,int month,int day);//构造函数
        ~Birthday();//析构函数
        void display();//显示生日信息
        int getYear();//获取年
        int getMonth();//获取月
        int getDay();//获取日
};

#endif