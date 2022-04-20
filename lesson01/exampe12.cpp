#include<iostream>

int main()
{
    //指针类型转换
    int a = 65;
    int *pi;//int *型指针
    void *pv = &a;//void *型指针

    // std::cout << "pv赋值前: " << pv << std::endl;
    // pv = &a;//pv赋初值
    // std::cout << "pv赋值后: " << pv << std::endl;

    //指针类型转换
    std::cout << "*(int *)pv = " << *(int *)pv << std::endl;
    std::cout << "*(char *)pv = " << *(char *)pv << std::endl;

    pi = (int *)pv;//向int *型指针赋值
    std::cout << "*pi = " << *pi << std::endl;
    std::cout << "a = " << a << std::endl;

    return 0;
}
