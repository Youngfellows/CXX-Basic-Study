#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

//模板类继承自Person<T>模板类
template<typename T> 
class Student : Person<T>
{
    protected: 
        double score;//分数
    
    public: 
        Student(std::string name,int age,T info,double score);
        ~Student();
        void show();//子类的show方法
};

//具体实现 -- 类模板 的函数是 模板函数
template<typename T> Student<T>::Student(std::string name,int age,T info,double score) : Person<T>(name,age,info)
{
    std::cout << "Student()构造函数" << std::endl;
    this->score = score;
}

template<typename T> Student<T>::~Student()
{
    std::cout << "~Student()析构函数" << std::endl;
}

template<typename T> void Student<T>::show()
{
    this->Person<T>::show();//调用父类的方法
    std::cout << "分数: " << this->score << std::endl;
}

#endif