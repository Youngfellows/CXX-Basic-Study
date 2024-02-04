#include "HourlyWorker.h"

//具体实现-小时工

//构造函数
HourlyWorker::HourlyWorker(long num,std::string n,double wa,double h):Employee(num,n)
{
    std::cout << "HourlyWorker()有参数构造函数" << std::endl;
    this->wage = wa;
    this->hours = h;
}

//析构函数
HourlyWorker::~HourlyWorker()
{
    std::cout << "~HourlyWorker()析构函数" << std::endl;
}

//设置工时
void HourlyWorker::setHours(double h)
{
    this->hours = h;
}

//设置每小时工钱
void HourlyWorker::setWage(double wa)
{
    this->wage = wa;
}


//实现父类的抽象方法
double HourlyWorker::earnings()
{
    std::cout <<  "HourlyWorker类的earnings()方法" << std::endl;
    return this->wage * this->hours * 30;
}

void HourlyWorker::show()
{
    std::cout <<  "HourlyWorker类的show()方法" << std::endl;
    std::cout << "编号: " << this->number << " ,姓名: " << this->name << " ,每小时工钱: " << this->wage << " ，上班时间: " 
    << this->hours << " ,工资: " << earnings() << std::endl;
}

