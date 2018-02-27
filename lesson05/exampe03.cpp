#include<iostream>

//函数声明
void arrayAndPoint();//指针与一维数组

int main()
{
    //指针与一维数组
    arrayAndPoint();

    return 0;
}

//函数定义
void arrayAndPoint()
{
      int array[5] = {23,33,43,13,54};//数组
      int *p;//int * 型指针变量p
      p = array;//p指向数组array

      std::cout << "p的地址: " << p << std::endl;
      std::cout << "数组array的地址: " << array << std::endl;

      //访问数组元素1
      for(int i = 0; i < 5; i++)
      {
          std::cout << "地址: p + " << i << " = " <<  p + i << std::endl;
          //std::cout << *(p + i) << " " ;
      }
      for(int i = 0; i < 5; i++)
      {
          //std::cout << "地址: p + " << i << " = " <<  p + i << std::endl;
          std::cout << *(p + i) << " " ;
      }
      std::cout << std::endl;

      //访问数组元素2
      for(p = array; p < array + 5; p++)
      {
          std::cout << "第" << p - array << "个元素的地址: " << p << std::endl;
      }

      for(p = array; p < array + 5; p++)
      {
          std::cout << *p << " ";
      }
      std::cout << std::endl;

      //访问数组元素3(不常用)
      int i;
      for(p = array, i = 0; i < 5; i++)
      {
          std::cout << "第" << i << "个元素的地址: " << &p[i] << std::endl;
      }

      for(p = array, i = 0; i < 5; i++)
      {
          std::cout << p[i] << " ";
      }
      std::cout << std::endl;
}
