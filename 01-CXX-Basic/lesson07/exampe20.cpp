#include<iostream>

int main()
{
    char buf[30];

    std::cout << "请输入一个字符串: " << std::endl;
    std::cin.get(buf,30);//输入字符串

    std::cout << "buf = " << buf << std::endl;

    return 0;
}
