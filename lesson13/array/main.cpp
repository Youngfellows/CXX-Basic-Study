#include<iostream>
#include "Array.h"

int main()
{
    //类模板测试
    Array<int> intArray(5);
    //插入元素
    for(int i = 0; i < 5; i++)
    {
        intArray.put(i,i+1);
    }

    //获取元素
    for(int i = 0; i < 5; i++)
    {
       int element =  intArray.get(i);//获取元素
       std::cout << element << " " ;
    }
    std::cout << std::endl;

    Array<double> doubleArray(5);
    //插入元素
    for(int i = 0; i < 5; i++)
    {
        doubleArray.put(i,(i+1) * 3.1415926);//插入元素
    }

    //获取元素
    for(int i = 0; i < 5; i++)
    {
        double element = doubleArray.get(i);//获取元素
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}