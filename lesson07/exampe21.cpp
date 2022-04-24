#include<iostream>

int main()
{
    char name[30],address[30];

    //cin.get输入多行数据
    std::cout << "请输入姓名: " ;
    std::cin.get(name,30);//包含空格

    std::cin.get();//去除回车的影响

    std::cout << "请输入地址: ";
    std::cin.get(address,30);

    std::cout << "姓名: " << name << std::endl;
    std::cout << "地址: " << address << std::endl;

    return 0;
}
