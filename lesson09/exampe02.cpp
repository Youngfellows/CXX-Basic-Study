#include<iostream>

//定义一个类
class TDate
{
    private: 
        int year;//年
        int month;//月
        int day;//日

    public: 
        TDate();//构造函数
        ~TDate();//析构函数
        void setDate(int y,int m,int d);//设置日期
        int isLeapYear();//是否润年
        void printDate();//打印日期
};


//函数定义
TDate::TDate()//构造函数
{
    std::cout << "TDate()构造函数" << std::endl;
}

TDate::~TDate()//析构函数
{
    std::cout << "~TDate()析构函数" << std::endl;
}

void TDate::setDate(int y,int m,int d)//设置日期
{
    year = y;
    month = m;
    day = d;
}

int TDate::isLeapYear()//是否润年
{
   return ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0));//润年 
}

void TDate::printDate()
{
    std::cout << year << "年" << month << "月" << day << "日" << std::endl;
}

int main()
{
    std::cout << "请输入年/月/日" << std::endl;
    std::cout << "年: ";
    int year,month,day;//年月日
    std::cin >> year;//年

    std::cout << "月: ";
    std::cin.get();//消除空格影响
    std::cin >> month ;//月

    std::cout << "日: ";
    std::cin.get();
    std::cin >> day;

    TDate date;//创建对象
    date.setDate(year,month,day);
    std::cout << "是否润年: " << date.isLeapYear() << std::endl;
    date.printDate();

    return 0;
}