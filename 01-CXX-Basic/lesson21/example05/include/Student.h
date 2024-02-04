#ifndef STUDENT_H
#define STUDENT_H

#include "./Global.h"

//定义Student类
class Student
{
    private:
        int num;//学号
        string name;//姓名
        char sex[SIZE];//性别

    public:
        Student();//构造函数
        Student(int num,string name,char sex[SIZE]);//构造函数
        ~Student();//析构函数
        void display();//显示学生信息
        int getNum();//获取学号
        string getName();//获取姓名
        char *getSex();//获取性别
};

#endif