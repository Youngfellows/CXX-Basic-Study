#include<iostream>

//输入一串字符，然后反序输出 
void reverse();

int main()
{
    std::cout << "请输入一个字符串:" << std::endl;
    reverse();

    return 0;
}

//输入一串字符，然后反序输出
void reverse()
{
    char ch;

    std::cin >> ch;

    if(ch != '.')
    {
        reverse();
    }
    std::cout << ch;
} 