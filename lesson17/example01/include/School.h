#ifndef SCHOOL_H
#define SCHOOL_H

#include<iostream>
#include "./Student.h"
#include "./Teacher.h"

using namespace std;

//定义School类 - 学生
class School
{

    //私有成员
    private:
        Student student;//学生
        Teacher teacher;//老师
        char const *name;//学校名字
        int studentSize;//学生个数
        int teacherSize;//老师个数
    
    public:
        //构造函数
        //School();
        School(char const *name);
        //析构函数
        ~School();
        //公有函数
        void set(int stuSize,int teacherSize);
        void display();
};

#endif