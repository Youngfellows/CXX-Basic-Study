#include<iostream>

int main()
{
  int *p1 = new int;
  char *p2 = new char;
  double *p3 = new double;
  int *p4 = new int[4];

  std::cout << "p1 = " << p1 << std::endl;
  std::cout << "p2 = " << p2 << std::endl;
  std::cout << "p3 = " << p3 << std::endl;
  std::cout << "p4 = " << p4 << std::endl;

  delete p1;
  delete p2;
  delete p3;
  delete [] p4;

  return 0;
}
