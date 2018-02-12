#include<iostream>

int main()
{

    //自增和自减
    
    int a = 3;
    int b,c,d,e,f;

    b = ++a;//
    std::cout << "a = " << a << " ,b = " << b << std::endl;
    c = a++;
    std::cout << "a = " << a << " ,c = " << c << std::endl;
    d = --a;
    std::cout << "a = " << a << " ,d = " << d << std::endl;
    e = a--;
    std::cout << "a = " << a << " ,e = " << e << std::endl;

    return 0;
}
