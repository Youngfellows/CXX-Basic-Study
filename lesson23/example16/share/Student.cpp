#include "../include/Student.h"

//在类外实现函数 - 构造函数
Student::Student()
{
    cout << "Student()构造函数" << endl;
}

//在类外实现函数 - 构造函数
Student::Student(int number,char name[LEN])
{
    cout << "Student()构造函数" << endl;
    this->number = number;
    strcpy(this->name,name);
}

//在类外实现函数 - 构造函数
Student::Student(int number,char name[LEN],Course courses[COUNT])
{
    cout << "Student()构造函数" << endl;
    this->number = number;
    strcpy(this->name,name);
    this->pcourse = courses;
}

//在类外实现函数 - 析构函数
Student::~Student()
{
    cout << "~Student()析构函数" << endl;
}

//在类外实现函数 - setCourse()函数 - 设置课程
void Student::setCourse(Course courses[COUNT])
{
    cout << "setCourse() ..." << endl;
    this->pcourse = courses;
}

//在类外实现函数 - averageScore()函数
float Student::averageScore()
{
    //cout << "averageScore() ..." << endl;
    float sum = 0;//总成绩
    for(int i = 0; i < COUNT; i++)
    {
       sum += (*(this->pcourse + i)).getScore();
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
       sum += (*(this->pcourse + i)).getScore();
    }
    return sum;
}

//在类外实现函数 - display()函数
void Student::display()
{
    cout << "display() ..." << endl;
    cout << "number:" << this->number << endl;
    cout << "name:" << this->name << endl;
    cout << "======" << COUNT << "门课程信息======" << endl;
    for(int i = 0; i < COUNT; i++)
    {
        // cout.width(8);
        cout << (*(this->pcourse + i)).getCName() << "\t" ;
    }
    //cout.width(10);
    cout << "平均成绩" << " " << "总成绩" << endl;
    for(int i = 0; i < COUNT; i++)
    {
        // cout.width(10);
        cout << (*(this->pcourse + i)).getScore() << "\t" ;
    }
    cout << averageScore() << "\t" << totalScore() << endl;
    cout << endl;
}

