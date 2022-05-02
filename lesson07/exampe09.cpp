#include<iostream>

int main()
{
    std::cout << "请随便输入一个字符串: " << std::endl;
    std::string str ;

    // std::cin >> str;//不带空格
    std::getline(std::cin,str);//带空格
    std::cout << str << std::endl;

    return 0;
}
