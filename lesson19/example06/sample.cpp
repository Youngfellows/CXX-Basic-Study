#include "./include/Student.h"

#define SIZE 5

int main(int arg,char *args[])
{
    Student stu(1001,77.5);//创建一个对象stu
    Student *p = &stu;//创建一个Student类型的指针变量p,p指向对象stu

    //通过指针调用函数
    p->display();
    
    //修改属性
    p->change(1001,99.5);
    p->display();

    //释放内存,不是动态申请内存创建的指针p,不需要释放
    //delete p;
    return 0;
}
