#include<iostream>

int main()
{
    // 指向数组的指针数组
    int array[3] = {33,24,38};
    int *pArray[3];//定义指针数组pArray,指针数组的元素是int型

    for(int i = 0;i < 3;i++)
    {
      pArray[i] = &array[i];//指针数组元素保存数组array的元素的地址
    }

    //打印数组元素
    for(int i = 0;i < 3;i++)
    {
      std::cout << *pArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
