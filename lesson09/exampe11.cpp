#include<iostream>

class Person
{
    public: 
        int age;
        const long long PHONE_NUMBER;//电话号码是常量
    public: 
        Person();
        ~Person();
        void testFun();
};

Person::Person():PHONE_NUMBER(15012530841)
{
    std::cout << "构造函数" << std::endl;
}

Person::~Person()
{
    std::cout << "析构函数" << std::endl;
}

void Person::testFun()
{
    age++;
    //PHONE_NUMBER++;
}

int main()
{
    Person p1,p2;
    p1.age = 18;
    //p1.PHONE_NUMBER = 13699828991;
    p2.age = 24;

    std::cout << "&p1.age = " << &p1.age << " ,&p1.PHONE_NUMBER = " << &p1.PHONE_NUMBER << std::endl;
    std::cout << "p1.age = " << p1.age << " ,p1.PHONE_NUMBER = " << p1.PHONE_NUMBER << std::endl << std::endl;

    p2.testFun();
    std::cout << "&p2.age = " << &p2.age << " ,&p2.PHONE_NUMBER = " << &p2.PHONE_NUMBER << std::endl;
    std::cout << "p2.age = " << p2.age << " ,p2.PHONE_NUMBER = " << p2.PHONE_NUMBER << std::endl;


    return 0;
}