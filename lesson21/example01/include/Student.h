#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<cstring>
#include "./Global.h"


using namespace std;

//定义Student类 - 学生 - 基类
class Student
{
    //基类保护成员
    private:
        char name[SIZE];//姓名
        char sex[SIZE];//性别
        int age;//年龄

    //基类公有成员函数
    public:
        Student();//基类-构造函数
        ~Student();//基类-析构函数
        void getValue();//基类-公有成员函数-获取基类私有数据
        void display();//基类-公有成员函数-显示基类私有数据
};

#endif