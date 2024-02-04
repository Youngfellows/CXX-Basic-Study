#include "../include/Student.h"

//在类外定义函数 - 构造函数
Student::Student()
{
    cout << "Student()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
Student::Student(string name,int age)
{
    cout << "Student()有参数构造函数" << endl;
    this->name = name;
    this->age = age;
}

//在类外定义函数 - 析构函数
Student::~Student()
{
    cout << "~Student()析构函数" << endl;
}

//在类外定义函数 - display()函数
void Student::display()
{
    cout << endl;
    cout << "学生信息" << endl;
    cout << "姓名:" << this->name << endl;
    cout << "年龄:" << this->age << endl;
    cout << endl;
}

