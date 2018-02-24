#include<iostream>

int main()
{
    //输出成绩所在的分数段
    char grade;
    std::cout << "请输入a-d或者A-D的成绩等级: " << std::endl;

    std::cin >> grade;

    switch (grade) {
      case 'a':
      case 'A':
          std::cout << "85-100\n";
          break;
      case 'b':
      case 'B':
          std::cout << "70-84\n";
          break;
      case 'c':
      case 'C':
          std::cout << "60-69\n";
          break;
      case 'd':
      case 'D':
          std::cout << "60-69\n";
          break;
      default:
          std::cout <<  "输入错误啦\n";
    }
    return 0;
}
