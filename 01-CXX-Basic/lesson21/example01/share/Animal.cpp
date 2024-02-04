#include "../include/Animal.h"

//在类外定义函数 - 基类 - 构造函数
Animal::Animal()
{
    cout << "Animal()基类无参数构造函数" << endl;
}

//在类外定义函数 - 基类 - 析构函数
Animal::~Animal()
{
    cout << "~Animal()析构函数" << endl;
}

//在类外定义函数 - 基类 - getValue()函数
void Animal::getValue()
{
    cout << "Animal()基类getValue()" << endl;
    char temp[SIZE] = {'0'};//定义一个字符数组

    cout << "姓名:";
    cin >> temp ;
    strcpy(this->name,temp);
    //cout << "name=" << this->name <<endl;
    
    cout << "性别:";
    cin >> temp ;
    strcpy(this->sex,temp);
    //cout << "name=" << this->name <<endl;

    cout << "年龄:";
    cin >> this->age;
}

//在类外定义函数 - 基类 - display()函数
void Animal::display()
{    
    cout << endl; 
    cout << "Animal()基类display()" << endl;
    cout << "姓名:" << this->name << endl;
    cout << "性别:" << this->sex << endl;
    cout << "年龄:" << this->age << endl;
    cout << endl;
}
