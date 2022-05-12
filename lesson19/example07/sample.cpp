#include "./include/Student.h"

#define SIZE 5

int main(int arg,char *args[])
{
    //创建一个对象stu
    Student stu(1001,77.5);
    //创建一个const对象的指针变量p,p指向对象stu,其指向的对象的值是不能通过指针改变的
    const  Student *p = &stu;

    //通过指针调用函数
    p->display();
    
    //修改属性
    stu.change(1001,99.5);//通过对象名.调用
    p->display();

    //修改属性
    p->change2(1001,88.5);//通过指针修改对象属性
    p->display();

    //释放内存,不是动态申请内存创建的指针p,不需要释放
    //delete p;
    return 0;
}
