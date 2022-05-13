#include "../include/MiddleStudent.h"

//在类外定义函数 - 构造函数
MiddleStudent::MiddleStudent()
{
    cout << "MiddleStudent()构造函数" << endl;  
}

//在类外定义函数 - 构造函数
MiddleStudent::~MiddleStudent()
{
    cout << "~MiddleStudent()析构函数" << endl;
}

//在类外定义函数 - getValue4Pupils()函数
void MiddleStudent::getValue4MiddleStu()
{
    getValue();//正确,调用基类的成员函数,其在派生类是private私有的
    cout << "MiddleStudent()基类getValue4MiddleStu()" << endl;
    cout << "地址:";
    cin >> this->addr;//输入派生类的私有数据addr
    cout << "学号:";
    cin >> this->num;//输入派生类的私有数据num
}

//在类外定义函数 - 构造函数
void MiddleStudent::display4MiddleStu()
{
    display();//正确,调用基类的成员函数,其在派生类是private私有的
    cout << "学号:" << this->num << endl;
    cout << "地址:" << this->addr << endl;
    cout << endl;
}
