#include<iostream>
#include "func.h"

int main()
{
	std::cout << "请输入圆的半径or边长: r = ";
	double r;//半径
	double l;//边长

	ft *pfun[4];//定义指向函数的指针数组pfun

	pfun[0] = squareGirth;//pfun[0]保存函数squareGirth的地址
	pfun[1] = squareArea;//pfun[1]保存函数squareArea的地址
	pfun[2] = roundGirth;//pfun[2]保存函数roundGirth的地址
	pfun[3] = roundArea;//pfun[3]保存函数roundArea的地址

	std::cin >> r;
	for (int i=0; i < 4;i++)
	{
		std::cout << (*pfun[i])(r) << std::endl;
	}

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << (pfun[i])(r) << std::endl;
	}
	system("pause");
	return 0;
}