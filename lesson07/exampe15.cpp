#include<iostream>

int main()
{
    char ch;
    std::cout << "请输入一段文本: " << std::endl;
    while(std::cin.peek() != '\n')
    {
        ch = std::cin.get();//获取字符
        std::cout << ch;
    }
    std::cout << std::endl;

    return 0;
}
