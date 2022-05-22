#ifndef MAX_MIN_H
#define MAX_MIN_H

#include "./Global.h"

//定义MaxMin类 - 求最大公约数,最小公倍数
class MaxMin
{
    private:
        int number1;
        int number2;

    public:
        MaxMin();//构造函数
        MaxMin(int a,int b);//构造函数
        int max();//求最大公约数
        int min();//求最小公倍数
};

#endif