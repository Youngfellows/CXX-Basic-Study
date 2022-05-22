#ifndef STUDENT_H
#define STUDENT_H

#include "./Global.h"
#include "./Course.h"

//定义Student类 - 学生
class Student
{
    private:
        int number;//学号
        string name;//姓名
        char sex[LEN];//性别
        Course course[COUNT];//课程数组
        Course *pCourse;//指向课程数组的指针变量
        float ave;//平均成绩
        float sum;//总成绩
        int cSize;//课程数量

    public:
        Student();//构造函数
        Student(int number,string name,char *sex);//构造函数
        ~Student();//析构函数
        void setCourse(Course *course,int count);//设置课程
        int getNum();//获取学号
        string getName();//获取姓名
        char * getSex();//获取性别
        Course *getCourse();//获取课程
        float average();//获取平均成绩
        float sums();//总成绩
        void display();//打印学生信息
};

#endif