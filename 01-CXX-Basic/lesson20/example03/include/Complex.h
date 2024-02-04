#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>

using namespace std;

//定义Complex类 - 复数
class Complex
{
    private:
        double real;//实部
        double image;//虚部

    public:
        Complex(double real,double image);//构造函数
        ~Complex();//析构函数
        double getReal();//获取实部
        double getImage();//获取虚部
        void display();//显示
};

//声明一个普通函数 - 使用非友元函数,非成员函数 - 重载 + 运算符号
Complex operator + (Complex &c1,Complex &c2);

#endif