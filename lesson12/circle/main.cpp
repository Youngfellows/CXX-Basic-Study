#include<iostream>
#include "Circle.h"

// 1.编译
// g++ -c Circle.cpp
// g++ -c main.cpp

// 2.链接 
// g++ main.o Circle.o -o exec

// 3.运行
// ./exec

int main()
{
    //创建对象
    Circle *circle = new Circle();
    circle->setRadius(8.9);//设置半径
    double area = circle->getArea();//获取面积
    double radius = circle->getRadius();

    std::cout << "圆半径: " << radius <<" ,面积: " << area << std::endl;
    delete circle;
    
    return 0;
}
