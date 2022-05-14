#include "../include/Triangle.h"

//在类外实现函数 - 构造函数
Triangle::Triangle(double width,double height)
{
    cout << "Triangle()有参数构造函数" << endl;
    this->width = width;
    this->height = height;
}

//在类外实现函数 - 析构函数
Triangle::~Triangle()
{
    cout << "~Triangle()析构函数" << endl;
}

//在类外实现函数 - 实现接口area()函数
double Triangle::area() const
{
    cout << "Triangle::area() ..." << endl;
    return (this->width * this->height)/2.0;
}
