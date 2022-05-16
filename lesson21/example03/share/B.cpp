#include "../include/B.h"

//在类外定义函数 - 构造函数
B::B()
{
    cout << "B()构造函数" << endl;
}

//在类外定义函数 - 析构函数
B::~B()
{
    cout << "~B()析构函数" << endl;
}

//在类外定义函数 - f1()函数
void B::f3()
{
    cout << "B::f3()函数被调用~~~" << endl;
}

//在类外定义函数 - f2()函数
void B::f4()
{
    cout << "B::f4()函数被调用~~~" << endl;
    f1();//派生类B的成员函数可以调用基类A的成员函数f1(),因为是public公共继承,f1()函数的访问权限不变是protected保护的,可以访问
    f2();//派生类B的成员函数可以调用基类A的成员函数f2(),因为是public公共继承,f2()函数的访问权限不变是public公共的,可以访问

    //派生类B是public公共继承,其基类访问权限不变,由于i是私有的,故i在派生类B中是私有的,无法通过派生类访问
    //cout << "B::f4():: i=" << this->i << endl;

    //派生类B是public公共继承,其基类访问权限不变,由于j是protected保护的,故j在派生类B中是protected保护的,可以通过派生类访问
    cout << "B::f4():: j=" << this->j << endl;
    //派生类B是public公共继承,其基类访问权限不变,由于k是public公共的,故k在派生类B中是public公共的,可以通过派生类访问
    cout << "B::f4():: k=" << this->k << endl;
}