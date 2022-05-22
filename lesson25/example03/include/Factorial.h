#ifndef FACTORIAL_H
#define FACTORIAL_H

#include "./Global.h"

//定义Factorial类 - 阶乘
class Factorial
{
    private:
        int num1;
        int num2;
        int num3;

    public:
        Factorial();//构造函数
        ~Factorial();//析构函数
        int sum();//求阶乘的和
        
    private:
        int fac(int num);//求阶乘
};

#endif