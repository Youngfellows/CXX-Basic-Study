#include "../include/School.h"

//在类外定义函数 - 构造函数
School::School(char const *name)
{
    cout << "School()有参数构造函数" << endl;

    //对属性对象进行初始化
    char const *stuName = "杨过";
    char const *stuSex = "男";
    int age = 22;
    Student *stu = new Student(stuName,age,stuSex);//动态创建对象
    this->student = *stu;
    
    //调用构造函数创建对象
    char const *teacherName = "张三丰";
    char const *major = "男";
    int teacherAge = 108;
    Teacher teacher1(teacherName,teacherAge,major);
    this->teacher =  teacher1;

    //初始化普通对象
    this->name = name;
    delete stu;//释放内存
}

//在类外定义函数 - 析构函数
School::~School()
{
    cout << "~School()析构函数" << endl;
}

//在类外定义函数 - set()函数
void School::set(int stuSize,int teacherSize)
{
    this->studentSize = stuSize;
    this->teacherSize = teacherSize;
}

//在类外定义函数 - display()函数
void School::display()
{
    cout << endl;
    cout << "显示学校信息" << endl;
    cout << "校名:" << this->name << endl;
    cout << "学生人数:" << this->studentSize << endl;
    cout << "老师人数:" << this->teacherSize << endl;
    cout << endl;

    (this->student).display();
    (this->teacher).display();
}
