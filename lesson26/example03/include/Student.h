#ifndef STUDENT_H
#define STUDENT_H

#include "./Global.h"

//学生信息结构体
typedef struct student
{
   int id;
   string name;

   //重载 < 运算符
   bool operator < (student const &stu) const
   {
       //这个函数指定排序策略，按id排序，如果id相等的话，按name排序
       if(id < stu.id)
       {
           return true;
       }else if(id == stu.id)
       {
           return name.compare(stu.name) < 0;
       }
       return false;
   }

} Student,*PStudent;

#endif