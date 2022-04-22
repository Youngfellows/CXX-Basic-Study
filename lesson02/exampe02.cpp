#include<iostream>
#include<iomanip>

#define SIZE 5

int main()
{
    //输入3个数，并按从小到大的顺序输出
    std::cout << "请输入" << SIZE << "个整数:\n";
    int array[SIZE];//数组
    int *p;//int *指针
    p = array;

    for(int i = 0; i < SIZE; i++)
    {
      std::cin >> array[i];
    }

    //输出数据
    // for(int i=0;i < SIZE;i++)
    // {
    //   std::cout << array[i] << "\t";
    // }

    // for(int i = 0; i < SIZE; i++)
    // {
    //   std::cout << *(p+i) << "\t";
    //   //std::cout << p[i] << "\t";
    // }


    //排序
    // for(int i = 0; i < SIZE - 1; i++)//外层
    // {
    //     for(int j = i+1;j < SIZE;j++)
    //     {
    //         if(array[i] > array[j])
    //         {
    //           int temp = array[i];
    //           array[i] = array[j];
    //           array[j] = temp;
    //         }
    //     }
    // }

    //指针变量&&选择排序
    for(int i =0; i < SIZE -1; i++)
    {
      int *pi = &array[i];
      for(int j = i+1; j<SIZE; j++)
      {
          int *pj = &array[j];
          if (*pi > *pj) {
            int temp;
            temp = *pi;//交换两个指针所指向的变量的值,指针的指向不变
            *pi = *pj;
            *pj = temp;
          }
      }
    }



    std::cout << std::endl << "排序后: " << std::endl;

    for(int i = 0; i < SIZE; i++)
    {
      std::cout << *(p+i) << "\t";
      //std::cout << p[i] << "\t";
    }
    std::cout << std::endl;

    return 0;
}
