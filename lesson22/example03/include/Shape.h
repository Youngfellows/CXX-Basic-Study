#ifndef SHAPE_H
#define SHAPE_H

#include "./Global.h"

//定义抽象基类Shape - 形状
class Shape
{
    public:
        /**
         * @brief 求形状的面积
         *    纯虚函数,也就是子类必须实现
         * 
         * @return double 
         */
        virtual double area() const = 0;
};

#endif