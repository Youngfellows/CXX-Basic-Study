#include<iostream>
#include "MyArea.h"

int main()
{
	double r;//半径
	double width, length;//宽、长

	std::cout << "请输入圆的半径: " << std::endl;
	std::cin >> r;

	std::cout << "圆的面积: " << circleArea(r) << std::endl;


	std::cout << "请输入长、宽: " << std::endl;
	std::cin >> length >> width;
	std::cout << "矩形的面积是: " << rectArea(width,length) << std::endl;

	system("pause");
	return 0;
}