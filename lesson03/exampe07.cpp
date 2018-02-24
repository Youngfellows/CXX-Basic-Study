#include<iostream>

int *fError()
{
    int temp = 100;
    return &temp;
}

int main()
{
    //不应该返回局部变量的指针
    std::cout << fError() << std::endl;
    return 0;
}