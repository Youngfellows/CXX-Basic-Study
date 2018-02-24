#include<iostream>

//函数声明
long int factorial(int n);//求n!

int main()
{
    //递归调用
    int a ;
    int *p = &a;
    std::cout << "请输入一个数a: " << std::endl;
    std::cin >> a;

    std::cout << a << "! = " << factorial(*p) << std::endl;

    return 0;
}

//函数定义
long int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }else
    {
        return n * factorial(n - 1);
    }
}