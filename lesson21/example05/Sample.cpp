#include "./include/Sample.h"

//在其他文件定义函数 - 实现testStudent()接口函数功能
void testStudent()
{
    cout << endl << "testStudent() ... " << endl;
    //创建对象,动态申请内存
    Student *stu = new Student(1001,"张无忌","男");
    //使用指针变量访问类属性方法
    stu->display();

    //释放内存
    delete stu;
}

//在其他文件定义函数 - 实现testBirthday()接口函数功能
void testBirthday()
{
    cout << endl << "testBirthday() ..." << endl;
    //创建对象,动态申请内存
    Birthday birth1(1998,3,4);
    birth1.display();//使用对象.调用函数

    //创建对象,动态申请内存
    Birthday *birthday = new Birthday(1990,8,8);
    birthday->display();

    //释放空间
    delete birthday;
}

//在其他文件定义函数 - 实现testProfessor()接口函数功能
void testProfessor()
{ 
    cout << endl << "testProfessor() ... " << endl;
    //创建对象,动态申请内存
    Student *stu = new Student(10234,"任我行","男");
    //使用指针变量访问类属性方法
    //stu->display();

    //创建对象,动态申请内存
    Birthday birth1(2012,4,1);
    //birth1.display();//使用对象.调用函数

    //创建对象,动态申请内存
    Birthday *birthday = new Birthday(1990,9,10);
    //birthday->display();

    //创建对象prof1
    Professor prof1(10011,"小龙女","女",1997,7,21,40.9);
    prof1.display();

    //创建对象,动态申请内存
    Professor *prof2 = new Professor(*stu,birth1,70.8);
    prof2->display();

    Professor *prof3 = new Professor(*birthday,*stu,128.5);
    prof3->display();

    //释放内存
    delete stu;
    delete birthday;
    delete prof2;
    delete prof3;
}