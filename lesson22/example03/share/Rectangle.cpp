#include "../include/Rectangle.h"

//在类外实现函数 - 构造函数
Rectangle::Rectangle(double width,double height)
{
    cout << "Rectangle()有参数构造函数" << endl;
    this->width = width;
    this->height = height;
}

//在类外实现函数 - 析构函数
Rectangle::~Rectangle()
{
    cout << "~Rectangle()析构函数" << endl;
}

//在类外实现函数 - 实现接口area()函数
double Rectangle::area() const
{
    cout << "Rectangle::area() ..." << endl;
    return this->width * this->height;
}
