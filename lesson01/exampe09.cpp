#include<iostream>

int main()
{
    //交换两个变量的值
    int a,b,temp;
    int *pa,*pb;//int *型指针变量 pa,pb,p
    pa = &a;//pa指向a
    pb = &b;//pb指向b

    std::cout << "请输入变量a:" << std::endl;
    std::cin >> a;

    std::cout << "请输入变量b:" << std::endl;
    std::cin >> b;

    std::cout << "交换前: pa = " << pa << "\t" << "pb = " << pb << std::endl;
    std::cout << "交换前: a = " << *pa << "\t" << "b = " << *pb << std::endl;

    //交换两个变量的值--交换指针所指向的对象的值
    temp = *pa;
    *pa = *pb;
    *pb = temp;

    std::cout << "交换后: pa = " << pa << "\t" << "pb = " << pb << std::endl;
    std::cout << "交换后: a = " << *pa << "\t" << "b = " << *pb << std::endl;

    return 0;
}
