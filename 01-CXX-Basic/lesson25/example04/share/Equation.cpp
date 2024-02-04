#include "../include/Equation.h"

//在类外实现函数 - 构造函数
Equation::Equation(){
    cout << "Equation()构造函数" << endl;
    cout << "请输入一元二次方程的系数: a=";
    cin >> this->a;
    cout << "请输入一元二次方程的系数: b=";
    cin >> this->b;
    cout << "请输入一元二次方程的系数: b=";
    cin >> this->c;
}

//在类外实现函数 - 析构函数
Equation::~Equation()
{
    cout << "~Equation()析构函数" << endl;
}

//在类外实现函数 - 获取判别式的值
float Equation::getDisc()
{
    return this->b * this->b - 4 * this->a * this->c;
}

//在类外实现函数 - 获取实数根x1
float Equation::getX1()
{
    float x = (-this->b + sqrt(getDisc()))/(2 * this->a);
    return  x;
}

//在类外实现函数 - 获取实数根x2
float Equation::getX2()
{
    float x = (-this->b - sqrt(getDisc()))/(2 * this->a);
    return x;
}

//在类外实现函数 - 获取实数根x12
float Equation::getX12()
{
    return (-this->b)/(2 * this->a);
}

//在类外实现函数 - 获取复数根c1
Complex Equation::getC1()
{
    float p = -this->b / (2 * this->a);
    float q = sqrt(- this->getDisc()) / (2 * this->a);
    Complex *c = new Complex(p,q);
    return *c;
}

//在类外实现函数 - 获取复数根c2
Complex Equation::getC2()
{
    float p = -this->b / (2 * this->a);
    float q = -sqrt(- this->getDisc()) / (2 * this->a);
    Complex *c = new Complex(p,q);
    return *c;
}
