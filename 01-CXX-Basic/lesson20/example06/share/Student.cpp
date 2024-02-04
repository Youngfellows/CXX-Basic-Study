#include "../include/Student.h"

//在类外定义函数 - 构造函数
Student::Student(char const *name,char const *sex,int age)
{
    cout << "Student()有参数构造函数" << endl;
    this->name = name;
    this->age = age;
    this->sex = sex;
}

//在类外定义函数 - 析构函数
Student::~Student()
{
    cout << "~Studnet()析构函数" << endl;
}

//在类外定义函数 - getName()函数
const char * Student::getName()
{
    return this->name;
}

//在类外定义函数 - getSex()函数
const char * Student::getSex()
{
    return this->sex;
}

//在类外定义函数 - getAge()函数
int Student::getAge()
{
    return this->age;
}

//在类外定义函数 - display()函数
void Student::display()
{
    cout << endl;
    cout << "学生信息" << endl;
    cout << "姓名:" << this->name << endl;
    cout << "性别:" << this->sex << endl;
    cout << "年龄:" << this->age << endl;
    cout << endl;
}