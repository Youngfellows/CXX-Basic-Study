#include<iostream>

//求最大共约数
int gcd(int a, int b);
int gcd2(int a,int b);

int main()
{
    //求两个数的最大公约数
    //辗转相除法

    int a,b;
    std::cout << "请输入a和b: " << std::endl;
    std::cin >> a >> b;

    std::cout << a << "和" << b << "的最到公约数是: " << gcd(a,b) << std::endl;
    std::cout << a << "和" << b << "的最到公约数是: " << gcd2(a,b) << std::endl;
}

int gcd(int a,int b)
{
    if(a % b == 0)
    {
        return b;
    }

    return gcd(b, a % b);
}

int gcd2(int a,int b)
{
    int temp;
    while(b)
    {
        temp = b;  /*利用辗除法，直到b为0为止*/
        b = a % b;//余数为0,被除数是最大公约数
        a = temp;//交换a,b的值
    }

    return a;
}