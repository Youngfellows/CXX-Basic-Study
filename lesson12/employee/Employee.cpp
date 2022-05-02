#include "Employee.h"

//父类构造函数
Employee::Employee(long num, std::string n)
{
    std::cout << "Employee()有参构造函数" << std::endl;
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
    std::cout << "Employee 类的 getNumber()" << std::endl;
    return this->number;
}

//获取姓名
std::string Employee::getName()
{   
    std::cout << "Employee 类的 getName()" << std::endl;
    return this->name;
}