#include<iostream>
#include "Manager.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"

/**
*       1.编译
            g++ -c Employee.cpp 
            g++ -c Manager.cpp 
            g++ -c HourlyWorker.cpp 
            g++ -c PieceWorker.cpp 
            c++ -c main.cpp

        2.链接
            g++ main.o Employee.o Manager.o HourlyWorker.o PieceWorker.o -o exec

        3.运行
            ./exec 
 */

int main()
{

    Employee *employee;//基类的指针变量
    double salary;//工资

    Manager *manager = new Manager(100,"黄大仙",0.0);//实例化一个子类的指针变量,manager指向对象管理员

    employee = manager;//基类的指针变量指向子类对象
    manager->setSalary(12800);//通过指针操作对象
    salary = employee->earnings();//通过基类对象的指针来调用子类的方法
    std::cout << "管理人的工资: " << salary << std::endl;
    employee->show();//通过基类对象的指针来调用子类的方法

    HourlyWorker *hourlyWorker = new HourlyWorker(101,"小莉莉",0,0);//实例化一个子类的指针变量,hourlyWorker指向对象小时工
    employee = hourlyWorker;//基类指针变量指向子类对象
    hourlyWorker->setHours(8);
    hourlyWorker->setWage(99);
    salary = employee->earnings();
    std::cout << "小时工工资: " << salary << std::endl;
    employee->show();

    PieceWorker *pieceWorker = new PieceWorker(102,"小龙女",0.0,0);//实例化一个子类的指针变量,pieceWorker指向对象计件工
    employee = pieceWorker;
    pieceWorker->setQuantity(70);
    pieceWorker->setWage(108);
    salary = employee->earnings();
    std::cout << "计件工的工资: " << salary << std::endl;
    employee->show();

    return 0;
}