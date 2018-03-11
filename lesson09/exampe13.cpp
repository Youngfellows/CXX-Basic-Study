#include<iostream>
#include<string>

class Student
{
    public: 
        int code;//编码
        std::string name;//姓名
    
    public: 
        Student(int code,std::string name);
        ~Student();
        void info() const;//常成员函数
};

Student::Student(int c,std::string n)
{
    std::cout << "Student()构造函数" << std::endl;
    code = c;
    name = n;
}

void Student::info() const
{
    std::cout << "编号: " << code << "\t姓名: " << name << std::endl; 
}

Student::~Student()
{
  std::cout << "~Student()析构函数" << std::endl;
}

int main()
{
    //常对象
    const Student *stu1 = new Student(1001,"王小蒙");
    stu1->info();
    // stu1->code = 1003;常量不可改变
    
    const Student stu2(1002,"李欢欢");
    stu2.info();

    Student *stu3 = new Student(1004,"张莉莉");
    // stu3->info();
    stu3->code = 1008;
    stu3->info();

    delete stu1,stu2,stu3;

    return 0;
}