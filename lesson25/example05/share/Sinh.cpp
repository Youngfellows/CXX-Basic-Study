#include "../include/Sinh.h"

//在类外实现函数 - 构造函数
Sinh::Sinh()
{
    cout << "Sinh()构造函数" << endl;
    cout << "请输入x:";
    cin >> this->x;
}

//在类外实现函数 - 构造函数
Sinh::~Sinh()
{
    cout << "~Sinh()析构函数" << endl;
}

//在类外实现函数 - 构造函数
double Sinh::sinh()
{
    return (e(x) + e(-x))/2;
}

//在类外实现函数 - 构造函数
double Sinh::e(double x)
{
    return exp(x);
}

