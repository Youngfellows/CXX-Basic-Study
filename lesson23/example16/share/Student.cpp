#include "../include/Student.h"

//在类外实现函数 - 构造函数
Student::Student()
{
    cout << "Student()构造函数" << endl;
}

//在类外实现函数 - 构造函数
Student::Student(int number,char name[LEN])
{
    cout << "Student()构造函数1" << endl;
    this->number = number;
    strcpy(this->name,name);
}

//在类外实现函数 - 析构函数
Student::~Student()
{
    cout << "~Student()析构函数" << endl;
}

//在类外实现函数 - setCourse()函数 - 设置课程
void Student::setCourse(Course *course)
{
    cout << "setCourse() ..." << endl;
    for(int i = 0; i < COUNT; i++)
    {
        //cout << "setCourse():: 1,cName:" << (*(course + i)).getCName() << "cScore:" << (*(course + i)).getScore() << endl;
        this->courses[i] = *(course + i);
        //cout << "setCourse():: 2,cName:" << (this->courses[i]).getCName() << "cScore:" << (this->courses[i]).getScore() << endl;
    }
    //Course * 指针变量pcourse指向课程数组
    this->pcourse = this->courses;
}

//在类外实现函数 - averageScore()函数
Course * Student::getCourse()
{
    return this->pcourse;
}

//在类外实现函数 - averageScore()函数
float Student::averageScore()
{
    //cout << "averageScore() ..." << endl;
    float sum = 0;//总成绩
    for(int i = 0; i < COUNT; i++)
    {
       sum += (this->courses[i]).getScore();
    }
    float ave = sum / COUNT;
    return ave;
}

//在类外实现函数 - totalScore()函数
float Student::totalScore()
{
    //cout << "totalScore() ..." << endl;
    float sum = 0;//总成绩
    for(int i = 0; i < COUNT; i++)
    {
       sum += (this->courses[i]).getScore();
    }
    return sum;
}

//在类外实现函数 - display()函数
void Student::display()
{
    cout << "=================display()显示信息=====================" << endl;
    cout << "Student::display():: ... " << endl;
    cout << "Student::display():: courses:" << courses << endl;
    cout << "Student::display():: number:" << this->number << endl;
    cout << "Student::display():: name:" << this->name << endl;
    cout << "======" << COUNT << "门课程信息======" << endl;
    for(int i = 0; i < COUNT; i++)
    {
        //cout << (*(this->pcourse + i)).getCName() << "\t" ;
        cout << (this->courses[i]).getCName() << "\t" ;
    }
    //cout.width(10);
    cout << "平均成绩" << "\t" << "总成绩" << endl;
    for(int i = 0; i < COUNT; i++)
    {
        //cout << (*(this->pcourse + i)).getScore() << "\t" ;
        cout << (this->courses[i]).getScore() << "\t" ;
    }
    cout << averageScore() << "\t" << totalScore() << endl;
    cout << endl;
}

