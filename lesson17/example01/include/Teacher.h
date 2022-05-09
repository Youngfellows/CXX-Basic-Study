#ifndef TEACHER_H
#define TEACHER_H

#include<iostream>
using namespace std;

//定义Teacher类 - 教师类
class Teacher
{
    private:
        char const *name;//姓名
        int age;//年龄
        char const *major;//专业

    public:
        //构造函数
        Teacher();
        Teacher(char const *name,int age,char const *major);
        //析构函数
        ~Teacher();
        //公有函数
        void display();
};

#endif