#include<iostream>
#include<string>

int main()
{
	//字符串数组
	std::string names[5] = { "张三","李四","王五","赵六","孙七" };
	int size = sizeof(names)/sizeof(names[0]);

	std::cout << "字符数组的大小: " << size  << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << names[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
