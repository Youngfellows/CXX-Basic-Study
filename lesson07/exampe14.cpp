#include<iostream>

int main()
{
    char buf[50];

    std::cout << "请输入一个字符串: " << std::endl;

    std::cin.ignore(7);//忽略前面的7个字符
    std::cin.getline(buf,10);//读取一行字符的10个

    std::cout << buf << std::endl;

    return 0;
}
