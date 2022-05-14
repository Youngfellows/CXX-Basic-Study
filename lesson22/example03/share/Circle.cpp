#include "../include/Circle.h"

//在类外实现函数 - 构造函数
Circle::Circle(double radius)
{
    cout << endl;
    cout << "Circle()有参数构造函数" << endl;
    this->radius = radius;
}

//在类外实现函数 - 析构函数
Circle::~Circle()
{
    cout << "~Circle()析构函数" << endl;
}

//在类外实现函数 - 实现接口area()函数
double Circle::area() const
{
    cout << endl;
    cout << "Circle::area() ..." << endl;
    return PI * this->radius * this->radius;
}
