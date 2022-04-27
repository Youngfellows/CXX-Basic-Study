#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

//管理人员
class Manager : public Employee
{
    private: 
        double salary;//私有数据，月薪

    public:   
        Manager(long num,std::string n,double sa);
        virtual ~Manager();

        void setSalary(double sa);//设置月薪

        double earnings() ;//虚函数，计算管理人员月薪 --- 实现抽象方法 
        void show();//虚函数，输出管理人员信息 --- 实现抽象方法
};
#endif


