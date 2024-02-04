#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class student//学生类作为父类
{
   public:
        student(char *n,int a,int h,int w);//带参数的构造函数
        student();//不带参数的构造函数
        
        void set( const char *n,int a,int h,int w);//设置
        char * sname();
        int sage();
        int sheight();
        int sweight();
        
    protected:
        char name[10];//姓名
        int age;//年龄
        int height;//身高
        int weight;//体重
    
    private:
        int test;
};

#endif

