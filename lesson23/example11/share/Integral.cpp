#include "../include/Integral.h"

//在类外定义函数 - 构造函数
Integral::Integral()
{
    cout << "Integral()构造函数" << endl;
}

//在类外定义函数 - 构造函数
Integral::Integral(int bottom,int top,int count)
{
    cout << "Integral()构造函数" << endl;
}

//在类外定义函数 - 析构函数
Integral::~Integral()
{
    cout << "~Integral()析构函数" << endl;
}

//在类外定义函数 - calIntegral()函数
float Integral::calIntegral(FUNCTION func)//计算定积分
{
    
}