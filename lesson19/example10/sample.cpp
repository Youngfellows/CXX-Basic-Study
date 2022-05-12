 #include "./include/Date.h"
#include "./include/Time.h"

int main(int arg,char *args[])
{
    //创建对象
    Date date(2022,3,14);
    Time time(22,44,23);
    display(date,time);

    //创建对象,动态申请内存
    Date *d1 = new Date(2028,8,8);
    Time *t1 = new Time(18,44,33);
    display(*d1,*t1);

    //释放内存
    delete d1;
    delete t1;

    return 0;
}

//实现Date类、Time的友元普通函数
void display(const Date &date,const Time &time)
{
    cout << "display()友元函数" << endl;
    cout << date.year << "/" << date.month << "/" << date.day \
    << " " << time.hour << ":" << time.minute << ":" << time.second << endl;
}