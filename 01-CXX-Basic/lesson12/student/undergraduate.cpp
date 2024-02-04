#include "undergraduate.h"

//实现
double Undergraduate::score()
{
   return GPA;
}

void Undergraduate::setGPA(double g)
{
   GPA=g;
   return;
}

bool Undergraduate::isAdult()
{
   return age>=18?true:false;//子类访问父类的保护成员数据
}

