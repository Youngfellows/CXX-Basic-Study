#include "./Point.h"

//在类外定义函数 - 构造函数
Point::Point(double x,double y)
{
    cout << "Point()有参数构造函数" << endl;
    this->dx = x;
    this->dx = y;
}

//在类外定义函数 - 析构函数
Point::~Point()
{
    cout << "~Point()析构函数" << endl;
}

//在类外定义函数 - geX()函数
double Point::getX()
{
    return this->dx;
}

//在类外定义函数 - getY()函数
double Point::getY()
{
    return this->dy;
}

//在类外定义函数 - distance()函数
double distance(Point &p1,Point &p2)
{
    return double(sqrt((p1.dx - p2.dx)*(p1.dx - p2.dx) + (p1.dy - p2.dy)*(p1.dy - p2.dy)));
}