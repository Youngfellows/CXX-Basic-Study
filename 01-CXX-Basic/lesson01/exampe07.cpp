#include<iostream>

//函数声明
int add(int *pa,int *pb);

int main()
{
	int a,b,sum;
	int *pa,*pb;//int *指针变量pa,pb
	pa = &a;//pa指向a
	pb = &b;//pb指向b

	std::cout << "请输入一个整数a: " << std::endl;
	std::cin >> a;

	std::cout << "请输入一个整数b: "<< std::endl;\
	std::cin >> b;

	sum = add(pa,pb);

	std::cout << "sum = " << sum << std::endl;

	return 0;
}

/**
 * @brief 函数定义
 * 
 * @param pa 指针变量做函数的参数,即变量a的地址
 * @param pb 指针变量做函数的参数,即变量b的地址
 * @return int 
 */
int add(int *pa,int *pb)
{
	return *pa + *pb;
}


