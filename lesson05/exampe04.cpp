#include<iostream>

int main()
{
    //指针数组
    //1.指针数组的元素类型是指针
    //2.指针数组的元素存放对象的地址

    int *pArray[3];//定义指针数组pArray,数组元素存放int 型变量的地址
    int a = 33;
    int b = 44;
    int c = 55;

    //指针数组元素赋值
    pArray[0] = &a;
    pArray[1] = &b;
    pArray[2] = &c;

    std::cout << "&a = " << &a << std::endl;
    std::cout << "&b = " << &b << std::endl;
    std::cout << "&c = " << &c << std::endl;

    //打印指针数组的元素
    for(int i = 0;i < 3;i++)
    {
      std::cout << "第" << i << "个元素的值: pArray[" << i << "] = " << pArray[i] << std::endl;
    }

    std::cout << std::endl;

    for(int i = 0; i < 3;i++)
    {
      std::cout << *pArray[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
