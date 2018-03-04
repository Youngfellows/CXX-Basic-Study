#include<iostream>


int main()
{
    //cin.get函数使用
    char ch;
    std::cout << "请输入一个字符: " << std::endl;
    std::cin.get(ch);//用来接收字符

    std::cout << "ch = " << ch << std::endl;

    return 0;
}
