#include "../include/Square.h"

//在类外实现函数 - 构造函数
Square::Square(double side)
{
    //cout << endl;
    cout << "Square()有参数构造函数" << endl;
    this->side = side;
}

//在类外实现函数 - 析构函数
Square::~Square()
{
    //cout << endl;
    cout << "~Square()析构函数" << endl;
}

//在类外实现函数 - 实现接口area()函数
double Square::area() const
{
    //cout << endl;
    cout << "Square::area() ..." << endl;
    return this->side * this->side;
}
