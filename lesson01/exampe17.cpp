#include<iostream>

void method1();
void method2();

int main()
{
    method1();

    method2();

    return 0;
}

void method2()
{
    double x = 1.2345678;
    void *p = &x;//void * 型指针变量p,p赋初值&x

    std::cout << "sizeof(x) = " << sizeof(x) << std::endl;
    std::cout << "sizeof(p) = " << sizeof(p) << std::endl;
    std::cout << "&x = " << &x << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "int(x) = " << int(x) << std::endl;
    std::cout << "*(int *)p = " << *(int *)p << std::endl;//对指针强类型转换 低位4字节直接解释为int数据

}

void method1()
{
  //类型转换
  float x = 3.14;
  float y = 9.87;

  std::cout << int(x + y) << std::endl;
  std::cout << (char)70 << std::endl;
  std::cout << (double)(2/4) << std::endl;

  int a = 2.519;
  std::cout << a << std::endl;
}
