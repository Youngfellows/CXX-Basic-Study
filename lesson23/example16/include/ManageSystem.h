#ifndef MANAGE_SYSTEM_H
#define MANAGE_SYSTEM_H

#include "./Global.h"
#include "./Student.h"

//定义类ManageSystem类 - 学生管理系统
class ManageSystem
{
    private:
        int size;//学生数量
        Student students[SIZE];//学生数组
        Student *pStudent;//指向学生数组的指针变量

    public:
        ManageSystem();//构造函数
        ManageSystem(Student s[SIZE]);//构造函数
        ~ManageSystem();//析构函数
        Student *input(int size);//输入学生信息
        float * averageCourse();//求每一门课程的平均成绩
        Student *fail2();//找出两门以上课程不及格的学生
        Student *good();//找出全部85分或者平均成绩90以上的学生
        void display(Student *p);//打印学生信息
};

#endif