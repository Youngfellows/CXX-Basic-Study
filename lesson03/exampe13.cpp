#include<iostream>

//函数声明
int sum(int x,int y);//求和
int product(int x,int y);//求积

int main()
{
    //函数指针
    //用函数指针调用函数
    int (*pf)(int,int);//定义函数指针pf

    int a,b,result;
    std::cout << "请输入数a: ";
    std::cin >> a;

    std::cout << "请输入数b: ";
    std::cin >> b;

    pf = sum;//函数指针pf指向函数sum
    result = pf(a,b);
    std::cout << a << " + " << b << " = " << result << std::endl;

    pf = product;//函数指针pf指向函数product
    result = pf(a,b);
    std::cout << a << " * " << b << " = " << result << std::endl;

    return 0;
}

//函数定义
int sum(int x,int y)
{
    return x + y;
}

//函数定义
int product(int x,int y)
{
    return x * y;
}
