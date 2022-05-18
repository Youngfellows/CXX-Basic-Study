#include "./include/Sample.h"

//在文件外实现接口函数 - test1()函数
void test1()
{
    cout << "test1() ..." << endl;
    //创建对象,动态申请内存
    Course *course = new Course("英语",88.5);
    //通过指针范围函数
    char *cname = course->getCName();
    float score = course->getScore();
    cout << "cname:" << cname << endl;
    cout << "score:" << score << endl;

    //释放内存
    delete course;
}

//在文件外实现接口函数 - test2()函数
void test2()
{
    cout << "test2() ..." << endl;
    //创建对象,动态申请内存
    Student *student = new Student(10086,"杨过");

    //创建5门课程
    Course courses[COUNT];//课程对象数组
    for(int i = 0; i < COUNT; i++)
    {
        char buff[LEN];//缓冲区
        char *p = buff;//指针变量指向字符串buff
        sprintf(p,"历史%d",i + 1);
        cout << p << endl;
        Course course(p,77 + i);
        courses[i] = course;//通过*解引用,获取Course对象
    }
    //设置课程数组
    student->setCourse(courses);
    student->display();//显示学生信息


    //释放内存
    delete student;
}

//在文件外实现接口函数 - test3()函数
void test3()
{
    cout << "test3() ..." << endl;
    //创建对象,动态申请内存
    ManageSystem *manage = new ManageSystem();
    try
    {
        cout << "请输入学生数量:" << endl;
        int size;
        cin >> size;
        Student *s = manage->input(size);//输入学生信息
        manage->display(s);//显示学生信息
    }catch(char *err)
    {
        cout << "error,err=" << err << endl;
    }catch(...)
    {
        cout << "error,size is 0" << endl; 
    }


    //释放内存
    delete manage;
}

//在文件外实现接口函数 - test1()函数
void test4()
{
    cout << "test4() ..." << endl;
}

//在文件外实现接口函数 - test5()函数
void test5()
{
    cout << "test5() ..." << endl;
}