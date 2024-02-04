#include<iostream>
#include<string>

class Student
{
    public: 
        std::string name;//姓名
        std::string address;//住址
        int age;//年龄
        double salary;//工资
        double bonus;//奖金
        

        void printStudentInfo()
        {
            std::cout << name << " " << address << " " << age << std::endl;
        }

};

double moneys(Student *stu)
{
    return stu->salary + stu->bonus;
}

int main()
{
    //访问对象成员 
    //.访问对象成员 
    //->访问对象成员 
    
    Student student;
    student.name = "婷婷";
    student.address = "深圳市南山区";
    student.age = 23;
    student.salary = 12800;
    student.bonus = 300;
    student.printStudentInfo();
    std::cout << "每月工资: " << moneys(&student) << std::endl;

    Student *stu = new(Student);//创建动态对象
    stu->name = "芳芳";
    stu->address = "广州市白云区";
    stu->age = 22;
    stu->salary = 8000;
    stu->bonus = 500;
    stu->printStudentInfo();
    std::cout << "每月工资: " << moneys(stu) << std::endl;


    return 0;
}