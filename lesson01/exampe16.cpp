#include<iostream>

int main()
{
    //类型转换
    float temp = 23.3;
    std::cout << temp << std::endl;

    double volume = 4.57;
    long double ld = 6.23E23;
    std::cout << volume << std::endl;
    std::cout << ld << std::endl;

    std::cout << volume * ld << std::endl;
    std::cout << temp/volume << std::endl;


    return 0;
}
