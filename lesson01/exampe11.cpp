#include<iostream>

int main() {
  //指向指针的指针变量
  int i;
  int *p1;//int *型指针变量p1
  int **p2;//指向指针的指针变量p2

  p1 = &i;//p1指向i
  p2 = &p1;//p2指向p1

  std::cout << "请输入整数i: ";
  std::cin >> i;

  std::cout << "i \t= " << i << std::endl;
  std::cout << "&i \t= " << &i << std::endl;
  std::cout << "p1 \t= " << p1 << std::endl;
  std::cout << "&p1 \t= " << &p1 << std::endl;
  std::cout << "p2 \t= " << p2 << std::endl;
  std::cout << "*p1 \t= " << *p1 << std::endl;
  std::cout << "**p2 \t= " << **p2 << std::endl;
  std::cout << "*(&p1) \t= " << *(&p1) << std::endl;

  return 0;
}
