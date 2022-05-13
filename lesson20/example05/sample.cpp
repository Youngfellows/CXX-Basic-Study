#include "./include/Complex.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    Complex c1(1,3);
    Complex c2;
    double d;//double类型

    c1.display();
    d = 2.5 + c1;//调用重载的double()类型转换运算符号
    c2 = Complex(d);
    c2.display();


    return 0;
}