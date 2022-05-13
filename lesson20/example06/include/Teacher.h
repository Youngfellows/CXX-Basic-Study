#ifndef TEACHER_H
#define TEACHER_H

#include<iostream>
#include "./Student.h"

using namespace std;

//定义Student类 - 学生
class Teacher
{
    private:
        char const *name;//姓名
        char const *sex;//性别
        int age;//年龄
        float pay;//工资

    public:
        Teacher(char const *name,char const *sex,int age,float pay);//构造函数
        Teacher(Student &student);//转换构造函数
        ~Teacher();//析构函数

        char const *getName();//获取姓名
        char const *getSex();//获取性别
        int getAge();//获取年龄
        void display();//显示
};

#endif