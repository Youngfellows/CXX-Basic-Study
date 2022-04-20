#include<iostream>

int main()
{
    //输入一个字符数组
    const int SIZE = 10;
    int array[SIZE];//数组

    std::cout << "输入" << SIZE << "个整数\n";

    for(int i = 0; i < SIZE; i++)
    {
        std::cout << "请输入第" << (i+1) << "个数据: ";
        //对输入做校验
        while(!(std::cin >> array[i]))
        {
            std::cin.clear();//清空缓冲区
            std::cin.ignore(1024,'\n');
            std::cout << "请输入一个合法的值: ";
        }

    }

    //求和
    long sum = 0;
    int *p = array;
    for(p = array; p < array + SIZE;  p++)
    {
        sum += *p;
    }
    std::cout << "sum = " << sum << std::endl;

    return 0;
}
