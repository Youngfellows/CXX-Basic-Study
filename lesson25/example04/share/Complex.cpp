#include "../include/Complex.h"

//在类外实现函数 - 构造函数
Complex::Complex()
{
    cout << "Complex()无参数构造函数" << endl;  
}

//在类外实现函数 - 构造函数
Complex::Complex(float real,float image)
{
    cout << "Complex()构造函数" << endl;
    this->real = real;
    this->image = image;
}

//在类外实现函数 - 析构函数
Complex::~Complex()
{
    cout << "~Complex()析构函数" << endl;
}

//显示复数
void Complex::display()
{
    cout << "(" << this->real << "," << this->image << "i)" << endl;
}

//获取实部
float Complex::getReal()
{
    return this->real;
}

//获取虚部
float Complex::getImage()
{
    return this->image;
}