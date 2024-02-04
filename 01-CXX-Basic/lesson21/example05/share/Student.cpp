#include "../include/Student.h"

//在类外定义函数 - 构造函数
Student::Student()
{
    cout << "Student()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
Student::Student(int num,string name,char sex[SIZE])
{
    cout << "Student()有参数构造函数" << endl;
    this->num = num;
    this->name = name;
    //this->sex = sex;
    strcpy(this->sex,sex);//拷贝字符串到数组
}

//在类外定义函数 - 析构函数
Student::~Student()
{
    cout << "~Student()析构函数" << endl;
}

//在类外定义函数 - getNum函数
int Student::getNum()
{
    return this->num;
}

//在类外定义函数 - getName函数
string Student::getName()
{
    return this->name;
}

//在类外定义函数 - getSex函数
char * Student::getSex()
{
    return this->sex;
}

//在类外定义函数 - display()函数
void Student::display()
{   
    cout << "Student::display() ..." << endl;
    cout << "学号:" << this->num << endl;
    cout << "姓名:" << this->name << endl;
    cout << "性别:" << this->sex << endl;
    cout << endl;
}
