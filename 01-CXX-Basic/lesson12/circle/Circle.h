#ifndef CIRCLE_H

#define CIRCLE_H
#include<iostream>

const double PI = 3.1415926;//圆周率
//圆
class Circle
{
    private:  
        double radius;//半径
        double area;//面积

    public: 
        Circle();//构造函数
        Circle(double r);
        ~Circle();//析构函数
        void setRadius(double r);//设置半径
        double getArea();//求面积
        double getRadius();//获取半径
};

#endif