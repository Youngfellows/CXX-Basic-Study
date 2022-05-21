#include "../include/YearMonth.h"

//在类外定义函数 - 构造函数
YearMonth::YearMonth()
{
    cout << "YearMonth()构造函数" << endl;
    this->init();
}

//在类外定义函数 - 构造函数
YearMonth::YearMonth(int y,int m,int d)
{
    cout << "YearMonth()有参数构造函数" << endl;
    this->init();
    this->year = y;
    this->month = m;
    this->day = d;
}

//在类外定义函数 - 析构函数
YearMonth::~YearMonth()
{
    cout << "~YearMonth()析构函数" << endl;
}

//初始化数据
void YearMonth::init()
{
    cout << "init():: ..." << endl;
    //保存每月有多少天的数组
    int days[SIZE] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int *p = days;
    for(int i = 0; i < SIZE; i++)
    {
        int day = *(p + i);
        cout.width(3);
        cout << day << " ";
        *(this->daysArray + i) = *(p + i);  //为数组元素赋值
        //this->dayArray[i] = *(p + i);
    }
    cout << endl;
}

//在类外定义函数 - getDay()函数
int * YearMonth::getDay()
{
    cout << "getDay():: ..." << endl;
    //动态申请内存,并返回内存的地址,在连续空间保存数据
    int *p = (int *)malloc(SIZE * sizeof(int));//申请13个连续内存空间,保存int类型数据
    for(int i = 0; i < SIZE; i++)
    {
        //*(p + i) = (this->daysArray + i);
        *(p + i) = this->daysArray[i];//在申请的内存空间写入数据
    }
    return p;//返回内存空间地址
}

//在类外定义函数 - display()函数
void YearMonth::display(int *p)
{
    for(int i = 0; i < SIZE; i++)
    {
        int day = *(p + i);//通过指针访问元素
        cout.width(3);
        cout << day << " ";
    }
    cout << endl;
}

//在类外定义函数 - days()函数
int YearMonth::days()
{
    cout << "days():: ..." << endl;
    int day = 0;
    int *p = this->getDay();//获取月份数组
    for(int i = 0; i < this->month - 1; i++)
    {   
        day += *(p + i);//累计月天
    }
    cout << "1,day:" << day << endl;
    //闰年3月份以后多一天
    if(leap() && (this->month >= 3))
    {
        day += 1;
    }
    day += this->day;
    cout << "2,day:" << day << endl;
    return day;
}


//在类外定义函数 - leap()函数
bool YearMonth::leap()
{
    bool leap1 = (((this->year % 4) == 0) && ((this->year % 100) != 0)) || ((this->year % 400) == 0);
    cout << "是否闰年:" << leap1 << endl;
    return leap1;
}