#include<iostream>

class Student
{
    friend class Person;//类Person是类Student的友元类,Person类可以访问Student类的成员/函数

    private: 
        int age;//年龄

    public: 
        void display()
        {
            std::cout << "年龄: " << age << std::endl;
        }
};

class Person
{
    public: 
        void set(int age)
        {
            student.age = age;//Person类可以访问Student类的成员/函数
        }

        void display()
        {
            student.display();//Person类可以访问Student类的成员/函数
        }

    private: 
        Student student;
};

int main()
{
    //友元类
    // 若F类是A类的友元类，则F类的所有成员函数都是A类的友元函数
    // 友元类通常设计为一种对数据操作或类之间传递消息的辅助类 

    Person person;
    person.set(23);
    person.display();

    return 0;
}