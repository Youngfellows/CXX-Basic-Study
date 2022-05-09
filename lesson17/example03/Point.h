#ifndef POINT_H
#define POINT_H

#include<iostream>
// #include<math.h>
#include<cmath>

using namespace std;

//定义Point类 - 点
class Point
{
    private:
        double dx;//x坐标
        double dy;//y坐标

    public:
        Point();//构造函数
        ~Point();//析构函数
        double getX();//获取x坐标
        double getY();//获取y坐标
        friend double distance(Point &p1,Point &p2);//获取距离,使用Point类的友元函数

        //重载运算 << / >> ,使用友元函数来实现
        friend istream & operator >> (istream &in,Point &p);
        friend ostream & operator << (ostream &out,Point &p);
};

#endif