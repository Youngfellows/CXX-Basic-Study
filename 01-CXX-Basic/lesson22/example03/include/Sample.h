#ifndef SAMPLE_H
#define SAMPLE_H

#include "./Circle.h"
#include "./Rectangle.h"
#include "./Square.h"
#include "./Trapezoid.h"
#include "./Triangle.h"

//定义接口函数 - 需要在其他文件实现
void testCircle();
void testSquare();
void testRectangle();
void testTrapezoid();
void testTriangle();
void testSumArea();
void testTotalArea();

//定义打印面积函数,参数是基类的对象
double getArea(Shape &shape);

#endif