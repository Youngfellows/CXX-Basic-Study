#ifndef PRELECTOR_H
#define PRELECTOR_H

#include<iostream>
#include "./Professor.h"

using namespace std;

//定义Prelector类 - 讲师 - 教授类的派生类(子类)
class Prelector:Professor
{
    public:
        //构造函数
        Prelector(char const *name,long long number,double salary1,double salary2,double salary3);
        //析构函数
        ~Prelector();
        
        //计算工资
        double calculateSalary();
        //显示详情
        void display();
};

#endif