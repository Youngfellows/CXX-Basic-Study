#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>

//模板类
template <typename T>
class Person
{
    protected: 
        std::string name;
        int age;
        T info;

    public:
        Person(std::string name,int age,T info);
        ~Person();
        void show();
};

//具体实现
template<typename T> Person<T>::Person(std::string name,int age,T info)
{
    std::cout << "Person()构造函数" << std::endl;
    this->name = name;
    this->age = age;
    this->info = info;
}

template<typename T> Person<T>::~Person()
{
    std::cout << "~Persion()析构函数" << std::endl;
}

template<typename T> void Person<T>::show()
{
    std::cout << "姓名: " << this->name << " ,年龄: " << this->age << " ，info: " << info << std::endl;
}

#endif