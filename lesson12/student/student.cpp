#include "student.h"

//实现父类的方法
char * student::sname()
{
   return name;
}

int student::sage()
{
   return age; 
}

int student::sheight()
{
   return height;
}

int student::sweight()
{
   return weight;
}

void student::set(const char *n,int a,int h,int w)
{
   int i;
   for (i=0;n[i]!='\0';i++)
   {
      name[i]=n[i];
   }
   name[i]='\0';
   age=a;
   height=h;
   weight=w;
   return;
}

student::student(char *n,int a,int h,int w)
{
   cout <<"Constructing a student with parameter..." <<endl;
   set(n,a,h,w);
}

student::student()
{
   cout <<"Constructing a student without parameter..." <<endl;
}