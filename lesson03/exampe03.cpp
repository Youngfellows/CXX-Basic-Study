#include<iostream>

//函数声明
void func(int *p);
void func1(const int *p);//指向常量的指针
void func2(int * const p);//指针常量

int main()
{
    //指向常量的指针
    //希望不改变传入的变量的值

    int x = 10;
    int *px = &x;

    //func(px);
    //func1(px);//指向常量的指针
    func2(px);//指针常量

    std::cout << "x = " << x << std::endl;

    return 0;
}

void func(int *p)
{
    int a = 3;
    *p = *p + a;

    p = &a;//p指向a,p从新指向变量a了,不再指向变量x,因此x的值不变化
    *p = a + 89;

    std::cout << "*p = " << *p << std::endl;
    std::cout << "a = " << a << std::endl;
}

//指向常量的指针
void func1(const int *p)
{
    int a = 3;
    //*p = *p + a;

    p = &a;//p指向a
    
    //*p = a + 89;

    std::cout << "*p = " << *p << std::endl;
    std::cout << "a = " << a << std::endl;
}

//指针常量(指针的地址不可变)
void func2(int * const p)
{
    int a = 3;
    *p = *p + a;

    //p = &a;//p指向a
    
    *p = a + 89;

    std::cout << "*p = " << *p << std::endl;
    std::cout << "a = " << a << std::endl;
}


