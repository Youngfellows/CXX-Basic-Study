#include "../include/Dog.h"

//在类外定义函数 - 基类 - 构造函数
Dog::Dog()
{
    cout << "Dog()基类无参数构造函数" << endl;
}

//在类外定义函数 - 基类 - 析构函数
Dog::~Dog()
{
    cout << "~Dog()析构函数" << endl;
}

//在类外定义函数 - 基类 - getValue()函数
void Dog::getValue4Dog()
{
    getValue();//正确,调用基类的公共方法,其在派生类是public的,可以访问

    cout << "Dog类getValue4Cat()" << endl;
    char temp[SIZE] = {'0'};//定义一个字符数组

    cout << "地址:";
    cin >> temp ;
    strcpy(this->addr,temp);
    //cout << "name=" << this->name <<endl;
    
    cout << "编号:";
    cin >> this->num ;
}

//在类外定义函数 - 基类 - display()函数
void Dog::display4Dog()
{    
    cout << endl; 
    //getValue();//正确,调用基类的公共方法,其在派生类是protected的,可以访问
    cout << "Cat()类display()" << endl;
    cout << "姓名:" << this->name << endl;//正确,调用基类的protected属性,其在派生类是protected的,可以访问
    cout << "性别:" << this->sex << endl;//正确,调用基类的protected属性,其在派生类是protected的,可以访问
    cout << "年龄:" << this->age << endl;//正确,调用基类的protected属性,其在派生类是protected的,可以访问
    cout << "编号:" << this->num << endl;//正确,调用派生类的私有属性,可以调用
    cout << "地址:" << this->addr << endl;//正确,调用派生类的私有属性,可以调用
    cout << endl;
}
