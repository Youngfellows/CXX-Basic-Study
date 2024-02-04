#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>

using namespace std;

//定了Complex类 - 复数
class Complex
{
    private:
        double real;//实部
        double image;//虚部

    public:
        Complex();//构造函数
        Complex(double real);//构造函数
        Complex(double real,double image);//构造函数
        ~Complex();//析构函数
        void display();//显示函数

        //成员函数,重载double()运算符
        operator double();
        //成员函数,重载double()运算符
};

#endif