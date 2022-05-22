#ifndef PRIME_H
#define PRIME_H

#include "./Global.h"

class Prime
{
    private:
        int num;

    public:
        Prime();//构造函数
        ~Prime();//析构函数
        bool prime();//是否是素数
        int getNum();//获取输入的数
};

#endif