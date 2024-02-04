#include "../include/Point.h"

//在类外定义函数 - 构造函数
Point::Point()
{
    cout << "Point()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
Point::Point(float x,float y):dx(x) //使用参数列表为成员属性赋值
{
    cout << "Point()有参数构造函数" << endl;
    this->dy = y;
}

//在类外定义函数 - 析构函数
Point::~Point()
{
    cout << "~Point()析构函数" << endl;
}

//在类外定义函数 - setPoint函数
void Point::setPoint(float x,float y)
{
    this->dx = x;
    this->dy = y;
}

//在类外定义函数 - getX()函数
float Point::getX()
{
    return this->dx;
}

//在类外定义函数 - getY()函数
float Point::getY()
{
    return this->dy;
}

//在类外定义函数 - 普通函数 - 重载输出运算符 << 
ostream & operator << (ostream &out,const Point &p)
{
    out << "[" << p.dx << "," << p.dy << "]" << endl;
    return out;
}