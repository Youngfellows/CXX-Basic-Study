#include "../include/A.h"

//在类外定义函数 - 构造函数
A::A()
{
    cout << "A()构造函数" << endl;
}

//在类外定义函数 - 析构函数
A::~A()
{
    cout << "~A()析构函数" << endl;
}

//在类外定义函数 - f1()函数
void A::f1()
{
    cout << "A::f1()函数被调用~~~" << endl;
}

//在类外定义函数 - f2()函数
void A::f2()
{
    cout << "A::f2()函数被调用~~~" << endl;   
}
