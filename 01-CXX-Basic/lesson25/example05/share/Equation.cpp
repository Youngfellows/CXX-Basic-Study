#include "../include/Equation.h"

//在类外实现函数 - 构造函数
Equation::Equation()
{
    cout << "Equation()构造函数" << endl;
    cout << "请输入系数a:" ;
    cin >> this->a;
    cout << "请输入系数b:" ;
    cin >> this->b;
    cout << "请输入系数c:" ;
    cin >> this->c;
    cout << "请输入系数d:" ;
    cin >> this->d;
}

//在类外实现函数 - 构造函数
Equation::~Equation()
{
    cout << "~Equation()析构函数" << endl;
}

//在类外实现函数 - 构造函数
double Equation::solut()
{
    double x = 1;
    double x0;
    double f;//函数f(x)
    double f1;//函数f(x)的导数f1(x)
    do
    {
        x0 = x;
        f = (((this->a * x0 + this->b) * x0 + this->c) * x0 + this->d);
        f1 = (3 * this->a * x0 + 2 * this->b) * x0 + this->c;
        x = x0 - f / f1;
    } while (fabs(x - x0) >= 1e-5);
    return x;
}