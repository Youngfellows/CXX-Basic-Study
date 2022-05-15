#ifndef STUDENT_H
#define STUDENT_H

//定义Student结构体 - 学生结构体
struct Student
{
    long int num;//学号
    string name;//姓名
    char sex[LEN];//性别
    float score[COURSE_COUNT];//成绩数组
    float average;//平均成绩
};

#endif