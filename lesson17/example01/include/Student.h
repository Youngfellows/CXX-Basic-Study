#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
using namespace std;

//定义Studnet类 - 学生类
class Student{

    //定义私有属性
    private:
        char const *name;//姓名
        int age;//年龄
        char const *sex;//性别

    public:
        //构造函数
        Student();
        Student(char const *name,int age,char const *sex);
        //析构函数
        ~Student();
        //公有函数 - 显示学生信息
        void display();
};

#endif
