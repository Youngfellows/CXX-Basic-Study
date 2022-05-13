#ifndef D_H
#define D_H

#include "./C.h"
#include "./Global.h"

//定义C类 - 是B类的公共派生类
class D: private C
{
    //B类的私有属性
    private:
        int f = 10;

    //B类的保护属性及方法
    protected:
        int k = 11;
        void f7();

    //B类的公共属性及方法
    public:
        int v = 12;
        void f8();
        D();
        ~D();
};

#endif