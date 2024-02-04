#ifndef EQUATION_H
#define EQUATION_H

#include "./Global.h"

//定义Equation类 - 一元三次方程的根(a * x * x * x + b * x * x + c * x + d = 0)
class Equation
{
    private:
        int a;
        int b;
        int c;
        int d;
    
    public:
        Equation();//构造函数
        ~Equation();//析构函数
        double solut();//求方程的根
};

#endif

