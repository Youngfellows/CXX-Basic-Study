#include "./include/Sample.h"

//在文件外实现接口函数 - test1()函数
void test1()
{
    cout << "test1():: ..." << endl;
    //创建对象,动态申请内存
    Course *c = new Course("英语",88.5);
    //通过指针调用函数
    c->display();
    cout << endl;

    //释放内存
    delete c;
}

//在文件外实现接口函数 - test2()函数
void test2()
{
    cout << "test2():: ..." << endl;
    Student *stu = new Student(10086,"杨过","男");

    //设置5门课程
    Course course[COUNT];//课程数组
    for(int i = 0; i < COUNT; i++)
    {
        char buff[LEN];//缓冲区
        char *p = buff;//指针变量指向字符串buff
        sprintf(p,"历史%d",i + 1);//拼接字符串
        Course *c = new Course(p,88.5 + i);
        course[i] = *c;//获取课程对象
        //释放内存
        delete c;
    }
    stu->setCourse(course,COUNT);//设置课程

    //通过指针访问函数
    stu->display();

    cout << endl;

    //释放内存
    delete stu;
}

//在文件外实现接口函数 - test3()函数
void test3()
{
    cout << "test3():: ..." << endl;
    //创建对象,动态申请内存
    Manage *manage = new Manage(); 

    //通过指针访问函数
    Student *s = manage->getStudents();//获取学生数组
    manage->display(s);//打印学生信息

    //释放内存
    delete manage;
}

//在文件外实现接口函数 - test4()函数
void test4()
{
    cout << "test4():: ..." << endl;
    
}
