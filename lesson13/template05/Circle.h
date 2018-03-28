#ifndef CIRCLE_H
#define CIRCLE_H
//类模板与static成员
#include<iostream>

const double PI = 3.1415926;//圆周率

//类模板
template<typename T> 
class Circle
{
    T radius;//半径
    static int total;//类模板的静态数据成员 -- 总数

    public: 
    Circle(T radius);
    ~Circle();
    void setRadius(T radius = 0);
    T getRadius();
    double getGirth();//周长
    double getArea();//面积
    
    static int showTotal();//类模板的静态成员函数

};

//具体实现
template<typename T> int Circle<T>::total = 0;

//模板函数
template<typename T> int Circle<T>::showTotal()
{
    return total;
}

template<typename T> Circle<T>::Circle(T radius)
{
    this->radius = radius;
    total++;
}

template<typename T> Circle<T>::~Circle()
{
   
}

//模板函数
template<typename T> T Circle<T>::getRadius()
{
    return this->radius;
}

//面积 -- 模板函数
template<typename T> double  Circle<T>::getArea()
{
    return PI * this->radius * this->radius;
}

//周长 -- 模板函数
template<typename T> double Circle<T>::getGirth()
{
    return 2 * PI * this->radius;
}

#endif