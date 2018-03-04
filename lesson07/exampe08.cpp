#include<iostream>

void input_str_test();//不带空格的字符串输入


int main()
{
  input_str_test();
  return 0;
}

void input_str_test()
{
  //字符串输入
  std::string str;
  std::cout << "请输入一个字符串: " << std::endl;
  std::cin >> str ;//不带空格的字符串输入
  std::cout << str << std::endl;
}
