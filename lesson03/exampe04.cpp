#include<iostream>

void swap(int &a,int &b);//函数声明,引用参数

int main()
{
    int x = 3,y = 4;
    std::cout << "交换前: x = " << x << " ,y = " << y << std::endl;

    swap(x,y);

    std::cout << "交换后: x = " << x << " ,y = " << y << std::endl;

    return 0;
}

//a是x的别名,b是y的别名
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}