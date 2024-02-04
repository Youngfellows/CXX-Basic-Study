#ifndef SAMPLE_H
#define SAMPLE_H

#include "./Point.h"
#include "./Circle.h"
#include "./Cylinder.h"

//定义接口函数
void testPoint();
void testCircle();
void testCylinder();
void test();
void testRef();

//使用多态,使用基类的指针变量,指向子类对象,调用的是子类的方法
float getArea(Circle &c);

#endif