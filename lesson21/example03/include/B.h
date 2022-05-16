#ifndef B_H
#define B_H

#include "./A.h"
#include "./Global.h"


//定义B类 - 是A类的公共派生类
class B: public A
{
    //B类的私有属性
    private:
        int m = 4;

    //B类的保护属性及方法
    protected:
        int n = 5;
        void f3();

    //B类的公共属性及方法
    public:
        int t = 6;
        void f4();
        B();
        ~B();
};

#endif