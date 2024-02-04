#include "../include/Complex2.h"

//在类外定义函数 - 构造函数
Complex2::Complex2(double real,double image)
{
    cout << "Complex2()有参数构造函数" << endl;
    this->real = real;
    this->image = image;
}

//在类外定义函数 - 析构函数
Complex2::~Complex2()
{
    cout << "~Complex2()析构函数" << endl;
}

//在类外定义函数 - getReal()函数
double Complex2::getReal()
{
    return this->real;
}

//在类外定义函数 - getImage()函数
double Complex2::getImage()
{
    return this->image;
}

//在类外定义函数 - getImage()函数
void Complex2::display()
{
    cout << "(" << this->real << "," << this->image << "i)" << endl;
}

//在类外定义函数 - 普通函数 - 实现运算符 + 重载
Complex2 operator - (Complex2 &c1,Complex2 &c2)
{
    cout << "Complex2:: 重载运算符 - " << endl;
    return Complex2(c1.getReal() - c2.getReal(),c1.getImage() - c2.getImage());
}

