#include<iostream>
#include "Array.h"

//类模板做为函数模板的参数
//根据索引获取数组元素
template <typename T>
T getElement(const Array<T> &x, int index)
{
    //std::cout << x.get(index) << std::endl;
    return x.get(index);//返回元素值
}

int main()
{
    //一个用 类模板 Array<T> 作参数的函数模板
    Array<double> doubleArray(5);//定义一个数组
    for(int i = 0; i < 5; i++)
    {
        doubleArray.put(i,(i+87));//插入元素
    }

    //获取元素
    for(int i = 0; i < 5; i++)
    {
        double element = doubleArray.get(i);//获取元素
        std::cout << element << " ";
    }
    std::cout << std::endl;

    double element = getElement(doubleArray,3);
    std::cout << "element = " << element << std::endl;

    return 0;
}

