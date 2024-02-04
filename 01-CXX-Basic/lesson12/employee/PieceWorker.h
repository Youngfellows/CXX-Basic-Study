#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include "Employee.h"

//计件工
class PieceWorker : public Employee
{
    private: 
        double wagePerPiece;//每件工件薪金 
        int quantity;//工件数

    public: 
        PieceWorker(long num,std::string n,double wp,int qu);
        virtual ~PieceWorker();

        void setWage(double wp);//设置每件工件薪水
        void setQuantity(int qu);//设置工件数量

        double earnings();//计算计件薪金 --- 实现抽象方法
        void show() ;//输出计件薪金 -- 实现抽象方法
};
#endif

