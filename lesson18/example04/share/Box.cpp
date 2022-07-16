#include "../include/Box.h"

//在类外定义函数 - 构造函数
Box::Box()
{
    cout << "Box()构造函数" << endl;
}

//在类外定义函数 - 构造函数
Box::Box(double l,double w,double h)
{
    cout << "Box()有参数构造函数" << endl;
    this->length = l;
    this->width = w;
    this->heigth = h;
}

//在类外定义函数 - 析构函数
Box::~Box()
{
    cout << "~Box()析构函数" << endl;
}

//在类外定义函数 - volume()函数
double Box::volume()
{
    return this->length * this->width * this->heigth;
}

