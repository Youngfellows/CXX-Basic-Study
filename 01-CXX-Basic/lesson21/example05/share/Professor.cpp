#include "../include/Professor.h"

//在类外定义函数 - 构造函数
Professor::Professor()
{
    cout << "Professor()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
Professor::Professor(int num,string name,char sex[SIZE],int year,int month,int day,float area)
: Student(num,name,sex),birthday(year,month,day)//初始化父类,使用参数列表创建对象初始化类成员属性
{
    cout << "Professor()有参数构造函数1" << endl;
    this->area = area;
}

//在类外定义函数 - 构造函数
Professor::Professor(Student &stu,Birthday &b,float area)
: Student(stu.getNum(),stu.getName(),stu.getSex()),birthday(b.getYear(),b.getMonth(),b.getDay())//初始化父类,初始化类对象属性
{
    cout << "Professor()无参数构造函数2" << endl;
    this->area = area;
}

//在类外定义函数 - 构造函数
Professor::Professor(Birthday &b,Student &stu,float area)
: Student(stu.getNum(),stu.getName(),stu.getSex())//初始化父类
{
    cout << "Professor()无参数构造函数2" << endl;
    this->birthday = b;
    this->area = area;
}

//在类外定义函数 - 析构函数
Professor::~Professor()
{
    cout << "~Professor()析构函数" << endl;
}

//在类外定义函数 - display()函数
void Professor::display()
{
    cout << endl;
    cout << "Professor::display() ..." << endl;
    Student::display();//调用父类Student的display()函数
    birthday.display();//调用对象birthday的display()函数
    cout << "住房面积:" << this->area << endl;
    cout << endl;
}

