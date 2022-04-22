#include<iostream>

void swap(int *a,int *b);//函数声明
int main()
{
    int a,b;
    int *pa,*pb;
    pa = &a;//pa指向a
    pb = &b;//pb指向b

    std::cout << "请输入变量a: "<< std::endl;
    std::cin >> a;
    std::cout << "请输入变量b: " << std::endl;
    std::cin >> b;


    std::cout << "交换前： &a = " << &a << "\t &b = " << &b << std::endl;
    std::cout << "交换前： pa = " << pa << "\t pb = " << pb << std::endl;
    std::cout << "交换前： a = " << a << "\t b = " << b << std::endl;
    std::cout << "交换前： *pa = " << *pa << "\t *pb = " << *pb << std::endl;

    swap(pa,pb);//交换变量的值

    std::cout << "交换后： &a = " << &a << "\t &b = " << &b << std::endl;
    std::cout << "交换后： pa = " << pa << "\t pb = " << pb << std::endl;
    std::cout << "交换后： a = " << a << "\t b = " << b << std::endl;
    std::cout << "交换后： *pa = " << *pa << "\t *pb = " << *pb << std::endl;

    return 0;
}

/**
 * @brief 函数定义,指针作为函数的参数,传递地址,改变指针所指向的内容的值,指针指向是不改变的
 * 
 * @param a int * 指针变量a,指向一个整数
 * @param b int * 指针变量b,指向一个整数
 */
void swap(int *a,int *b)
{
    int temp;//交换指针所指向对象的值
    temp = *a;
    *a = *b;
    *b = temp;
}
