#include "../include/Pupils.h"

//在类外定义函数 - 构造函数
Pupils::Pupils()
{
    cout << "Pupils()构造函数" << endl;  
}

//在类外定义函数 - 构造函数
Pupils::~Pupils()
{
    cout << "~Pupils()析构函数" << endl;
}

//在类外定义函数 - getValue4Pupils()函数
void Pupils::getValue4Pupils()
{
    getValue();//调用基类的共有成员函数
    cout << "Pupils()基类getValue4Pupils()" << endl;
    cout << "地址:";
    cin >> this->addr;//输入派生类的私有数据addr
    cout << "学号:";
    cin >> this->num;//输入派生类的私有数据num
}

//在类外定义函数 - 构造函数
void Pupils::display4Pupils()
{
    display();//调用基类的共有成员函数
    cout << "学号:" << this->num << endl;
    cout << "地址:" << this->addr << endl;
    cout << endl;
}
