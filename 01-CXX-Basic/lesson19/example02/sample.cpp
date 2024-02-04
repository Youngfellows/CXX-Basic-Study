#include "./include/Date.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    Date *date1 = new Date();
    date1->display();

    Date *date2 = new Date(2023);
    date2->display();

    Date *date3 = new Date(2024,2);
    date3->display();

    Date *date4 = new Date(2025,3,8);
    date4->display();

    //释放内存
    delete date1;
    delete date2;
    delete date3;
    delete date4;

    return 0;
}