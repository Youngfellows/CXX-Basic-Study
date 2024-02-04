#ifndef COMPLEX_H
#define COMPLEX_H

#include "./Global.h"

//定义Complex类 - 复数
class Complex
{
    private:
        float real;//实部
        float image;//虚部
    
    public:
        Complex();//构造函数
        Complex(float real,float image);//构造函数
        ~Complex();//析构函数
        float getReal();//获取实部
        float getImage();//获取虚部
        void display();//显示复数
};

#endif