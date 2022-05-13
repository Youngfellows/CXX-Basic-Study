#include "./include/Student.h"
#include "./include/Teacher.h"

int main(int arg,char *args[])
{
    //创建stu对象,动态申请内存
    char const *name = "张无忌";
    char const *sex = "男";
    Student *stu = new Student(name,sex,28);
    stu->display();

    //创建teacher对象,学生升级成老师,动态申请内存
    Teacher *teacher = new Teacher(*stu);
    teacher->display();

    //释放内存
    delete stu;
    delete teacher;

    return 0;
}