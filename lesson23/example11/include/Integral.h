#ifndef INTEGRAL_H
#define INTEGRAL_H

#include "./Integral.h"

//定义Integral类 - 使用矩形法求定积分
class Integral
{
    private:
        int bottomLimit;//下限度
        int topLimit;//上限
        int count;//累计次数
    
    public:
        Integral();//构造函数
        Integral(int bottom,int top,int count);//构造函数
        ~Integral();//析构函数
        float calIntegral(FUNCTION func);//计算定积分
}

#endif