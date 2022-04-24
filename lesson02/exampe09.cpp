#include<iostream>
#include<iomanip>

int main()
{
    const int size = 5;

    //求连续输入数的平均值
    double average = 0;
    double sum = 0;//总和
    double k = 0;//计数器

    std::cout << "请输入" << size << "个数" << std::endl;
    while(k < size)
    {
        double number;
        std::cin >> number;
        sum += number;
        k++;
    }

    average = sum / k;
    std::cout << k << "个数平均值: " << average << std::endl;

    return 0;
}