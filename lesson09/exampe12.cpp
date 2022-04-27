#include<iostream>
#include<string>

//结构体
struct Date
{
    int year;//年
    int month;//月
    int day;//日
};

class Student
{
    public: 
        Student(int y,int m,int d,int num,std::string sname);
        ~Student();
        void studentInfo() const;//常成员函数

    private: 
        const int code;//常数据成员
        std::string name;//姓名
        Date birthday;//日期
};

//带参数构造函数完成数据成员初始化
Student::Student(int y,int m,int d,int num = 0,std::string sname = "no name"):code(num)
{
    std::cout << "Student()构造函数" << std::endl;
    name = sname;
    birthday.year = y;
    birthday.month = m;
    birthday.day = d;
}

Student::~Student()
{
    std::cout << "~Student()析构函数" << std::endl;
}

//常成员函数
void Student::studentInfo() const
{
    std::cout << "序号: " << code << "\t姓名: " << name << "\t出生日期: " << birthday.year << "/" << birthday.month 
    << "/" << birthday.day << std::endl;
}

int main()
{
    //常数据成员
    Student stu1(1990,3,24,1001,"陈小春");
    stu1.studentInfo();

    Student *stu2 = new Student(1992,8,16,1002,"陈都琳");
    stu2->studentInfo();

    return 0;
}