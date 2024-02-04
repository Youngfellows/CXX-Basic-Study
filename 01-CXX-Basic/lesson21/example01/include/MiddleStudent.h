#ifndef MIDDLE_STUDENT_H
#define MIDDLE_STUDENT_H

#include "./Student.h"

//定义MiddleStudent类 - 私有派生类 - 中学生 - 继承Student类
class MiddleStudent: private Student
{
    //私有数据成员
    private:
        long num;//学号
        char addr[SIZE];//地址

    public:
        MiddleStudent();//构造函数
        ~MiddleStudent();//析构函数
        void getValue4MiddleStu();//获取中学生信息
        void display4MiddleStu();//显示中学生信息
};

#endif