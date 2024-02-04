#ifndef GODBAHA_H
#define GODBAHA_H

#include "./Global.h"

/**
 * @brief 定义Godbaha类 
 * 验证哥德巴赫猜想: 一个不小于6的偶数 = 两个素数之和
 * 素数: 不能被从2到自身整除的数是素数
 * 
 */
class Godbaha
{
    private:
        int num;//不小于6的偶数
        int primeA;//素数a
        int primeB;//素数b

    public:
        Godbaha();//构造函数
        ~Godbaha();//析构函数
        int getNum();//获取偶数
        int getPrimeA();//素数a
        int getPrimeB();//素数a
        int * get();//获取素数之和

    private:
        bool prime(int a);//判断一个数是否是素数
};

#endif