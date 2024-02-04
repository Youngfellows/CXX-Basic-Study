#include<iostream>
#include "Person.h"
#include "Student.h"

int main()
{
    //创建类模板的实例化对象,指针变量p1指向对象实例化对象
    Person<double> *p1 = new Person<double>("aispeex",22,87.45);
    p1->show();
    delete p1;

    Person<int> *p2 = new Person<int>("apple",38,44);
    p2->show();
    delete p2;

    Person<std::string> *p3 = new Person<std::string>("google",49,"xianggang");
    p3->show();
    delete p3;

    //创建继承的类模板的实例化对象,指针变量stu1指向对象实例化对象
    Student<int> *stu1 = new Student<int>("王小名",23,77,89.9);
    stu1->show();
    delete stu1;

    Student<std::string> *stu2 = new Student<std::string>("小莉莉",34,"深圳市南山区",248.4);
    stu2->show();
    delete stu2;

    return 0;
}