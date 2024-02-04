#include<iostream>

using namespace std;

//定义Person基类 - 人
class Person
{
    public:
        char const *name;//姓名
        char const *sex;//性别
        int age;//年龄
    
    public:
        //构造函数
        Person(char const *name,char const *sex,int age);
        //析构函数
        ~Person();

        //公有函数 - 显示信息 
        void display();
}; 

//定义Person类的子类 - 派生类 - 学生
class Student: public Person
{
    private:
        long long id;//学号
        char const *major;//专业
        Person monitor;//班长

    public:
        //构造函数
        Student(char const *name,char const *sex,int age,long long id,char const *major,
        char const *monitor_name,char const *monitor_sex,int monitor_age);
        //析构函数
        ~Student();

        //显示学信息 display()函数
        void display();

        //显示班长信息
        void show_monitor();
};

//在类外定义函数 - 构造函数
Person::Person(char const *name,char const *sex,int age)
{
    cout << "Person()有参数构造函数" << endl;
    this->name = name;
    this->sex = sex;
    this->age = age;
}

//在类外定义函数 - 析构函数
Person::~Person()
{
    cout << "~Person()析构函数" << endl;
}

//在类外定义函数 - display()函数
void Person::display()
{
    cout << endl;
    cout << "姓名:" << this->name << endl;
    cout << "性别:" << this->sex << endl;
    cout << "年龄:" << this->age << endl;
    cout << endl;
}

//在类外定义函数 - 构造函数 - 初始化基类对象 - 初始化子类monitor对象
Student::Student(char const *name,char const *sex,int age,long long id,char const *major,
        char const *monitor_name,char const *monitor_sex,int monitor_age):
        Person(name,sex,age),monitor(monitor_name,monitor_sex,monitor_age)
{
    cout << "Student()有参数构造函数" << endl;
    this->id = id;
    this->major = major;
}

//在类外定义函数 - 析构函数
Student::~Student()
{
    cout << "~Student()析构函数" << endl;
}

//在类外定义函数 - display()函数
void Student::display()
{
    // error: ‘supper’ was not declared in this scope; did you mean ‘isupper’?
    //supper->display();
    cout << endl;
    cout << "姓名:" << this->name << endl;
    cout << "性别:" << this->sex << endl;
    cout << "年龄:" << this->age << endl;

    cout << "学号:" << this->id << endl;
    cout << "专业:" << this->major << endl;
    cout << endl;
}

//在类外定义函数 - display()函数
void Student::show_monitor()
{
    cout << "班长信息" << endl;
    monitor.display();
}

int main(int arg,char *args[])
{
    //创建一个stu1对象,动态申请内存
    char const *name = "乔峰";
    char const *sex = "男";
    int age = 33;
    char const *major = "物理学";
    long long id = 123456789;

    char const *monitor_name = "欧阳锋";
    char const *monitor_sex = "男";
    int monitor_age = 66;

    Student *student = new Student(name,sex,age,id,major,monitor_name,monitor_sex,monitor_age);
    student->display();//通过指针调用函数
    student->show_monitor();

    //释放内存
    delete student;

    return 0;
}