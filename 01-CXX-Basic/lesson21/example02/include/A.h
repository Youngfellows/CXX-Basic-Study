#ifndef A_H
#define A_H

#include "./Global.h"

//定义A类 - 基类
class A
{
    //基类的私有属性
    private:
        int i = 1;

    //基类的保护属性及方法
    protected:
        int j = 2;
        void f1();

    //基类的公共属性及方法
    public:
        int k = 3;
        void f2();
        A();
        ~A();
};

#endif