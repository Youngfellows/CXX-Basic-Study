#ifndef SQUARE_H
#define SQUARE_H

#include "./Shape.h"

//定义派生类Rectangle - 正方形 - 公有方式继承自Shape
class Square: public Shape
{
    private:
        double side;//边城
    
    public:
        Square(double side);//构造函数
        virtual ~Square();//析构函数
        virtual double area() const;//纯虚函数,相当于接口,求正方形面积
};

#endif