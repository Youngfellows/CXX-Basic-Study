#ifndef Undergraduate_H
#define Undergraduate_H

#include "student.h"

class Undergraduate:public student//本科生类作为子类，继承了学生类
{
   public:
        double score();
        void setGPA(double g);//设置绩点
        bool isAdult();//判断是否成年
   
   protected:
        double GPA;//本科生绩点
};
#endif