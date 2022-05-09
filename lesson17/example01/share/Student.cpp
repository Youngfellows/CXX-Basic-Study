#include "../include/Student.h"

// using namespace std;

//在类外定义函数 - 构造函数
Student::Student()
{
    cout << "Student()无参数构造函数" << endl;
}

Student::Student(char const *name,int age,char const *sex)
{
    cout << "Student()有参数构造函数" << endl;
    this->name = name;
    this->age = age;
    this->sex = sex;
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
    cout << "性别:" << this->sex << endl;
    cout << "年龄:" << this->sex << endl;
    cout << endl;
}
