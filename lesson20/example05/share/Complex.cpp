#include "../include/Complex.h"

//在类外定义函数 - 构造函数
Complex::Complex()
{
    cout << "Complex()无参数构造函数" << endl;
    this->real = 0;
    this->image = 0;
}

//在类外定义函数 - 构造函数
Complex::Complex(double real)
{
    cout << "Complex()无参数构造函数" << endl;
    this->real = real;
    this->image = 0;
}


//在类外定义函数 - 构造函数
Complex::Complex(double real,double image)
{
    cout << "Complex()无参数构造函数" << endl;
    this->real = real;
    this->image = image;
}

//在类外定义函数 - 析构函数
Complex::~Complex()
{
    cout << "~Complex()析构函数" << endl;
}


//在类外定义函数 - display()函数
void Complex::display()
{
    cout << "(" << this->real << "," << this->image << "i)" << endl;
}

//在类外定义函数 - 定义可以double()类型转换的成员函数
double operator Complex::double()
{
    return this->real;
}

