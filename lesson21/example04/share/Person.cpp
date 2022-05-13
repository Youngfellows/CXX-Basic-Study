#include "../include/Person.h"

//在类外定义函数 - 构造函数
Person::Person()
{
    cout << "Person()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
Person::Person(string name,char sex,int age,string addr,string tel,string title,string post,double wages)
: Teacher(name,sex,age,addr,tel,title),Cadre(name,sex,age,addr,tel,post)
{
    cout << "Person()有参数构造函数" << endl;
    this->wages = wages;
}

//在类外定义函数 - 析构函数
Person::~Person()
{
    cout << "~Person()析构函数" << endl;
}

//在类外定义函数 - display()函数
void Person::display()
{
    cout << endl << "Person::display() ..." << endl; 
    Teacher::display();//调用父类Teacher的display()函数
    Cadre::display();//调用父类Cadre的display()函数
    cout << "工资:" << this->wages << endl;
}
