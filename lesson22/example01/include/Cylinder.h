#ifndef CYLINDER_H
#define CYLINDER_H

#include "./Global.h"
#include "./Circle.h"

//定义派生类Cylinder - 圆柱体
class Cylinder: public Circle
{
    protected:
        float height;//高
    
    public:
        Cylinder();//构造函数
        Cylinder(float dx,float dy,float radius,float height);//构造函数
        Cylinder(Circle &c,float height);//构造函数
        virtual  ~Cylinder();//析构函数
        virtual  float area();//求圆柱体面积
        void setHeight(float height);//设置圆柱体高
        float getHeight();//获取圆柱体高
        
        //重写输出运算符号 << 使用友元函数,友元函数可以调用类Point的私有成员
        friend ostream & operator << (ostream &out,Cylinder &cy);    
};

#endif