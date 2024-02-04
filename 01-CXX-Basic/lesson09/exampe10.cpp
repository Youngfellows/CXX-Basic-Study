#include<iostream>
#include<cstring>

class Student
{
    private:
        char *name;//姓名
        int age;//年龄
        int size;//名字长度
    
    public: 
        Student();
        Student(const char *pname);
        Student(const Student &stu);//定义复制构造函数
        ~Student();
        char *getName();
        int getSize();
};

Student::Student()
{
    std::cout << "Student()不带参数的构造函数" << std::endl;
}

Student::Student(const char *pname)
{
     std::cout << "Student(char *pname)带参数的构造函数" << std::endl;
     name = new char[strlen(pname) + 1];
     if(pname != 0)
     {
        strcpy(name,pname);
     }
     size = strlen(pname);
}

//定义复制构造函数
Student::Student(const Student &stu)
{
    std::cout << "Student(const Student &stu)复制构造函数" << std::endl;
    name = new char[strlen(stu.name) + 1];
    if( name != 0)
    {
        strcpy(name,stu.name);
    }
    size = stu.size;
}

char *Student::getName()
{
    return name;
}

int Student::getSize()
{
    return size;
}

Student::~Student()
{
    std::cout << "~Student()析构函数" << std::endl;
    delete [] name;
    size = 0;
}

int main()
{
    //对象的数据资源是由指针指示的堆时，默认复制构造函数仅作指针值复制
    //浅复制与深复制
    Student stu1("aispeex");
    std::cout << "姓名: " << stu1.getName() << ", 名字长度: " << stu1.getSize() << std::endl;

    std::cout << std::endl;
    
    Student stu2 = stu1;
    std::cout << "姓名: " << stu2.getName() << ", 名字长度: " << stu2.getSize() << std::endl;

    return 0;
}