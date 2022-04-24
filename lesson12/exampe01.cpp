#include<iostream>
#include<string>

//基类
class Person
{
    protected: 
        std::string name;//姓名
        int age;//年龄
    
    public: 
        Person();
        Person(std::string n,int a);
        ~Person();
        void setName(std::string n);//设置姓名
        void setAge(int age);//设置年龄

};

//派生类
class Student : public Person
{
    protected: 
        long stuId;//学号
    
    public: 
        Student();
        Student(std::string n,int a,long id);
        ~Student();
        void setStuId(long id);//设置ID
};

Person::Person()
{
    std::cout << "Person()无参构造函数" << std::endl;
    this->name = "no name";
    this->age = 0;
}

Person::Person(std::string n,int a)
{
    std::cout << "Person()有参构造函数" << std::endl;
    this->name = n;
    this->age = a;
}

Person::~Person()
{
    std::cout << "~Person() 析构函数调用了" << std::endl;
}

void Person::setName(std::string n)
{
    std::cout << "setName() 姓名: " << n <<  std::endl;
    this->name = n;
}

void Person::setAge(int a)
{
    std::cout << "setAge() 年龄: " << a << std::endl;
    this->age = a;
}

Student::Student():Person(),stuId(0000)
{
    std::cout << "Student()无参构造函数" << std::endl; 
}

Student::Student(std::string n,int a,long id):Person(n,a)
{
    std::cout << "Student()有参构造函数" << std::endl; 
    this->stuId = id;
}

Student::~Student()
{
    std::cout << "~Student()析构函数调用了" << std::endl; 
}

void Student::setStuId(long id)
{
    std::cout << "setStuId() 学号: " << id << std::endl;
    this->stuId = id;
}

int main()
{
    //使用基类指针引用派生类对象 
    Person *p;//基类类指针变量

    Person person;//基类对象

    p = &person;//p指向对象person
    p->setName("甜甜");
    p->setAge(18);

    Student student;//派生类对象
    p = &student;//p指向派生类
    p->setName("莉莉");
    p->setAge(23);
    student.setStuId(20180120);//调用从基类继承的成员函数
    ((Student*)p) -> setStuId(20180123); //对基类指针强类型转换调用派生类的成员函数

    return 0;
}