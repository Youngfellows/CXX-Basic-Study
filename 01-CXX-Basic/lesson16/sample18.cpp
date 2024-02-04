#include<iostream>

using namespace std;

class Student;//声明Student类的向前引用,Student稍后定义

//定义类Teacher - 教师
class Teacher
{
    public:
        //构造函数
        Teacher();

        //析构函数
        ~Teacher();

        //定义教师类的成员函数,修改学生类的成绩
        void rework(Student &s,float grade);
};

//定义Student类 - 学生
class Student
{
    private:
        float grade;//成绩
    
    public:
        //构造函数
        Student(float grade);

        //析构函数
        ~Student();

        //输出成绩
        void display();

        //将教师类的成员函数rework(),声明为学生类的友元函数,则教师类能够修改学生类的私有成员
        friend void Teacher::rework(Student &s,float grade);
    
};

//在类外定义函数 - Teacher 构造函数
Teacher::Teacher()
{
    cout << "Teacher()构造函数 ..." << endl;
}

//在类外定义函数 - Teacher 析构函数
Teacher::~Teacher()
{
    cout << "~Teacher()析构函数 ..." << endl;
}

//在类外定义函数 - Teacher 类rework()函数
void Teacher::rework(Student &s,float grade)
{
    s.grade = grade;
}

//在类外定义函数 - Student 构造函数
Student::Student(float grade)
{
    cout << "Student()有参数构造函数 ..." << endl;
    this->grade = grade;
}

//在类外定义函数 - Student 析构函数
Student::~Student()
{
    cout << "~Student()无参数构造函数" << endl;
}

//在类外定义函数 - Student 类display()函数
void Student::display()
{
    cout << "成绩:" << this->grade << endl;
}

int main(int arg,char *args[])
{
    //创建一个学生对象stu1,老师对象teacher1
    Student stu1(59);//学生对象
    Teacher teacher1;//老师对象

    cout << "修改前" << endl;
    stu1.display();

    //修改成绩
    teacher1.rework(stu1,65);
    
    cout << "修改后" << endl;
    stu1.display();

    return 0;
}