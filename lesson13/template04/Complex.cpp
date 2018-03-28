#include<iostream>
#include "Complex.h"

int main()
{
    Complex<double> c1(2.5,3.7);
    Complex<double> c2(4.8,8.5);
    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;
    std::cout << "c1 + c2 = " << c1 + c2 << std::endl;
    std::cout << "c1 - c2 = n" << c1 - c2 << std::endl;
    std::cout << "-c1 = " << -c1 << std::endl;
    
    return 0;
}
