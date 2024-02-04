#ifndef COURSE_H
#define COURSE_H

#include "./Global.h"

//定义Course类 - 课程
class Course
{
    private:
        char cName[LEN];//课程名称
        float score;//分数
    
    public:
        Course();//构造函数
        Course(char *cName,float score);//构造函数
        ~Course();//析构函数
        char *getCName();//获取课程名称
        float getScore();//获取分数
        void display();//打印成绩信息
};

#endif