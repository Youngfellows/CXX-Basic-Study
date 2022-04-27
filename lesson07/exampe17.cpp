#include<iostream>

int main()
{
    int a,b,c;
    std::cout << "请输入a: ";
    std::cin >> a;

    std::cin.ignore(1024,'\n');//把回车（包括回车）之前的所以字符从输入缓冲（流）中清除出去
    std::cout << "请输入b: ";
    std::cin >> b;

    std::cin.ignore(1024,'\n');
    std::cout << "请输入c: ";
    std::cin >> c;

    std::cout << "a = " << a << " ,b = " << b << " ,c = " << c << std::endl;

    return 0;
}
