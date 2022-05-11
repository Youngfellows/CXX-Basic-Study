 #include "./include/Date.h"
#include "./include/Time.h"

int main(int arg,char *args[])
{
    //创建对象
    Date date(2022,3,14);
    Time time(22,44,23);
    display(date,time);

    //创建对象,动态申请内存

    return 0;
}

//实现Date类、Time的友元普通函数
void display(const Date &date,const Time &time)
{
    cout << "display()友元函数" << endl;
    cout << date.year << "/" << date.month << "/" << date.day \
    << " " << time.hour << ":" << time.minute << ":" << time.second << endl;
}