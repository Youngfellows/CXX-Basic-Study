#include "../include/Student.h"

//在类外定义函数 - 构造函数
Student::Student()
{
    cout << "Student()构造函数" << endl;
}

//在类外定义函数 - 构造函数
Student::Student(int num,float score)
{
    cout << "Student()有参数构造函数" << endl;
    this->num = num;
    this->score = score;
}

//在类外定义函数 - 构造函数
Student::~Student()
{
    cout << "~Student()析构函数" << endl;
}

//在类外定义函数 - display()函数
void Student::display()
{
    cout << "学生:" << this->num << ",成绩:" << this->score << endl;
}

//在类外定义函数 - getScore()函数
float Student::getScore()
{
    return this->score;
}

//在类外定义函数 - getNum()函数
int Student::getNum()
{
    return this->num;
}

//在类外定义函数 - change()函数
void Student::change(int num,float score)
{
    this->num = num;
    this->score = score;
}