#include<iostream>

int main()
{
  //将输入的大写字母转换为小写字母
  char ch;
  std::cout << "请输入一个字符: " << std::endl;
  std::cin >> ch;

  if(ch >= 'A' && ch <= 'Z')
  {
    ch += 32;
  }
  std::cout << "转换后的字符: " << ch << std::endl;
  return 0;
}
