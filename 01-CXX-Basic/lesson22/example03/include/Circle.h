#ifndef CIRCLE_H
#define CIRCLE_H

#include "./Shape.h"

//定义派生类Circle - 圆形 - 公有方式继承自Shape
class Circle: public Shape
{
    private:
        double radius;//半径
    
    public:
        Circle(double radius);//构造函数
        virtual ~Circle();//析构函数
        virtual double area() const;//定义虚函数,,相当于接口,求圆面积
};

#endif