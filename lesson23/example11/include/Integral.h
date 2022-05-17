#ifndef INTEGRAL_H
#define INTEGRAL_H

#include "./Global.h"

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
        
        //重点: 计算定积分 - 通过函数指针来实现接口回调
        float calIntegral(FUNCTION func);
};

#endif