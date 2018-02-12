#include<iostream>

int main()
{
	//变量的地址
	int a = 32;
	const int MAX = 10086;//常量
	
	std::cout << "变量a的值:" <<a << std::endl;
	std::cout << "变量a的地址:" << &a << std::endl;
	std::cout << "变量a的值:" << *(&a) << std::endl;
	std::cout << "变量MAX的地址:" << &MAX << std::endl;
	std::cout << "变量MAX的值:" << *(&MAX) << std::endl;
	std::cout << "变量MAX的值:" << MAX << std::endl;
	
	return 0;
}
