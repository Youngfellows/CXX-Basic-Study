#include<iostream>

int main()
{
	//输入圆的半径，求圆的周长和面积
	const double PI = 3.1415926;//圆周率
	double r;//半径
	double girth;//周长
	double area;//面积
	
	std::cout << "请输入圆的半径:\n";
	std::cin >>r;//输入半径

	girth = 2 * PI * r; //周长
	area = PI * r * r;//面积

	std::cout << "圆的半径:" << r << std::endl;
	std::cout << "圆的周长是: " << girth << "\n";
	std::cout << "圆的面积是: " << area << std::endl;
	
	return 0;
}
