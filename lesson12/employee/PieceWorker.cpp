#include "PieceWorker.h"

//具体实现

//构造函数
PieceWorker::PieceWorker(long num, std::string n,double wp,int qu) : Employee(num,n)//调用父类的构造方法
{
    std::cout << "PieceWorker()有参数构造函数" << std::endl;
    this->quantity = qu;
    this->wagePerPiece = wp;
}

PieceWorker::~PieceWorker()
{
    std::cout << "~PieceWorker()析构函数" << std::endl;
}

//设置工件数
void PieceWorker::setQuantity(int qu)
{
    this->quantity = qu;
}

//设置每件工件的单价
void PieceWorker::setWage(double wp)
{
    this->wagePerPiece = wp;
}

//实现抽象方法
double PieceWorker::earnings()
{
    std::cout << "PieceWorker类的earnings()方法" << std::endl;
    return this->wagePerPiece * this->quantity * 100  * 30;
}

//实现抽象方法
void PieceWorker::show()
{
    std::cout << "PieceWorker类的show()方法" << std::endl;
    std::cout << "编号: " << this->number << " ，姓名: " << this->name << " ,工资: " << earnings() << std::endl;
}