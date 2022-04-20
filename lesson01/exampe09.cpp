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
    
    std::cout << "交换前: &a = " << &a << "\t" << "&b = " << &b << std::endl;
    std::cout << "交换前: pa = " << pa << "\t" << "pb = " << pb << std::endl;
    std::cout << "交换前: *pa = " << *pa << "\t" << "*pb = " << *pb << std::endl;
    std::cout << "交换前: a = " << a << "\t" << "b = " << b << std::endl;

    //交换两个变量的值--交换指针所指向的对象的值,指针的指向不变化,只是对象的值变化了
    temp = *pa;
    *pa = *pb;
    *pb = temp;

    std::cout << "交换后: &a = " << &a << "\t" << "&b = " << &b << std::endl;
    std::cout << "交换后: pa = " << pa << "\t" << "pb = " << pb << std::endl;
    std::cout << "交换后: *pa = " << *pa << "\t" << "*pb = " << *pb << std::endl;
    std::cout << "交换后: a = " << a << "\t" << "b = " << b << std::endl;

    return 0;
}
