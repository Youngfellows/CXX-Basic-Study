#include "./include/Student.h"

#define SIZE 5

int main(int arg,char *args[])
{
    //创建一个对象stu
    Student stu(1086,82.5);
    //定义一个指向对象的常指针p,指针对象p的指向不能改变
    Student const *p = &stu;
    p->display();
    
    //修改属性
    p->change(1006,98.0);
    p->display();

    //释放内存
    //delete p;
    return 0;
}
