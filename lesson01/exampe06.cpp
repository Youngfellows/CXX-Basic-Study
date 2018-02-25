#include<iostream>
int main()
{
	//指针变量
	int a = 3;
	int b = 24;
	int sum = 0;
	int *p1;
	int *p2;

	p1 = &a;
	p2 = &b;

	sum = *p1 + *p2;
	std::cout << "sum = " << sum << std::endl;

	return 0;
}
