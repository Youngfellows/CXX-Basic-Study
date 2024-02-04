#ifndef POLYNOMIAL2_H
#define POLYNOMIAL2_H

#include "./Global.h"

class Polynomial2
{
    private:
        int n;

    public:
        Polynomial2();//构造函数
        ~Polynomial2();//析构函数
        float fn();//求值
        
    private:
        float fn(int n);//递归调用
};

#endif