#ifndef TEACHER_H
#define TEACHER_H

#include "./Global.h"

//定义Teacher基类 - 学生
class Teacher
{
    private:
        string name;//姓名
        char sex;//性别
        int age;//年龄
        string addr;//地址
        string tel;//电话

        string title;//职称

    public:
        Teacher();//构造函数
        Teacher(string name,char sex,int age,string addr,string tel,string title);//构造函数
        ~Teacher();//析构函数
        void display();//显示老师信息
};

#endif