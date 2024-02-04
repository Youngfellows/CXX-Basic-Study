#include "../include/Teacher.h"

//在类外定义函数 - 构造函数
Teacher::Teacher(char const *name,char const *sex,int age,float pay)
{
    cout << "Teacher()有参数构造函数" << endl;
    this->name = name;
    this->age = age;
    this->sex = sex;
    this->pay = pay;
}

//在类外定义函数 - 构造函数 - 转换构造函数
Teacher::Teacher(Student &student)
{
    cout << "Teacher()转换构造函数" << endl;
    this->name = student.getName();
    this->age = student.getAge();
    this->sex = student.getSex();
    this->pay = 3600;
}

//在类外定义函数 - 析构函数
Teacher::~Teacher()
{
    cout << "~Teacher()析构函数" << endl;
}

//在类外定义函数 - getName()函数
const char * Teacher::getName()
{
    return this->name;
}

//在类外定义函数 - getSex()函数
const char * Teacher::getSex()
{
    return this->sex;
}

//在类外定义函数 - getAge()函数
int Teacher::getAge()
{
    return this->age;
}

void Teacher::display()
{
    cout << endl;
    cout << "老师信息" << endl;
    cout << "姓名:" << this->name << endl;
    cout << "性别:" << this->sex << endl;
    cout << "年龄:" << this->age << endl;
    cout << "工资:" << this->pay << endl;
    cout << endl;
}