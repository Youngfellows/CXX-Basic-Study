#include<iostream>

int main()
{
	//判断输入日期的有效性
	//定义枚举常量
	enum MonthsOfYear
	{
		January=1,
		February=2,
		March=3,
		April=4,
		May=5,
		June=6,
        July=7, 
		August=8,
		September=9,
		October=10,
		November=11, 
		December=12 
	};

	int month;//月
	int day;//日
	int year;//年

	int daysInFebruary;//计算二月的天数
	int daysInMonth;//当月天数

	std::cout << "请输入一个日期(月 日 年): " << std::endl;
	std::cin >> month >> day >> year;

	//计算二月的天数
	if((year % 4)==0 && (year % 100) != 0)
	{
		daysInFebruary = 29;//闰年
	}else if((year % 400) == 0)
	{
		daysInFebruary = 29;//闰年
	}else
	{
		daysInFebruary = 28;//平年
	}

	//计算每月天数
	switch(month)
	{
		case January:
		case March:
		case May:
        case July:
		case August:
		case October:
		case December:
			daysInMonth = 31;
			break;
		case April:
		case June:
		case September:
		case November:
			daysInMonth = 30;
			break;
		case February:
			daysInMonth = daysInFebruary;
			break;
		default:
			std::cout << "无效的月份" << month << std::endl;
			return 1;
	}

	//判断输入日期的有效性
	if(day < 1 || day > daysInMonth)
	{
			std::cout << "在" << month << "月份中无用的天数" << day << std::endl;
			return 1;
	}

	//直接输出结果
	std::cout << month << "/" << day << "/" << year << "是一个有效的日期" << std::endl;

	return 0;
}