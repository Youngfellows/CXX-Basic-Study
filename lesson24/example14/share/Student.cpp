#include "../include/Student.h"

//在类外实现函数 - 构造函数
Student::Student()
{
    cout << "Student()构造函数" << endl;   
}

//在类外实现函数 - 构造函数
Student::Student(int number,string name,char *sex)
{
    cout << "Student()构造函数" << endl;
    this->number = number;
    this->name = name;
    strcpy(this->sex,sex);
}

//在类外实现函数 - 构造函数
Student::~Student()
{
    cout << "~Student()析构函数" << endl;
}


//在类外实现函数 - setCourse()函数
void Student::setCourse(Course *c,int count)
{
    cout << "setCourse():: ..." << endl;
    this->cSize = count;
    for(int i = 0; i < count; i++)
    {
        *(this->course + i) = *(c + i);//为数组元素赋值
        //this->course[i] = *(c + i);
    }
    this->pCourse = this->course;//指向课程的指针变量,指向课程数组
}

//在类外实现函数 - getNum()函数
int Student::getNum()//获取学号
{
    cout << "getNum():: ..." << endl;
    return this->number;
}

//在类外实现函数 - getName()函数
string Student::getName()//获取姓名
{
    cout << "getName():: ..." << endl;
    return this->name;
}

//在类外实现函数 - getSex()函数
char * Student::getSex()//获取性别
{
    cout << "getSex():: ..." << endl;
    return this->sex;
}

//在类外实现函数 - getCourse()函数
Course *Student::getCourse()//获取课程
{
    cout << "getCourse():: ..." << endl;
    // Course *pCourse = this->course;

    //动态申请内存并返回
    return this->pCourse;
}

//在类外实现函数 - average()函数
float Student::average()//获取平均成绩
{
    cout << "average():: ..." << endl;
    return 0;
}

//在类外实现函数 - sums()函数
float Student::sums()//总成绩
{
    cout << "sums():: ..." << endl;
    return 0;
}

//在类外实现函数 - display()函数
void Student::display()
{
    cout << "Student::display():: 学生信息 ..." << endl;
    cout << "学号:" << this->number << endl;
    cout << "姓名:" << this->name << endl;
    cout << "性别:" << this->sex << endl;
    for(int i = 0; i < this->cSize; i++)
    {
        //Course course = this->course[i];//获取每一门课程
        Course course = *(this->pCourse + i);//获取每一门课程
        course.display();
    }
}
