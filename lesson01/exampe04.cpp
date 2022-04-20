#include<iostream>

//枚举
enum Colour
{
	RED,
	YELLOW,
	BLUE,
	WHITE,
	BLACK
};

int main()
{
	//定义枚举类
	Colour c;
	c = RED;
	std::cout << "RED: " << c << std::endl;	
	
	c = BLUE;
	std::cout << "BLUE: " << c << std::endl;	

	c = WHITE;
	std::cout << "WHITE: " << c << std::endl;	
	
	return 0;
}
