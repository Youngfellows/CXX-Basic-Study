#include "../include/Cylinder.h"

//在类外定义函数 - 构造函数
Cylinder::Cylinder()
{
    cout << "Cylinder()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
Cylinder::Cylinder(float dx,float dy,float radius,float h):
Circle(dx,dy,radius),height(h)//使用参数列表初始化父类和成员属性height
{
    cout << "Cylinder()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
Cylinder::Cylinder(Circle &c,float height):Circle(c.getX(),c.getY(),c.getRadius())
{
    cout << "Cylinder()无参数构造函数" << endl;
    this->height = height;
}

//在类外定义函数 - 构造函数
Cylinder::~Cylinder()
{
    cout << "~Cylinder()析构函数" << endl;
}

//在类外定义函数 - setHeight()函数
void Cylinder::setHeight(float height)
{
    this->height = height;
}

//在类外定义函数 - getHeigh()函数
float Cylinder::getHeight()
{
    return this->height;
}

//在类外定义函数 - 构造函数
float Cylinder::area()
{
    //cout << "Cylinder::area() ~~~ " << endl;
    return Circle::area() * this->height;
}

//在类外定义函数 - 普通函数 - 重载输出运算符 << 
ostream & operator << (ostream &out,Cylinder &cy)
{
    out << "Center=[" << cy.dx << "," << cy.dy << "],r=" << cy.radius 
    << ",height=" << cy.height
    << ",area=" << cy.area() << endl;
    return out;
}
