#ifndef CIRCLE_H
#define CIRCLE_H

#include "./Global.h"
#include "./Point.h"

//定义Circle类 - 派生类 - 公共方式继承Point类
class Circle:public Point
{
    protected:
        float radius;//半径
    
    public:
        Circle();//构造函数
        Circle(float x,float y,float r);//构造函数
        Circle(Point &p,float r);//构造函数
        virtual ~Circle();//析构函数
        virtual float area();//求Circle圆面积
        void setRadius(float r);//设置半径
        float getRadius();//获取半径

        //重写输出运算符号 << 使用友元函数,友元函数可以调用类Point的私有成员
        friend ostream & operator << (ostream &out,Circle &c);
};

#endif