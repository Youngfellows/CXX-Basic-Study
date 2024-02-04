#ifndef PRIME_NUM_H
#define PRIME_NUM_H

#include "./Global.h"

//定义PrimeNum类 - 素数
class PrimeNum
{
    private:
        int number[SIZE];//数组
        int *pPrime;//返回最终生成的素数数组
        int *pNum;//指针变量pNum,指向SIZE个元素的数组
        int count;//素数个数

    public:
        PrimeNum();//构造函数
        ~PrimeNum();//析构函数
        int * prime();//求数组中的素数,并返回
        int * filter();//过滤素数
        void display();//打印结果
        void display(int *pPrime);//打印素数
}; 

#endif