#include "../include/ManageSystem.h"

//在类外实现函数 - 构造函数
ManageSystem::ManageSystem()
{
    cout << "ManageSystem()无参数构造函数" << endl;
}

//在类外实现函数 - 构造函数
ManageSystem::ManageSystem(Student s[SIZE])
{
    cout << "ManageSystem()有参数构造函数" << endl;
}

//在类外实现函数 - 构造函数
ManageSystem::~ManageSystem()
{
    cout << "~ManageSystem()析构函数" << endl;
}

//在类外实现函数 - 构造函数
Student *ManageSystem::input(int size)
{
    cout << "input() ..." << endl;
    if(size > SIZE)
    {
        char buff[128];
        char *err = buff;
        sprintf(err, "输入的数%d大于%d",size,SIZE);
        cout << err << endl;
        throw err;
    }else if(size <= 0)
    {
        throw size;
    }
    this->size = size;

    cout << "请输入" << this->size << "个学生信息" << endl;

    for(int j = 0; j < this->size; j++)
    {
        char buff[LEN];//缓冲区
        char *p = buff;//指针变量指向字符串buff
        sprintf(p,"张无忌%d",j + 1);
        
        //创建对象,动态申请内存
        Student *student = new Student(1011 + j,p);

        //创建5门课程
        Course courses[COUNT];//课程对象数组
        for(int i = 0; i < COUNT; i++)
        {
            char buff[LEN];//缓冲区
            char *p = buff;//指针变量指向字符串buff
            sprintf(p,"历史%d",i + 1);
            cout << p << endl;
            // Course *course = new Course(p,77 + i);
            // courses[i] = *course;//通过*解引用,获取Course对象

            Course course(p,77 + i);
            courses[i] = course;//通过*解引用,获取Course对象
        }
        //设置课程数组
        student->setCourse(courses);
        student->display();//显示学生信息

        //添加学生信息到学生数组
        this->students[j] = *student;

        //释放内存
        delete student;
    }

    //使对象指针pStudent指向学生对象数组
    pStudent = this->students;//指针变量pStudent指向Student对象数组的首元素
    cout << "==================HHHHHH==================" << endl;
    display(this->pStudent);
    cout << "==================ZZZZZZ==================" << endl;

    //动态申请内存,返回指向对象的指针变量,错误
    // Student *s = new Student[this->size];
    // for(int i = 0; i < this->size; i++)
    // {
    //     *(s + i) = this->students[i];
    // }

    //动态申请内存,返回指向对象的指针变量
    Student *s = (Student *)malloc(this->size * sizeof(Student));
    for(int i = 0; i < this->size; i++)
    {
        *(s + i) = this->students[i];//为动态数组赋值
    }

    //return this->pStudent;//不能这样返回
    return s;
}

//在类外实现函数 - averageCourse()函数
float * ManageSystem::averageCourse()//求每一门课程的平均成绩
{
    cout << "averageCourse() ..." << endl;
    return NULL;
}

//在类外实现函数 - fail2()函数
Student * ManageSystem::fail2()//找出两门以上课程不及格的学生
{
    cout << "fail2() ..." << endl;
    return NULL;
}

//在类外实现函数 - good()函数
Student * ManageSystem::good()//找出全部85分或者平均成绩90以上的学生
{
    cout << "good() ..." << endl;
    return NULL;
}

//在类外实现函数 - display()函数
void ManageSystem::display(Student *p)//打印学生信息
{
    cout << "display() ..." << endl;
    for(int i = 0; i < this->size; i++)
    {
        (*(p + i)).display();
    }
}


