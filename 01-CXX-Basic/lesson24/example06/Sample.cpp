#include "./include/Sample.h"

//在文件外实现接口方法
void test()
{
    cout << "test():: ..." << endl;
    int year;
    int month;
    int day;

    cout << "请输入年/月/日" << endl;
    cout << "年:";
    cin >> year;
    cout << "月:";
    cin >> month;
    cout << "日:";
    cin >> day;

    //创建对象,动态申请内存
    YearMonth *yearMonth = new YearMonth(year,month,day);
    //通过指针访问函数
    int *p = yearMonth->getDay();
    yearMonth->display(p);
    int days = yearMonth->days();
    cout << year << "年" << month << "月" << day << "日 是一年中的第" << days << "天" << endl;

    //释放内存
    free(p);
    delete yearMonth;
}