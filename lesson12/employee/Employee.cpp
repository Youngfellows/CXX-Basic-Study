#include "Employee.h"

//父类构造函数
Employee::Employee(long num, std::string n)
{
    this->number = num;//编号
    this->name = n;//姓名
}

//父类析构函数
Employee::~Employee()
{
    std::cout << "~Employee()析构函数" << std::endl;
}

//获取编号
long Employee::getNumber()
{
    return this->number;
}

//获取姓名
std::string Employee::getName()
{
    return this->name;
}