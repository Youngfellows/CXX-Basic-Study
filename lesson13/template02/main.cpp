#include<iostream>
#include "BoundArray.h"

int main()
{
    BoundArray<double> boundArray(5);//创建模板类实例对象
    //插入元素
    for(int i = 0; i < 5; i++)
    {
        boundArray.putElement(i,(i+1)*87.56);//插入元素
    }

    //获取元素
    for(int i = 0; i < 5; i++)
    {
        double element = boundArray.getElement(i);//获取元素
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}