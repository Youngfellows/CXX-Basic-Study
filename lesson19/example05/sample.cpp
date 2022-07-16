#include "./include/Student.h"

#define SIZE 5

int main(int arg,char *args[])
{
    //创建一个对象,动态申请内存
    const Student stu(1002,88.5);//长对象
    //Student *pStu = &stu;

    //长对象调用
    stu.display();

    stu.change(1002,100);
    stu.display();

    //释放内存
    //delete pStu;

    return 0;
}
