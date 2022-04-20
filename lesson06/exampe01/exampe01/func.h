#pragma once
#ifndef FUNC_H
#define FUNC_H
const double PI = 3.1415926;

//矩形的周长
double squareGirth(double l)
{
	return 4 * l;
}

//矩形的面积
double squareArea(double l)
{
	return l * l;
}

//圆的周长
double roundGirth(double r)
{
	return 2 * PI * r;
}

//圆的面积
double roundArea(double r)
{
	return PI * r * r;
}

//定义函数类型
typedef double ft(double);

#endif // !FUNC_H

