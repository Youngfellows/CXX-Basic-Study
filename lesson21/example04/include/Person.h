#ifndef PERSON_H
#define PERSON_H

#include "./Teacher.h"
#include "./Cadre.h"

//定义一个Person类 - 多继承 - 继承自Teacher类和Cadre类
class Person : public Teacher,public Cadre
{
    private:
        double wages;//工资

    public:
        Person();//构造函数
        Person(string name,char sex,int age,string addr,string tel,string title,string post,double wages);
        ~Person();//析构函数
        void display();//显示Person信息
};

#endif