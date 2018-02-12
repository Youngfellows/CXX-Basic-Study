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


    std::cout << "交换前： a = " << a << "\t b = " << b << std::endl;

    swap(pa,pb);//交换变量的值

    std::cout << "交换后： a = " << a << "\t b = " << b << std::endl;

    return 0;
}

//函数定义
void swap(int *a,int *b)
{
    int temp;//交换指针所指向对象的值
    temp = *a;
    *a = *b;
    *b = temp;
}
