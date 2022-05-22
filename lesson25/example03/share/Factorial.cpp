#include "../include/Factorial.h"

//在类外实现函数 - 构造函数
Factorial::Factorial()
{
    cout << "Prime()构造函数" << endl;
    cout << "请输入整数:num1=";
    cin >> this->num1;

    cout << "请输入整数:num2=";
    cin >> this->num2;

    cout << "请输入整数:num3=";
    cin >> this->num3;
}

//在类外实现函数 - 构造函数
Factorial::~Factorial()
{
    cout << "~Prime()析构函数" << endl;
}

int Factorial::sum()//求阶乘的和
{
    return this->fac(this->num1) + this->fac(this->num2) + this->fac(this->num3);
}
        

int Factorial::fac(int num)//求阶乘
{
    int f = 1;
    for(int i = 1; i <= num; i++)
    {
        f = f * i;
    }
    return f;
}
