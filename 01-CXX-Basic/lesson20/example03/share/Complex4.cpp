#include "../include/Complex4.h"

//在类外定义函数 - 构造函数
Complex4::Complex4(double real,double image)
{
    cout << "Complex()有参数构造函数" << endl;
    this->real = real;
    this->image = image;
}

//在类外定义函数 - 析构函数
Complex4::~Complex4()
{
    cout << "~Complex4()析构函数" << endl;
}

//在类外定义函数 - getReal()函数
double Complex4::getReal()
{
    return this->real;
}

//在类外定义函数 - getImage()函数
double Complex4::getImage()
{
    return this->image;
}

//在类外定义函数 - getImage()函数
void Complex4::display()
{
    cout << "(" << this->real << "," << this->image << "i)" << endl;
}

//在类外定义函数 - 成员函数 - 实现运算符 + 重载
Complex4 Complex4::operator + (Complex4 &c)
{
    cout << "Complex4:: 重载运算符 + " << endl;
    return Complex4(this->real + c.real,this->image + c.image);
}

//在类外定义函数 - 成员函数 - 实现运算符 + 重载
Complex4 Complex4::operator + (int &i)
{
    cout << "Complex4:: 重载运算符 + " << endl;
    return Complex4(this->real + i,this->image);
}

//在类外定义函数 - 友元函数 - 实现运算符 + 重载
Complex4 operator + (int &i,Complex4 &c)
{
    cout << "Complex4:: 重载运算符 + " << endl;
    return Complex4(i+c.real,c.image);
}

