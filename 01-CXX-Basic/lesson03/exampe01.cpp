#include<iostream>
#include<cmath>

//使用默认参数
double power(double real,int n = 2);

int main()
{
    double m,n;
    std::cout << "请输入m和n\n" << std::endl;
    std::cin >> m >> n;

    std::cout << m << "的" << n << "次方是" << power(m,n) << std::endl;
    std::cout << m << "的2次方是" << power(m) << std::endl;

    return 0;
}

double power(double real,int n)
{
    if(n == 0)
    {
        return 1.0;
    }

    double result = real;
    for(int i = 2; i <= n; i++)
    {
        result = result * real;
    }
    return result;
}