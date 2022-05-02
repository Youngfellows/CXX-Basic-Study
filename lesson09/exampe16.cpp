#include<iostream>

class Student
{
    public: 
        Student();
        ~Student();
        int data;
        static void setData(int number,Student *stu);//静态成员函数
        int getData();
};

Student::Student()
{
    std::cout << "Student()构造函数" << std::endl;
}

Student::~Student()
{
    std::cout << "~Student()析构函数" << std::endl;
}


void Student::setData(int number, Student *stu)
{
    stu->data = number;//类的静态成员函数 通过参数访问数据成员 
}

int Student::getData()
{
    return data;
}


int main()
{
    Student *stu = new Student();
    Student::setData(34,stu);//静态成员函数的地址 
    std::cout << "stu->data = " << stu->getData() << std::endl;

    stu->setData(27,stu);//静态成员函数的地址 
    std::cout << "stu->data = " << stu->getData() << std::endl;
    delete stu;
    return 0;
}