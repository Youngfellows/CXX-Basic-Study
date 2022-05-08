#include<iostream>

using namespace std;

//定义日期类
class CDate
{
    //定义公有属性
    private:
        int year;//年
        int month;//月
        int day;//日

    public:
        //定义构造函数
        CDate()
        {
            cout << "CDate()无参数构造函数~" << endl;
        }

        CDate(int y,int m,int d)
        {
            cout << "CDate()有参数构造函数~" << endl;
            this->year = y;
            this->month = m;
            this->day = d;
        }

        //定义析构函数
        ~CDate()
        {
            cout << "~CDate()析构函数~" << endl;
        }

        //定义公有方法 - 设置日期
        void setDate(int y,int m,int d)
        {
            cout << "setDate:: ~~~" << endl;
            this->year = y;
            this->month = m;
            this->day = d;
        }
        
        //定义公有方法 - 显示日期
        void showDate()
        {
            cout << endl;
            cout << this->year << "年" << this->month << "月" << this->day << "日" << endl;
            cout << endl;
        }

};

int main(int arg,char *args[])
{
    /**
     *编译:
     *    g++ -c -o sample02.o sample02.cpp
     *    g++ -o sample02 sample0.o
     */


    //定义CDate对象 birthday
    CDate xiaomingBirthday;//调用无参数构造函数
    CDate myBirthday(2022,3,18);//调用有参数构造函数

    //调用对象方法
    xiaomingBirthday.setDate(1999,4,4);
    xiaomingBirthday.showDate();
    myBirthday.showDate();

    //定义Cdate类型的指针变量pDate
    CDate *pDate;
    pDate = &xiaomingBirthday;//指针变量pDate指向对象xiaomingBirthday
    pDate->setDate(1999,4,22);//通过指针修改变量属性
    pDate->showDate();

    pDate = &myBirthday;//指针变量pDate指向对象myBirthday
    pDate->setDate(2021,6,16);//通过指针修改变量属性
    pDate->showDate();

    return 0;
}