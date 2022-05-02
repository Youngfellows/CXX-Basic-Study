#include<iostream>
#include<cstring>


int main()
{
    //welcome to fish.com! i love fish c.com

    int width = 4;
    char str[20];
    std::cout << "请输入一段文本：\n";
    std::cin.width(5);//输出的字符串宽度为4
    while (std::cin >> str)
    {
        std::cout.width(width++);//输出的字符串宽度为+1
        std::cout << str << std::endl;
        std::cin.width(5);//输出的字符串宽度为4
    }
    //会死循环
    return 0;
}
