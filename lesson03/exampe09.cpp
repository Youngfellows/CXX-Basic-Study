#include<iostream>


long fact(int m);//函数声明
long bin(int m,int n);//函数声明


int main()
{
    //函数的嵌套调用
    int a,b;
    std::cout << "请输入两个数a和b: " << std::endl;
    std::cin >> a >> b;

    std::cout << a <<"! = " << fact(a) << std::endl;

    int number = fact(a)/(fact(b)*fact(a-b));
    std::cout << "number = " << number << std::endl;

    number = bin(a,b);
    std::cout << "number = " << number << std::endl;

    return 0;
}

//函数定义
//求m!
long fact(int m)
{
    int i=0;
    long sum = 1;
    for(i = 1; i <= m; i++)
    {
        sum = sum * i;
    }
    return sum;
}

//函数定义
//函数的嵌套调用
long bin(int m,int n)
{
    return fact(m)/(fact(n)*fact(m-n));
}