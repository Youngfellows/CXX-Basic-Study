#ifndef SINH_H
#define SINH_H

#include "./Global.h"

//定义Sinh类 - 求函数值
class Sinh
{
    private:
        double x;
    
    public:
        Sinh();//构造函数
        ~Sinh();//析构函数
        double sinh();//求值
    private:
        double e(double x);//求e的x次方的值
};

#endif