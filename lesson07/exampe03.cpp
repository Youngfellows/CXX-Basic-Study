#include<iostream>
#include<cstring>

int main()
{
    const char str1[] = "how do you do";
    const char *str2 = "we write";

    std::cout << "字符串str1的长度: " << strlen(str1) << std::endl;
    std::cout << "字符串str2的长度: " << strlen(str2) << std::endl;
    std::cout << "常量的长度: " << strlen("C++ program") << std::endl;

    return 0;
}
