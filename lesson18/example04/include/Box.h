#ifndef BOX_H
#define BOX_H

#include<iostream>

using namespace std;

//定义Box类 - 盒子
class Box
{
    private:
        double length;//长
        double width;//宽
        double heigth;//高

    public:
        Box();//构造函数
        Box(double length,double width,double heigth);//构造函数
        ~Box();//析构函数
        double volume();//体积
};

#endif