#include<iostream>

//函数重载
double max(double a,double b);//函数声明
double max(double a,double b,double c);//函数声明

int main()
{
    //函数重载
    double x,y,z,maxValue;
    double *px,*py,*pz;//double *指针变量px,py,pz
    px = &x;
    py = &y;
    pz = &z;

    std::cout << "请输入x，y: " << std::endl;
    std::cin >> x >> y;

    maxValue = max(x,y);
    std::cout << "maxValue = " << maxValue << std::endl;

    std::cout << "请输入x,y,z: " << std::endl;
    std::cin >> x >> y >> z;
    maxValue = max(x,y,z);
    std::cout << "maxValue = " << maxValue << std::endl;

    return 0;
}

//函数定义
double max(double a,double b)
{
    return a > b? a: b;
}

//函数定义
double max(double a,double b,double c)
{
    double t = max(a,b);
    return max(t,c);
}
