#ifndef EQUATION_H
#define EQUATION_H

#include "./Equation.h"
#include "./Complex.h"

//定义类
class Equation
{
    private:
        int a;
        int b;
        int c;
        float disc;
        float x1;//实数根x1
        float x2;//实数根x2
        float x12;//相同的实数根
        Complex c1;//复数根c1
        Complex c2;//复数根c2

    public:
        Equation();
        ~Equation();
        float getDisc();//获取判别式的值
        float getX1();//获取实数根x1
        float getX2();//获取实数根x2
        float getX12();//获取实数根x12
        Complex getC1();//获取复数根c1
        Complex getC2();//获取复数根c2
};

#endif