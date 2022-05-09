#include<iostream>

using namespace std;

//定义学生类
class Student
{
    private:
        int number;//学号
        char const *name;//姓名
        int age;//年龄
        char const *sex;//性别

    public:
        //定义构造函数
        Student();
        Student(int num,char const *name,int age,char const *sex);

        //定义析构函数
        ~Student();

        //定义成员函数
        void display();
};

//在类外定义Student类的成员函数 - 构造函数
Student::Student()
{
    cout << "Student()无参数构造函数~" << endl;
}

Student::Student(int num,char const *name,int age,char const *sex)
{
    cout << "Student()有参数构造函数~" << endl;
    this->number = num;
    this->name = name;
    this->age = age;
    this->sex = sex;
}

//在类外定义Student类的成员函数 - 析构函数
Student::~Student()
{
    cout << "~Student()析构函数" << endl;
}

//在类外定义Student类的成员函数 - display函数
void Student::display()
{
    cout << endl;
    cout << "学号:" << this->number << ",姓名:" << this->name << ",年龄:" << this->age << ",性别:" << this->sex << endl;
    cout << endl;
}

int main(int arg,char *args[])
{
    //创建一个Student类对象stu1
    Student stu1;

    char const *name = "苏小小";
    char const *sex = "女";
    Student stu2(1,name,22,sex);

    //调用对象函数
    stu2.display();

    //定义一个Student类的指针变量pStu
    Student *pStu;
    pStu = &stu2;//指针变量pStu指向对象sut2

    pStu->display();//通过指针调用对象函数

    //delete pStu;//删除指针

    return 0;
}