#include<iostream>
#include<iomanip>

int main()
{
    //输入一个整数并求和

    int number;//要输入的整数
    long int sum = 0;//和

    std::cout << "请输入一个整数number:" << std::endl;
    std::cin >> number;

    int i = 1;
    while(i <= number)
    {
        sum +=i;
        i++;
    }

    std::cout << number << "累加是" << sum << std::endl;

    return 0;
}
