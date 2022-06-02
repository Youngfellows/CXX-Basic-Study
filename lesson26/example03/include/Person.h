#ifndef PERSON_H
#define PERSON_H

#include "./Global.h"
class Person
{
    public:
        int age;//年龄
        string name;//姓名
    
    public:
        Person(int age,string name);//构造函数
        ~Person();//析构函数
        
        //重载输出运算符号
        friend ostream & operator << (ostream &out,const Person &person);
};

#endif