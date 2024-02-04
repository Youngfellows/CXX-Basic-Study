#ifndef COMPLEX4_H
#define COMPLEX4_H

#include<iostream>

using namespace std;

//定义Complex类 - 复数
class Complex4
{
    private:
        double real;//实部
        double image;//虚部

    public:
        Complex4(double real,double image);//构造函数
        ~Complex4();//析构函数
        double getReal();//获取实部
        double getImage();//获取虚部
        void display();//显示

        Complex4 operator + (Complex4 &c); //成员函数 - 重载 + 运算符号
        Complex4 operator + (int &i); //成员函数 - 重载 + 运算符号
        friend Complex4 operator + (int &i,Complex4 &c);
};



#endif