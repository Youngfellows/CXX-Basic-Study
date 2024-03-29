#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>

using namespace std;

//定义Student类 - 学生
class Student
{
    private:
        mutable  int num;//学号,可变的数据成员
        mutable  float score;//成绩,可变的数据成员

    public:
        Student();//构造函数
        Student(int num,float score);//构造函数
        ~Student();//析构函数
        void display() const;//显示信息,定义为常函数
        float getScore();//获取成绩
        int getNum();//获取编号
        void change(int num,float score) const;//修改信息,定义为常函数
};

#endif