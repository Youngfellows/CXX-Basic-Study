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
        virtual void show();//显示信息

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
        void show();
};

Person::Person()
{
    this->name = "no name";
    this->age = 0;
}

Person::Person(std::string n,int a)
{
    this->name = n;
    this->age = a;
}

Person::~Person()
{
    // std::cout << "~Person() 调用了" << std::endl;
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

void Person::show()
{
    std::cout << "Person类的show()" << std::endl;
    std::cout << "姓名: " << this->name << " ，年龄: " << this->age << std::endl;
}

Student::Student():Person(),stuId(0000)
{
    
}

Student::Student(std::string n,int a,long id):Person(n,a)
{
    this->stuId = id;
}

Student::~Student()
{
    // std::cout << "~Student() 调用了" << std::endl; 
}

void Student::setStuId(long id)
{
    std::cout << "setStuId() 学号: " << id << std::endl;
    this->stuId = id;
}

void Student::show()
{
    std::cout << "Student类的show()" << std::endl;
    std::cout << "姓名: " << this->name << " ，年龄: " << this->age << "学号: " << this->stuId << std::endl;
}

int main()
{
    //使用基类指针引用派生类对象 
    Person *person;

    Person *p1 = new Person("小美",18);
    person = p1;
    person->show();

    Student *stu = new Student("艳燕",23,20180320);
    person = stu;
    person->show();

    return 0;
}