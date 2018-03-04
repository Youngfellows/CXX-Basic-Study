#include<iostream>


int main()
{
    std::cout << "请输入一个字符串: " << std::endl;
    char str[50];

    std::cin.getline(str,50);//可以输入空格
    std::cout << str << std::endl;

    return 0;
}
