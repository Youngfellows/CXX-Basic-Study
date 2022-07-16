#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<cstring>

using namespace std;

//定义Student类
class Student
{
    private:
        string name;//姓名
        int age;//年龄

    public:
        Student();//构造函数
        Student(string name,int age);//构造函数
        ~Student();//析构函数
        void display();//显示
};

#endif