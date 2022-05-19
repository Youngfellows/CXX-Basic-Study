#ifndef STUDENT_H
#define STUDENT_H

#include "./Global.h"
#include "./Course.h"

//定义Student类 - 学生
class Student
{
    private:
        int number;//学号
        char name[LEN];//姓名
        //Course *pcourse;//5门课程,对象数组
        Course courses[COUNT];//5门课程,对象数组
        float average;//平均成绩

    public:
        Student();//构造函数
        Student(int number,char name[LEN]);//构造函数
        ~Student();//析构函数
        void setCourse(Course courses[COUNT]);//设置课程
        float averageScore();//获取平均成绩
        float totalScore();//获取总成绩
        void display();//打印学生信息
};

#endif