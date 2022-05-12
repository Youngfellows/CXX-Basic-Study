#include "../include/Complex3.h"

//在类外定义函数 - 构造函数
Complex3::Complex3(double real,double image)
{
    cout << "Complex3()有参数构造函数" << endl;
    this->real = real;
    this->image = image;
}

//在类外定义函数 - 析构函数
Complex3::~Complex3()
{
    cout << "~Complex3()析构函数" << endl;
}

//在类外定义函数 - getReal()函数
double Complex3::getReal()
{
    return this->real;
}

//在类外定义函数 - getImage()函数
double Complex3::getImage()
{
    return this->image;
}

//在类外定义函数 - getImage()函数
void Complex3::display()
{
    cout << "(" << this->real << "," << this->image << "i)" << endl;
}

//在类外定义函数 - 普通函数 - 实现运算符 + 重载
Complex3 operator * (Complex3 &c1,Complex3 &c2)
{
    double real = c1.real * c2.real - c1.image * c2.image;
    double image = c1.real* c2.image + c1.image * c2.real;
    cout << "Complex3:: 重载运算符 * " << endl;
    return Complex3(real,image);
}

