#ifndef C_H
#define C_H

#include "./B.h"
#include "./Global.h"

//定义C类 - 是B类的公共派生类
class C: public B
{
    //B类的私有属性
    private:
        int p = 7;

    //B类的保护属性及方法
    protected:
        int q = 8;
        void f5();

    //B类的公共属性及方法
    public:
        int r = 9;
        void f6();
        C();
        ~C();
};

#endif