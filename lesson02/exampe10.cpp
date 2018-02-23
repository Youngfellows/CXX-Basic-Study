#include<iostream>
#include<iomanip>

int main()
{
    //do while语句
    int number;
    long int sum = 0;
    int i;

    std::cout << "请输入整数number: " << std::endl;
    std::cin >> number;

    do
    {
        sum = sum + i;
        i++;
    }while(i <= number);

    std::cout << "sum = " << sum << std::endl;
   
    return 0;
}