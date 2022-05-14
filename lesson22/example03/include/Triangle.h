#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "./Shape.h"

//定义派生类Rectangle - 三角形 - 公有方式继承自Shape
class Triangle: public Shape
{
    private:
        double width;//宽
        double height;//高
    
    public:
        Triangle(double width,double height);//构造函数
        virtual ~Triangle();//析构函数
        virtual double area() const;//纯虚函数,相当于接口,求三角形面积
};

#endif