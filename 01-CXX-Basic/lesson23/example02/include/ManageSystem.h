#ifndef MANAGE_SYSTEM_H
#define MANAGE_SYSTEM_H

#include "./Global.h"
#include "./Student.h"

//定义ManageSystem类 - 学生信息管理系统
class ManageSystem
{
    private:
        int size;//学生数量
        int count;//课程数量
        struct Student *pStu;//成员属性,结构体数组
        struct Student *good;//成绩最好的学生
        float average;//全部学生的平均成绩
    
    public:
        ManageSystem();//构造函数
        ~ManageSystem();//析构函数
        void input(int size,int count);//输入学生信息
        struct Student * superior();//获取优秀学生信息
        void display();//打印学生信息
        void print(struct Student &stu);
};

#endif