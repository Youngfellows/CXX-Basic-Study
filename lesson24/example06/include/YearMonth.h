#ifndef YEAR_MONTH_H
#define YEAR_MONTH_H

#include "./Global.h"

//定义YearMonth类
class YearMonth
{
    private:
        int year;//年
        int month;//月
        int day;//日
        int daysArray[SIZE];//月份数组

    public:
        YearMonth();//构造函数
        YearMonth(int y,int m,int d);//构造函数
        ~YearMonth();//析构函数
        int days();//计算日期是一年中的第几天
        int *getDay();//获取月份数组
        void display(int *p);//打印月份数组

    private:
        void init();//初始化数据
        bool leap();//是否是闰年
};

#endif