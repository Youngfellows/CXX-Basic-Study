#include<iostream>

//定义一个类
class TDate
{
    private:
            int month;//月
            int day;//日
            int year;//年

    public: 
            TDate()
            {
                std::cout << "TDate构造函数" << std::endl;
            }

            ~TDate()
            {
                 std::cout << "～TDate析构函数" << std::endl;
            }

            void setDate(int m,int d,int y)//设置年月日
            {
                month = m;
                day = d;
                year = y;
            }

            int isLeapYear()//是否是润年
            {
                return ((year % 4 == 0 && year % 100 != 0 )||(year % 400 == 0));//润年
            }

            void printDate()
            {
                std::cout << year << "年" << month << "月" << day << "日" << std::endl;
            };

};

int main()
{
    
    TDate date;//创建对象
    date.setDate(3,23,2018);//设置时间日期
    date.printDate();
    std::cout << "是否是润年: " << date.isLeapYear() << std::endl;

    return 0;
}