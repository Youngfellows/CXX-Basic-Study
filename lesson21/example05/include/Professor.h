#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "./Global.h"
#include "./Student.h"
#include "./Birthday.h"

//定义Professor类 - 教授 - 公有继承方式继承Student类
class Professor:public Student
{
    private:
        float area;//住房面积
        Birthday birthday;//定义Birthday类的对象birthday,作为数据成员
    public:
        Professor();//构造函数
        Professor(int num,string name,char sex[SIZE],int year,int month,int day,float area);//构造函数
        Professor(Student &stu,Birthday &birthday,float area);//构造函数
        Professor(Birthday &birthday,Student &stu,float area);//构造函数
        ~Professor();//析构函数
        void display();//显示教授信息
};

#endif