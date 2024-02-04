#include "../include/MaxMin.h"

//在类外实现函数 - 构造函数
MaxMin::MaxMin()
{
    cout << "MaxMin()构造函数" << endl;
}

//在类外实现函数 - 析构函数
MaxMin::MaxMin(int a,int b)
{
    cout << "~MaxMin()析构函数" << endl;
    this->number1 = a;
    this->number2 = b;
}

//在类外实现函数 - max()函数
int MaxMin::max()
{
    int u = this->number1;
    int v = this->number2;
    int r;
    int t;
    if(v > u)
    {
        t = u;
        u = v;
        v = t;
    }
    while((r = u % v) != 0)
    {
        u = v;
        v = r;
    }

    return v;
}

//在类外实现函数 - min()函数
int MaxMin::min()
{
    return this->number1 * this->number2 / max();
}