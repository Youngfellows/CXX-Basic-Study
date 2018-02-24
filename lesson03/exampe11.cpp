#include<iostream>

/*函数声明
递归定义斐波那契数列
*/ 
long int fibonacci(int n);

int main()
{
    //递归定义斐波那契数列 
    int n;
    std::cout << "请输入一个数n: " << std::endl;
    std::cin >> n;

    for(int i = 1; i <= n; i++)
    {
        long fib = fibonacci(i);
        std::cout << fib << "\t";
        if(i % 5 == 0)
        {
            std::cout << std::endl;
        }
    }
    

    return 0;
}

//递归定义斐波那契数列
long int fibonacci(int n)
{
    if( n >0 && n <= 2)
    {
        return 1;
    }else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
