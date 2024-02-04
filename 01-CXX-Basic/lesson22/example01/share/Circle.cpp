#include "../include/Circle.h"

//在类外定义函数 - 构造函数
Circle::Circle()
{
    cout << "Circle()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
Circle::Circle(float x,float y,float r):Point(x,y),radius(r)//使用参数类别初始化基类和初始化radius成员属性
{
    cout << "Circle()有参数构造函数" << endl;
}

//在类外定义函数 - 构造函数,使用参数类别初始化基类和初始化radius成员属性
// Circle::Circle(Point &p,float r):Point(p.getX(),p.getY()),radius(r)
// {
//     cout << "Circle()有参数构造函数" << endl;
// }

//在类外定义函数 - 构造函数,使用参数类别初始化基类和初始化radius成员属性
Circle::Circle(Point &p,float r):Point(p.getX(),p.getY())
{
    cout << "Circle()有参数构造函数" << endl;
    this->radius = r;
}

//在类外定义函数 - 析构函数
Circle::~Circle()
{
    cout << "~Circle()析构函数" << endl;
}

//在类外定义函数 - setRadius()函数
void Circle::setRadius(float r)
{
    this->radius = r;
}

//在类外定义函数 - 析构函数
float Circle::getRadius()
{
    return this->radius;
}

//在类外定义函数 - area()函数
float Circle::area()
{
    //cout << "Circle::area() ..." << endl;
    return PI * this->radius * this->radius;
}


//在类外定义函数 - 普通函数 - 重载输出运算符 << 
ostream & operator << (ostream &out,Circle &c)
{
    out << "Center=[" << c.dx << "," << c.dy << "],r=" << c.radius << ",area=" << c.area() << endl;
    return out;
}
