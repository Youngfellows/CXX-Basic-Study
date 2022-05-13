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