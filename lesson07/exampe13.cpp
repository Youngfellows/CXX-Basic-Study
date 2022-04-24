#include<iostream>

int main()
{
    int number;//输入的数字
    int sum = 0;

    std::cout << "请输入一串数字和任意数目的空格并求和: " << std::endl;
    while(std::cin >> number)
    {
      sum += number;

      while(std::cin.peek() == ' ')
      {
        std::cin.get();
      }

      if(std::cin.peek() == '\n')
      {
          break;
      }
    }

    std::cout << "结果是: " << sum << std::endl;
    return 0;
}
