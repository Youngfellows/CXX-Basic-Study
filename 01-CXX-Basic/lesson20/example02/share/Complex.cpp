#include "../include/Complex.h"

//在类外定义函数 - 构造函数
Complex::Complex(double real,double image)
{
    cout << "Complex()有参数构造函数" << endl;
    this->real = real;
    this->image = image;
}

//在类外定义函数 - 析构函数
Complex::~Complex()
{
    cout << "~Complex()析构函数" << endl;
}

//在类外定义函数 - getReal()函数
double Complex::getReal()
{
    return this->real;
}

//在类外定义函数 - getImage()函数
double Complex::getImage()
{
    return this->image;
}

//在类外定义函数 - getImage()函数
void Complex::display()
{
    cout << "(" << this->real << "," << this->image << "i)" << endl;
}

//在类外定义函数 - 普通函数 - 实现运算符 + 重载
Complex operator + (Complex &c1,Complex &c2)
{
    cout << "Complex:: 重载运算符 + " << endl;
    return Complex(c1.getReal() + c2.getReal(),c1.getImage() + c2.getImage());
}

