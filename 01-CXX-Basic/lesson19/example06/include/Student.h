#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>

using namespace std;

//定义Student类 - 学生
class Student
{
    private:
        int num;//学号
        float score;//成绩

    public:
        Student();//构造函数
        Student(int num,float score);//构造函数
        ~Student();//析构函数
        void display();//显示信息
        float getScore();//获取成绩
        int getNum();//获取编号
        void change(int num,float score);//修改信息
};

#endif