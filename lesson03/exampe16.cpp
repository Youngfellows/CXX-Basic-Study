#include<iostream>

//全局变量
int a = 33;

int main()
{
    //局部变量
    int a = 200;

    std::cout << "全局变量a = " <<  ::a  << std::endl;
    std::cout << "局部变量a = " << a << std::endl;

    return 0;
}
