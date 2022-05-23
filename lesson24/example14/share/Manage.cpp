#include "../include/Manage.h"

//在类外实现函数 - 构造函数
Manage::Manage()
{
    cout << "Manage()构造函数" << endl;
    init();
}

//在类外实现函数 - 析构函数
Manage::~Manage()
{
    cout << "~Manage()析构函数" << endl;
}

//在类外实现函数 - 析构函数
void Manage::init()
{
    cout << "init():: ..." << endl;
    cout << "请输入" << SIZE << "个学生信息" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        //创建一个学生
        Student *stu = new Student(10086+i,"杨过","男");

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
        //为学生添加课程
        stu->setCourse(course,COUNT);

        //添加到学生数组
        *(students + i) = *stu;
        //students[i] = *stu;
    }

    //指向学生的指针变量指向学生数组
    this->pStudent = this->students;
}

//在类外实现函数 - getStudents()函数
Student *Manage::getStudents()//获取学生数组
{
    cout << "getStudents():: ..." << endl;
    return this->pStudent;
}

//在类外实现函数 - calc()函数
void Manage::calc(Student *pStu)//计算学生成绩
{
    cout << "calc():: ..." << endl;
}

//在类外实现函数 - calc()函数
void Manage::display(Student *s)
{
    cout << "Manage::display():: ..." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        Student stu = *(s + i);//获取学生信息
        stu.display();//显示学生信息
    }
}