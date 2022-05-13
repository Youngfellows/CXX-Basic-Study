#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>

using namespace std;

//定义Student类 - 学生
class Student
{
    private:
        char const *name;//姓名
        char const *sex;//性别
        int age;//年龄

    public:
        Student(char const *name,char const *sex,int age);//构造函数
        ~Student();//析构函数
        char const *getName();//获取姓名
        char const *getSex();//获取性别
        int getAge();//获取年龄
        void display();//显示
};

#endif