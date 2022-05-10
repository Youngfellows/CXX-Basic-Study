#ifndef PROFESSOR_H
#define PROFESSOR_H

#include<iostream> 
using namespace std;

//定义Professor类 - 教授
class Professor
{
    private:
        char const *name;//姓名
        long long number;//编号
        double salary1;//基本工资
        double salary2;//岗位津贴
        double salary3;//扣除
        double salary;//实际工资

    public:
        //构造函数
        Professor(char const *name,long long number,double salary1,double salary2,double salary3);
        //析构函数
        ~Professor();

        //计算工资,使用虚函数来实现多态
        virtual double calculateSalary();
        //显示详情,使用虚函数来实现多态
        virtual void display();

        char const * getName();//获取姓名
        long long getId();//获取编号
        double getSalary1();//获取基本工资
        double getSalary2();//获取岗位工资
        double getSalary3();//获取扣除工资
};


#endif