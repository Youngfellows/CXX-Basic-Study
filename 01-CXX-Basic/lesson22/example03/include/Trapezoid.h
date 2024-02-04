#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "./Shape.h"

//定义派生类Rectangle - 梯形 - 公有方式继承自Shape
class Trapezoid: public Shape
{
    private:
        double top;//上底
        double bottom;//下底
        double height;//高
    
    public:
        Trapezoid(double top,double bottom,double height);//构造函数
        virtual ~Trapezoid();//析构函数
        virtual double area() const;//纯虚函数,相当于接口,求梯形面积
};

#endif