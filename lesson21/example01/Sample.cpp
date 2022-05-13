#include "./include/Sample.h"

//在其他文件实现函数 - testBaseStudent()函数
void testBaseStudent()
{
    //创建对象stu,动态申请内存
    Student *stu = new Student();
    //通过指针调用对象的函数
    stu->getValue();
    stu->display();

    //释放内存
    delete stu;
}

//在其他文件实现函数 - testPupils()函数
void testPupils()
{
    //创建对象pupils,动态申请内存
    Pupils *pupils = new Pupils();
    //通过指针调用函数
    pupils->getValue4Pupils();
    pupils->display4Pupils(); 

    //释放内存
    delete pupils;
}

//在其他文件实现函数 - testMiddleStudent()函数
void testMiddleStudent()
{
    //创建对象,动态申请内存
    MiddleStudent *midStu = new MiddleStudent();
    midStu->getValue4MiddleStu();//正确,通过指针调用派生类的公共成员函数
    midStu->display4MiddleStu();//正确,通过指针调用派生类的公共成员函数
    
    //midStu->display();//错误,通过指针调用基类的display()函数,display()函数在派生类是private私有的,不能通过对象调用私有属性
    //midStu->getValue();//error: ‘void Student::getValue()’ is inaccessible within this context

    //释放内存
    delete midStu;
}

//在其他文件实现函数 - testCat()函数
void testCat()
{
    //创建对象,动态申请内存
    Cat *cat = new Cat();
    cat->getValue4Cat();//通过指针调用派生类对象的公共方法
    cat->display4Cat();//通过指针调用派生类对象的公共方法

    Cat *cat2 = new Cat();
    //error: ‘void Animal::getValue()’ is inaccessible within this context
    //cat2->getValue();//错误,通过指针调用基类的getValue()函数,getValue()函数在派生类是protected保护的,不能通过对象调用
    //cat2->display();//错误,通过指针调用基类的display()函数,display()函数在派生类是protected保护的,不能通过对象调用

    //释放内存
    delete cat;
    delete cat2;
}

//在其他文件实现函数 - testCat()函数
void testDog()
{
    //创建对象,动态申请内存
    Dog *dog = new Dog();
    dog->getValue4Dog();//通过指针调用派生类对象的公共方法
    dog->display4Dog();//通过指针调用派生类对象的公共方法

    //释放内存
    delete dog;
}