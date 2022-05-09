#include "../include/Teacher.h"

// using namespace std;

//在类外定义函数 - 构造函数
Teacher::Teacher()
{
    cout << "Teacher()无参数构造函数" << endl;
}

Teacher::Teacher(char const *name,int age,char const *major)
{
    cout << "Teacher()有参数构造函数" << endl;
    this->name = name;
    this->age = age;
    this->major = major;
}

//在类外定义函数 - 析构函数
Teacher::~Teacher()
{
    cout << "~Teacher()析构函数" << endl;
}

//在类外定义函数 - display()函数
void Teacher::display()
{
    cout << endl;
    cout << "老师信息" << endl;
    cout << "姓名:" << this->name << endl;
    cout << "年龄:" << this->age << endl;
    cout << "专业:" << this->major << endl;
    cout << endl;
}
