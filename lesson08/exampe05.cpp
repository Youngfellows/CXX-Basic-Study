#include<iostream>
#include<iomanip>

struct Person
{
    char name[30];//姓名
    unsigned int id;//编号
    double salary;//新资
};

int main()
{
    const int SIZE = 2;
    struct Person persons[SIZE];  //结构体数组

    for(int i = 0; i < SIZE; i++)
    {
      std::cout << "输入第" << i + 1 << "个数据\n";

      std::cout << "请输入姓名: ";
      std::cin.get(persons[i].name,30);//输入姓名

      std::cin.get();//消除回车影响

      std::cout << "请输入编号: ";
      while(!(std::cin >> persons[i].id))
      {
        std::cin.clear();//清空缓冲区
        std::cin.ignore(1024,'\n');
        std::cout << "请输入一个合法的id值: ";
      }

      std::cin.get();//消除回车影响

      std::cout << "请输入薪资: ";
      while(!(std::cin >> persons[i].salary))
      {
        std::cin.clear();//清空缓冲区
        std::cin.ignore(1024,'\n');
        std::cout << "请输入一个合法的salary值: ";
      }

      std::cin.get();//消除回车影响
    }

    //使用冒泡排序发排序输出
    struct Person ptemp;//临时变量
    for(int i = 0; i < SIZE; i++)
    {
      for(int j = 0; j < SIZE - i; j++)
      {
          if(persons[j].salary > persons[j+1].salary)
          {
            ptemp = persons[j];
            persons[j] = persons[j+1];
            persons[j+1] = ptemp;
          }
      }
    }

    //打印结构体数组
    std::cout << std::left << std::setw(20) << "姓名" << " " << std::left << std::setw(20) << "编号" << " " << std::left << std::setw(20) << "薪水" << std::endl;
    for(int i = 0;i < SIZE; i++)
    {
      std::cout << std::left << std::setw(20) << persons[i].name << " " << std::left << std::setw(20) << persons[i].id << " " << std::left << std::setw(20) << persons[i].salary << std::endl;
    }

    return 0;
}
