#include<iostream>

int main()
{
    // 指向数组的指针数组
    int array[3] = {33,24,38};
    int *pArray[3];//定义指针数组pArray,指针数组的元素是int *型,也就是每一个元素存储的都是int型变量的地址

    for(int i = 0;i < 3;i++)
    {
      pArray[i] = &array[i];//指针数组元素保存数组array的元素的地址
    }

    //打印数组元素
    for(int i = 0;i < 3;i++)
    {
      std::cout << *pArray[i] << " ";//通过指针数组元素来访问数组元素的值
    }
    std::cout << std::endl;

    return 0;
}
