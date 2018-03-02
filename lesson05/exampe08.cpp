#include<iostream>

int sum(const int array[],int n);//函数声明

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "sum = " << sum(array,10) << std::endl;

    return 0;
}


//数组作为函数的参数
int sum(const int array[],int n)
{
    int sumResult = 0;
    for(int i = 0;i < n;i++)
    {
      sumResult = *array + sumResult;
      array++;
    }
    return sumResult;
}
