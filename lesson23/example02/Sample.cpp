#include "./include/Sample.h"

//在文件外实现接口函数 - test()函数
void test()
{
    cout << "test:: ~~~~" << endl;
    //创建对象,动态申请内存
    ManageSystem *system = new ManageSystem();
    //使用指针调用类方法
    system->input(STUDENT_COUNT,COURSE_COUNT);
    //system->display();

    //释放内存
    delete system;
}