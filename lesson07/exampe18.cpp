#include<iostream>

int main()
{
    char   str1[30], str2[30], str3[30];

    std::cout << "请输入你的姓名：";
    std::cin >> str1;
    //std::cin.get();//去除回车的影响
   
    std::cout << "请输入你的住址：";
    std::cin.ignore();
    std::cin.getline(str2, 30, 'a');//字符串最后一个字符是a
    //std::cin.get();//去除回车的影响
   
    std::cout << "请输入你的籍贯：";
    std::cin.ignore();
    std::cin.getline(str3, 30);
    //std::cout << str3 << std::endl;

    std::cout << "姓名: " << str1 << std::endl;
    std::cout << "住址: " << str2 << std::endl;
    std::cout << "籍贯: " << str3 << std::endl;

    return 0;
}
