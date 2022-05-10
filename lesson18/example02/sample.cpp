#include "./include/Student.h"

int main(int arg,char *args[])
{
    //创建一个对象,动态申请内存
    Student *student = new Student("张三丰",88);

    //通过指针调用函数的方法
    student->display();

    delete student;
    return 0;
}