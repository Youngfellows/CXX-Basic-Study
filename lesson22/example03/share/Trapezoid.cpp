#include "../include/Trapezoid.h"

//在类外实现函数 - 构造函数
Trapezoid::Trapezoid(double tom,double bottom,double height)
{
    cout << "Trapezoid()有参数构造函数" << endl;
    this->top = top;
    this->bottom = bottom;
    this->height = height;
}

//在类外实现函数 - 析构函数
Trapezoid::~Trapezoid()
{
    cout << "~Trapezoid()析构函数" << endl;
}

//在类外实现函数 - 实现接口area()函数
double Trapezoid::area() const
{
    cout << "Trapezoid::area() ..." << endl;
    return (this->top + this->bottom) * this->height / 2.0;
}
