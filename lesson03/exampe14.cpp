#include<iostream>
#include<cmath>
//#define PI 3.1415926

typedef double funType(double);//定义函数类型
funType circlePerimeter;//用函数类型名定义函数原型(求圆的周长)
funType circleArea;//圆的面积
funType ballArea;//球的面积
funType ballVolume;//球的体积

//函数声明,函数指针作为函数的参数
double callFun(funType *,double);


const double pi = 3.1415926;
int main()
{
    double r;//半径
    double cPerimeter;//周长
    double cArea;//圆面积
    double bArea;//球面积
    double bVolume;//球体积

    std::cout << "请输入圆的半径r: ";
    std::cin >>  r;

    cPerimeter = circlePerimeter(r);
    cArea = circleArea(r);
    std::cout << "圆的周长是: " << cPerimeter << std::endl;
    std::cout << "圆的面积是: " << cArea << std::endl;

    std::cout << "请输入球的半径r: ";
    std::cin >> r;
    bArea = ballArea(r);
    bVolume = ballVolume(r);
    std::cout << "球的面积是: " << bArea << std::endl;
    std::cout << "球的体积是: " << bVolume << std::endl;

    std::cout << "\n以下是函数指针作为函数的参数的计算结果" << std::endl;
    std::cout << "请输入圆的半径r: ";
    std::cin >>  r;

    cPerimeter = callFun(circlePerimeter,r);//函数指针作为函数的参数
    cArea = callFun(circleArea,r);
    std::cout << "圆的周长是: " << cPerimeter << std::endl;
    std::cout << "圆的面积是: " << cArea << std::endl;

    std::cout << "请输入球的半径r: ";
    std::cin >> r;
    bArea = callFun(ballArea,r);
    bVolume = callFun(ballVolume,r);
    std::cout << "球的面积是: " << bArea << std::endl;
    std::cout << "球的体积是: " << bVolume << std::endl;

    return 0;
}

//函数定义
double callFun(funType *fp,double r)
{
    return fp(r);
}


//函数定义
double circlePerimeter(double r)
{
    return 2 * pi * r;
}

//函数定义
double circleArea(double r)
{
  return pi * r * r;
}

//函数定义
double ballArea(double r )
{
    return 4 * pi * r * r;
}


//函数定义
double ballVolume(double r)
{
    return 4.0/3 * pi * std::pow(r,3);
}
