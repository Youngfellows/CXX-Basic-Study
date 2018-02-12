#include<iostream>

int main()
{
    //引用测试
    int a;
    int *pa;//int *型指针变量pa
    int &ra = a;// ra是a的别名
    pa = &a;//pa指向a

    std::cout << "请输入变量a: ";
    std::cin >> a;

    std::cout << "a = " << a << "\t ra = " << ra << "\t *pa = " << *pa << std::endl;
    std::cout << "&a = " << &a << " \t &ra = " << &ra << "\t pa = " << pa << std::endl;
    std::cout << "指针比变量pa的地址: &pa = " << &pa << std::endl;

    return 0;
}
