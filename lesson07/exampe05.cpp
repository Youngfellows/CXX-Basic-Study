#include<iostream>
#include<string>

int main()
{
	//字符串数组
	std::string names[5] = { "张三","李四","王五","赵六","孙七" };

	std::cout << "字符数组的大小: " << 5 << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << names[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
