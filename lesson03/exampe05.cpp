#include<iostream>
#include<iomanip>

void display(const int & rk);//用 const 约束引用参数

int main()
{
    int x ;
    std::cout << "请输入一个整数: \n";
    std::cin >> x;

    display(x);
    display(4589);

    return 0;
}

void display(const int & rk)
{
    std::cout << "dec: " << std::dec << rk << std::endl;
    std::cout << "oct: "<< std::oct << rk << std::endl;
    std::cout << "hex: "<< std::hex << rk << std::endl; 
}