#include<iostream>

int main()
{
    //用new建立动态数组
    const  int size = 10;
    int *pArray = NULL;
    int *p;
    pArray = new int[10];//用new建立动态数组

    if(pArray == NULL)
    {
      std::cout << "内存申请失败!" << std::endl;
    }else
    {
      for(int i = 0;i < size; i++)
      {
        pArray[i] = 100 + i;
      }
    }

    //打印数组元素的值
    for(p = pArray; p < pArray + size; p++)
    {
        std::cout << *p << " ";
    }
    std::cout << std::endl;
    delete [] pArray;

    return 0;
}
