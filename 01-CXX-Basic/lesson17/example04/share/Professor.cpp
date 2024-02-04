#include "../include/Professor.h"

//在类外定义函数 - 构造函数
Professor::Professor(char const *name,long long number,double salary1,double salary2,double salary3)
{
    cout << "Professor()有参数构造函数" << endl;
    this->name = name;
    this->number = number;
    this->salary1 = salary1;
    this->salary2 = salary2;
    this->salary3 = salary3;
}

//在类外定义函数 - 析构函数
Professor::~Professor()
{
    cout << "~Professor()析构函数" << endl;
}

//在类外定义函数 - calculateSalary()函数
double Professor::calculateSalary()
{
    //cout << this << "的calculateSalary()" << endl;
    this->salary = this->salary1 + this->salary2 - this->salary3;
    return this->salary;
}

//在类外定义函数 - display()函数
void Professor::display()
{
     cout << "教授信息如下" << endl;
     cout << "姓名:" << this->name << endl;
     cout << "编号:" << this->number << endl;
     cout << "基本工资:" << this->salary1 << endl;
     cout << "岗位津贴:" << this->salary2 << endl;
     cout << "实际工资:" << this->salary << endl;
     cout << endl;
}

//在类外定义函数 - getName()函数 - 获取姓名
char const * Professor::getName()
{
    //cout << this << ":: getName()" << endl;
    return this->name;
}

//在类外定义函数 - getId()函数 - 获取ID
long long Professor::getId()
{
    //cout << this << ":: getId()" << endl;
    return this->number;
}

//在类外定义函数 - getSalary1()函数 - 获取基本工资
double Professor::getSalary1()//
{
    //cout << this << ":: getSalary1()" << endl;
    return this->salary1;
}

//在类外定义函数 - getSalary2()函数 - 获取岗位工资
double Professor::getSalary2()
{
    //cout << this <<  ":: getSalary2()" << endl;
    return this->salary2;
}

//在类外定义函数 - getSalary2()函数 - 获取岗位工资
double Professor::getSalary3()
{
    //cout << this << ":: getSalary3()" << endl;
    return this->salary3;
}