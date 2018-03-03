#include<iostream>
#include<cstring>

int main()
{
    const int size = 20;
    char str1[size];
    char *str2;

    str2 = new char[size];//分配内存
    char str3[] = "computer world";

    strcpy_s(str1,str3);

    std::cout << "str3 = " << str3 << std::endl;
    std::cout << "str1 = " << str1 << std::endl;

    return 0;
}
