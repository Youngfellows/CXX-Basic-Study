#include "Circle.h"

//实现Circle.h头文件
Circle::Circle()
{
    std::cout << "Circle()构造函数" << std::endl;
    this->radius = 0.0;
}

Circle::Circle(double r)//构造函数
{
    std::cout << "Circle()有参构造函数" << std::endl;
    this->radius = r;
    std::cout << "半径: " << this->radius << std::endl;
}

Circle::~Circle()
{
    std::cout << "～Cicle()析构函数" << std::endl;
}

void Circle::setRadius(double r)//设置半径
{
    std::cout << "setRadius()" << std::endl;
    this->radius = r;
}

double Circle::getArea()
{
   std::cout << "getArea,获取到半径: " << this->radius << std::endl;
   this->area = PI * this->radius * this->radius;//面积 
   return this->area;
}

double Circle::getRadius()
{
    return this->radius;
}