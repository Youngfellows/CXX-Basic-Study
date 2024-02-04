#include<iostream>

int main()
{
    const char str1[10] = "computer";
    char str2[10];
    const char *ps;

    //字符串赋值
    int i;
    for(i = 0; str1[i] != '\0';i++)
    {
      str2[i] = str1[i];//逐个元素赋值
    }
    str2[i] = '\0';
    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;

    ps = str1;//ps指向字符串str1
    std::cout << ps << std::endl;

    return 0;
}
