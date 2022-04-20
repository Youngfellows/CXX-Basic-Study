#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include "Employee.h"

//计时工
class HourlyWorker : public Employee
{
    private: 
        double wage;//时薪
        double hours;//工时

    public:     
        HourlyWorker(long num,std::string n,double wa, double h);
        virtual ~HourlyWorker();

        void setWage(double w);//设置时薪
        void setHours(double h);//设置工时

        double earnings();//计算计时工月薪 --- 实现抽象方法
        void show();//输出计时工月薪 --- 实现抽象方法 
};
#endif

