#include "./include/Sample.h"

//在外部实现接口函数 - test1()函数
void test1()
{
    cout << "test1()" << endl;
    cout << "请你输入年/月/日" << endl;
    int year;
    int month;
    int day;
    cout << "year:" ;
    cin >> year;
    cout << "month:";
    cin >> month;
    cout << "day:" ;
    cin >> day;

    //创建对象,动态申请内存
    MyDate *myDate = new MyDate(year,month,day);
    int days = myDate->getDays();
    cout << year << "年" << month << "月" << day << "日,是一年中的第" << days << "天" << endl;
    cout << endl;

    //释放内存
    delete myDate;
}

//在外部实现接口函数 - test2()函数
void test2()
{
    cout << "test2()" << endl;
    cout << "请你输入年/月/日" << endl;
    int year;
    int month;
    int day;
    cout << "year:" ;
    cin >> year;
    cout << "month:";
    cin >> month;
    cout << "day:" ;
    cin >> day;

    //声明一个结构体变量
    struct Date date;
    date.year = year;
    date.month = month;
    date.day = day;

    //创建对象,动态申请内存
    MyDate *myDate = new MyDate(date);
    int days = myDate->getDays();

    cout << year << "年" << month << "月" << day << "日,是一年中的第" << days << "天" << endl;
    cout << endl;

    //释放内存
    delete myDate;
}

//在外部实现接口函数 - test3()函数
void test3()
{
    cout << "test3()" << endl;
    cout << "请你输入年/月/日" << endl;
    int year;
    int month;
    int day;
    cout << "year:" ;
    cin >> year;
    cout << "month:";
    cin >> month;
    cout << "day:" ;
    cin >> day;

    //声明一个结构体变量
    struct Date date;
    date.year = year;
    date.month = month;
    date.day = day;

    //创建对象
    MyDate myDate(date);
    int days = myDate.getDays();

    cout << year << "年" << month << "月" << day << "日,是一年中的第" << days << "天" << endl;
    cout << endl;

}
