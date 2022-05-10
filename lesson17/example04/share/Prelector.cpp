#include "../include/Prelector.h"

//在类外定义函数 - 构造函数
Prelector::Prelector(char const *name,long long number,double salary1,double salary2,double salary3):
Professor(name,number,salary1,salary2,salary3) //初始化父类属性
{
    cout << "Prelector()有参数构造函数" << endl;
    // this->name = name;
    // this->number = number;
    // this->salary1 = salary1;
    // this->salary2 = salary2;
    // this->salary3 = salary3;
}

//在类外定义函数 - 析构函数
Prelector::~Prelector()
{
    cout << "~Prelector()析构函数" << endl;
}

//在类外定义函数 - calculateSalary()函数
double Prelector::calculateSalary()
{
    //cout << "Prelector的calculateSalary()" << endl;
    double salary = this->getSalary1() + this->getSalary2() - this->getSalary3();
    return salary;
}

//在类外定义函数 - display()函数
void Prelector::display()
{
     cout << "讲师信息如下" << endl;
     cout << "姓名:" << this->getName() << endl;
     cout << "编号:" << this->getId() << endl;
     cout << "基本工资:" << this->getSalary1() << endl;
     cout << "岗位津贴:" << this->getSalary2() << endl;
     cout << "实际工资:" << this->calculateSalary() << endl;
    cout << endl;
}