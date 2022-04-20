#include "Manager.h"

//类的具体实现

//构造函数
Manager::Manager(long num,std::string n,double sa) : Employee(num,n)
{
    std::cout << "Manager()构造函数" << std::endl;
    this->salary = sa;
}

//析构函数
Manager::~Manager()
{
     std::cout << "~Manager()析构函数" << std::endl; 
}

//设置月薪
void Manager::setSalary(double sa)
{
    this->salary = sa;
}

//获取工资
double Manager::earnings()
{
    return this->salary;
}

void Manager::show()
{
    std::cout << "编号:" << this->number << " ，姓名: " << this->name << " ，工资: " << this->salary << std::endl;
}




