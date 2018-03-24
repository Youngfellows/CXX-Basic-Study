#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>

//基类(接口)
class Employee
{
    protected: 
        long number;//编号
        std::string name;//姓名

    public: 
        Employee(long num, std::string n);//构造函数
        virtual ~Employee();//虚析构函数

        std::string getName();//获取姓名
        long getNumber();//获取编号

        virtual double earnings() = 0;//纯虚函数，计算月薪(抽象函数-->>子类必须实现抽象函数)
        virtual void show() = 0;//虚函数，输出编号、姓名(抽象函数-->>子类必须实现抽象函数)
};
#endif
