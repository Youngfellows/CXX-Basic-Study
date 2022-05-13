#include "../include/Cadre.h"

//在类外定义函数 - 构造函数
Cadre::Cadre()
{
    cout << "Cadre()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
Cadre::Cadre(string name,char sex,int age,string addr,string tel,string post)
{
    cout << "Cadre()有参数构造函数" << endl;
    this->name = name;
    this->sex = sex;
    this->age = age;
    this->addr = addr;
    this->tel = tel;
    this->post = post;
}

//在类外定义函数 - 析构函数
Cadre::~Cadre()
{
    cout << "~Cadre()析构函数" << endl;
}

//在类外定义函数 - display()函数
void Cadre::display()
{
    cout << endl << "Cadre::display() ..." << endl;
    cout << "姓名:" << this->name << endl;
    cout << "性别:" << this->sex << endl;
    cout << "年龄:" << this->age << endl;
    cout << "地址:" << this->addr << endl;
    cout << "电话:" << this->tel << endl;
    cout << "职务:" << this->post << endl << endl;
}
