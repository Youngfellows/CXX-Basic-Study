#ifndef MANAGE_H
#define MANAGE_H

#include "./Student.h"

//定义Manage类 - 学生信息管理系统
class Manage
{
    private:
        Student students[SIZE];//学生数组
        Student *pStudent;//指向学生数组的指针
    public:
        Manage();//构造函数
        ~Manage();//析构函数
        Student *getStudents();//获取学生数组
        void calc(Student *pStu);//计算学生成绩
        void display(Student *s);//显示学生信息

    private:
        void init();//初始化学生数据
};

#endif