#include<iostream>
#include "MyArea.h"

int main()
{
	double r;//�뾶
	double width, length;//����

	std::cout << "������Բ�İ뾶: " << std::endl;
	std::cin >> r;

	std::cout << "Բ�����: " << circleArea(r) << std::endl;


	std::cout << "�����볤����: " << std::endl;
	std::cin >> length >> width;
	std::cout << "���ε������: " << rectArea(width,length) << std::endl;

	system("pause");
	return 0;
}