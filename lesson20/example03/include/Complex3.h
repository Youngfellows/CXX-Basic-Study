#ifndef COMPLEX3_H
#define COMPLEX3_H

#include<iostream>

using namespace std;

//定义Complex类 - 复数
class Complex3
{
    private:
        double real;//实部
        double image;//虚部

    public:
        Complex3(double real,double image);//构造函数
        ~Complex3();//析构函数
        double getReal();//获取实部
        double getImage();//获取虚部
        void display();//显示
        
        //声明一个普通函数 - 使用友元函数 - 重载 * 运算符号
        friend Complex3 operator * (Complex3 &c1,Complex3 &c2);
};
#endif