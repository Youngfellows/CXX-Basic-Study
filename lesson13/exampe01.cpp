#include<iostream>

//函数模板
template <typename T>
T max(const T a,const T b)
{
    return a > b ? a : b;
}


int main()
{
    //简单函数模板应用
    std::cout << "max(3,5) is " << max(3,5) << std::endl;
    std::cout << "max('y','e') is " << max('y','e') << std::endl; 
    std::cout << "max(10.3,0.5) is " << max(10.3,0.5) << std::endl;

    return 0;
}