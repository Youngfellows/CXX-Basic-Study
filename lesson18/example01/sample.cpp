#include "./include/Time.h"

int main()
{
    //创建一个对象,动态申请内存
    Time *time = new Time();
    int hour,minute,second;
    cout << "时:" ;
    cin >> hour;
    cout << "分:" ;
    cin >> minute;
    cout << "秒:" ;
    cin >> second;

    //通过指针调用函数
    time->set(hour,minute,second);
    time->display();

    //释放内存
    delete time;
    return 0;
}