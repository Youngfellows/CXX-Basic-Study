#ifndef POINT_H
#define POINT_H

#include "./Global.h"

//定义Point基类 - 点
class Point
{
    protected:
        float dx;//x坐标
        float dy;//y坐标

    public:
        Point();//构造函数
        Point(float x,float y);//构造函数
        virtual ~Point();//析构函数
        void setPoint(float x,float y);//设置坐标
        float getX();//获取x坐标
        float getY();//获取y坐标
        //重写输出运算符号 << 使用友元函数,友元函数可以调用类Point的私有成员
        friend ostream & operator << (ostream &out,const Point &p);
};

#endif