#include<iostream>

void method(int * const pArray, int size);//函数声明

int main()
{
    const int size = 10;
    int *array = NULL;
    array = new int[size];

    method(array,size);

    //打印数组
    for(int i = 0;i < size; i++ )
    {
      std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete [] array;
    return 0;
}

//函数定义
//常指针作为函数的参数
void method(int * const pArray,int size)
{
    // pArray = &size;//指针的值不允许被改变
    for(int i = 0;i < size; i++)
    {
      pArray[i] = 100 + i;
    }
}
