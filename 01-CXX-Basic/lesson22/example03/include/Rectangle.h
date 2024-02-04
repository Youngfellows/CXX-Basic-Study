#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "./Shape.h"

//定义派生类Rectangle - 矩形 - 公有方式继承自Shape
class Rectangle: public Shape
{
    private:
        double width;//宽
        double height;//高
    
    public:
        Rectangle(double width,double height);//构造函数
        virtual ~Rectangle();//析构函数
        virtual double area() const;//纯虚函数,相当于接口,求矩形面积
};

#endif