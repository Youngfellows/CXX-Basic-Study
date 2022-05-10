#include "./Point.h"

//在类外定义函数 - 构造函数
Point::Point()
{
    cout << "Point()有参数构造函数" << endl;
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

//重载输入运算符 >>
istream & operator >> (istream &in,Point &p)
{
    cout << "请输入dx、dy的值:" << endl;
    cout << "dx=" ;
    in >> p.dx;
    cout << "dy=";
    in >> p.dy;
    return in;
}

//重载输入运算符 <<
ostream & operator << (ostream &out,Point &p)
{
    out << "输出dy、dy的值" << endl;
    out << "(" << p.dx << "," << p.dy << ")" << endl;
    return out;
}