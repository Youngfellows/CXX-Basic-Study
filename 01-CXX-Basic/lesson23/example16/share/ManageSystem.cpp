#include "../include/ManageSystem.h"

//在类外实现函数 - 构造函数
ManageSystem::ManageSystem()
{
    cout << "ManageSystem()无参数构造函数" << endl;
}

//在类外实现函数 - 构造函数
ManageSystem::~ManageSystem()
{
    cout << "~ManageSystem()析构函数" << endl;
}

//在类外实现函数 - 构造函数
void ManageSystem::input(int size)
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

    cout << "输入" << this->size << "个学生信息" << endl;

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
            //cout << p << endl;
            // Course *course = new Course(p,77 + i);
            // courses[i] = *course;//通过*解引用,获取Course对象

            Course course(p,57 + i);
            courses[i] = course;//通过*解引用,获取Course对象
        }
        //设置课程数组
        student->setCourse(courses);
        //student->display();//显示学生信息

        //添加学生信息到学生数组
        this->students[j] = *student;
        //*(this->pStudent + j) = *student;

        //释放内存
        delete student;
    }

    //指针变量pStudent指向Student对象数组的首元素
    this->pStudent = this->students;
    cout << "================HHHHHHHHH=======================" << endl;
    display();
    cout << "================XXXXXXXXX=======================" << endl;
}

//在类外实现函数 - averageCourse()函数
float * ManageSystem::averageCourse()//求每一门课程的平均成绩
{
    cout << "averageCourse() ..." << endl;
    return NULL;
}

//在类外实现函数 - fail2()函数
void ManageSystem::fail2()//找出两门以上课程不及格的学生
{
    cout << "fail2() ..." << endl;
    
}

//在类外实现函数 - good()函数
void ManageSystem::good()//找出全部85分或者平均成绩90以上的学生
{
    cout << "good() ..." << endl;
   
}

//在类外实现函数 - averageCourse()函数
float * ManageSystem::averageCourse(Student *s)//求每一门课程的平均成绩
{
    cout << "averageCourse() ..." << endl;
    return NULL;
}

//在类外实现函数 - fail2()函数
void ManageSystem::fail2(Student *s)//找出两门以上课程不及格的学生
{
    cout << "====两门以上课程不及格的学生===" << endl;
    cout << "fail2():: ..." << endl;
    for(int i = 0; i < this->size; i++)
    {
        Student s1 = *(s + 1);//学生对象
        Course *c = s1.getCourse();//获取每个学生的课程信息数组,返回的是指向数组的指针变量
        //(*(s + i)).display();
        int fail = 0;//不及格课程数量
        for(int j = 0; j < COUNT; j++)
        {
           char *cName = c->getCName();
           float cScore = c->getScore();
           cout << "fail2():: cName:" << cName << endl;
           cout << "fail2():: cScore:" << cScore << endl;
           if(cScore <= FAIL_SCORE)
           {
               fail++;
           }
        }
        //不及格课程超过2门
        if(fail >= FAIL_COUNT)
        {
            s1.display();//打印不及格学生信息
        }
    } 
    
}

//在类外实现函数 - good()函数
void ManageSystem::good(Student *s)//找出全部85分或者平均成绩90以上的学生
{
    cout << "good() ..." << endl;
   
}

//在类外实现函数 - display()函数
void ManageSystem::display()//打印学生信息
{
    cout << "display() ..." << endl;
    for(int i = 0; i < this->size; i++)
    {
        //(*(this->pStudent + i)).display();
        (this->students[i]).display();
    }
}

//在类外实现函数 - get()函数,获取学生列表,返回的是指向Student数组对象的指针
Student * ManageSystem::get()
{
    return this->pStudent;
}

//在类外实现函数 - display()函数
void ManageSystem::display(Student *s)//打印学生信息
{
    cout << "display():: ... 222 ..." << endl;
    for(int i = 0; i < this->size; i++)
    {
        (*(s + i)).display();
    }
}


