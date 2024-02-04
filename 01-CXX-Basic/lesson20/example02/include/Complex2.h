#ifndef COMPLEX2_H
#define COMPLEX2_H

#include<iostream>

using namespace std;

//定义Complex类 - 复数
class Complex2
{
    private:
        double real;//实部
        double image;//虚部

    public:
        Complex2(double real,double image);//构造函数
        ~Complex2();//析构函数
        double getReal();//获取实部
        double getImage();//获取虚部
        void display();//显示
};

//声明一个普通函数 - 使用非友元函数,非成员函数 - 重载 - 运算符号
Complex2 operator - (Complex2 &c1,Complex2 &c2);

#endif