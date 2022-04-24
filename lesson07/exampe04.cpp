#include<iostream>
#include<string>

int main()
{
    std::string str;

    std::cout << "请输入一个字符串:" << std::endl;
    std::cin >> str;

    std::cout << "str字符串的长度: length = " << str.length() << std::endl;
    std::cout << str << std::endl;

    str[3] = 'O';//修改某一个字符串
    std::cout << "str字符串的长度: length = " << str.length() << std::endl;
    std::cout << str << std::endl;

    return 0;
}
