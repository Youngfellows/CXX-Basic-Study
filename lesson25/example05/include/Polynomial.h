#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "./Global.h"

class Polynomial
{
    private:
        int n;//项数
        int x;//参数

    public:
        Polynomial();//构造函数
        ~Polynomial();//析构函数
        float fx();//求值
        
    private:
        float fx(int n,int x);//递归调用
};

#endif