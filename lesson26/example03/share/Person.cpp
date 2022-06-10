#include "../include/Person.h"

Person::Person(int age,string name)
{
    //cout << "Person()构造函数" << endl;
    this->age = age;
    this->name = name;
}

Person::~Person()
{
    //cout << "~Person()析构函数" << endl;
}

//友元函数 - 重载输出运算符号
ostream & operator << (ostream &out,const Person &person)
{
    out << "name:" << person.name << ",age:" << person.age << endl;
    return out;
}