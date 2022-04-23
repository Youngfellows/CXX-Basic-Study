#include<iostream>

//指针参数
void swap(int *,int *);//函数声明

int main()
{
    int a,b;
    int *pa,*pb;
    pa = &a;
    pb = &b;
    std::cout << "请输入两个数a/b: " << std::endl;
    std::cin >> a >> b;

    std::cout << "改变前: &a = " << &a << " ,&b = " << &b << std::endl;
    std::cout << "改变前: pa = " << pa << " ,pb = " << pb << std::endl;
    std::cout << "改变前: a = " << a << " ,b = " << b << std::endl;
    std::cout << "改变前: *pa = " << *pa << " ,*pb = " << *pb << std::endl;
    //swap(&a,&b);
    swap(pa,pb);
    std::cout << "改变后: &a = " << &a << " ,&b = " << &b << std::endl;
    std::cout << "改变后: pa = " << pa << " ,pb = " << pb << std::endl;
    std::cout << "改变后: a = " << a << " ,b = " << b << std::endl;
    std::cout << "改变后: *pa = " << *pa << " ,*pb = " << *pb << std::endl;

    return 0;
}

//函数定义
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}