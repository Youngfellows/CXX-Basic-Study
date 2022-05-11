 #include "./include/Date.h"
#include "./include/Time.h"

int main(int arg,char *args[])
{
    //创建对象
    Date date(2022,3,14);
    Time time(22,44,23);
    time.display(date);

    //创建对象,动态申请内存
    Date *d1 = new Date(2028,8,8);
    Time *t1 = new Time(18,44,33);
    t1->display(*d1);

    //释放内存
    delete d1;
    delete t1;

    return 0;
}
