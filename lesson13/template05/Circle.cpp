#include<iostream>
#include "Circle.h"

int main()
{
    //创建模板类的实例对象
    Circle<int> c1(7),c2(9);
    std::cout << "c1的半径: " << c1.getRadius() << std::endl;
    std::cout << "c1的周长: " << c1.getGirth() << std::endl;
    std::cout << "c1的面积: " << c1.getArea() << std::endl;

    std::cout << "c2的半径: " << c2.getRadius() << std::endl;
    std::cout << "c2的周长: " << c2.getGirth() << std::endl;
    std::cout << "c2的面积: " << c2.getArea() << std::endl;
    std::cout << "total = " << Circle<int>::showTotal() << std::endl;
    // std::cout << "total = " << c1.showTotal() << std::endl;
    // std::cout << "total = " << c2.showTotal() << std::endl;

    Circle<double> c3(77.9),c4(48.3),c5(98.9);
    std::cout << "c3的半径: " << c3.getRadius() << std::endl;
    std::cout << "c3的周长: " << c3.getGirth() << std::endl;
    std::cout << "c3的面积: " << c3.getArea() << std::endl;

    std::cout << "c4的半径: " << c4.getRadius() << std::endl;
    std::cout << "c4的周长: " << c4.getGirth() << std::endl;
    std::cout << "c4的面积: " << c4.getArea() << std::endl;
    
    std::cout << "c5的半径: " << c5.getRadius() << std::endl;
    std::cout << "c5的周长: " << c5.getGirth() << std::endl;
    std::cout << "c5的面积: " << c5.getArea() << std::endl;
    std::cout << "total = " << Circle<double>::showTotal() << std::endl;

    return 0;
}