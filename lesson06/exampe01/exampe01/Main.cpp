#include<iostream>
#include "func.h"

int main()
{
	std::cout << "������Բ�İ뾶or�߳�: r = ";
	double r;//�뾶
	double l;//�߳�

	ft *pfun[4];//����ָ������ָ������pfun

	pfun[0] = squareGirth;//pfun[0]���溯��squareGirth�ĵ�ַ
	pfun[1] = squareArea;//pfun[1]���溯��squareArea�ĵ�ַ
	pfun[2] = roundGirth;//pfun[2]���溯��roundGirth�ĵ�ַ
	pfun[3] = roundArea;//pfun[3]���溯��roundArea�ĵ�ַ

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