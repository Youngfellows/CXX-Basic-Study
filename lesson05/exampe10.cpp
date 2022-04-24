#include<iostream>

void chooseSort();//选择排序法
void chooseSort2();//选择排序法


int main()
{

    chooseSort();//选择排序法
    chooseSort2();//选择排序法

    return 0;
}

//选择排序法
void chooseSort2()
{
    const int size = 10;
    int array[size] = {33,24,7,9,3,28,41,17,25,29};//数组
    int *p1,*p2;

    for(int i = 0;i < size; i++)
    {
        p1 = &array[i];
        for(int j = i+1;j < size;j++)
        {
            p2 = &array[j];
            if(*p1 > *p2)
            {
              int temp = *p1;
              *p1 = *p2;
              *p2 = temp;
            }
        }
    }

    //打印排序后的数组
    int *p = array;
    for(int i = 0;i < size;i++)
    {
      std::cout << *p << " " ;
      p++;
    }
    std::cout << std::endl;
}


//选择排序法
void chooseSort()
{
    const int size = 10;
    int array[size] = {33,24,7,9,3,28,41,17,25,29};//数组

    for(int i = 0;i < size; i++)
    {
        for(int j = i+1;j < size;j++)
        {
            if(array[i] > array[j])
            {
              int temp = array[i];
              array[i] = array[j];
              array[j] = temp;
            }
        }
    }

    //打印排序后的数组
    int *p = array;
    for(int i = 0;i < size;i++)
    {
      std::cout << *p << " " ;
      p++;
    }
    std::cout << std::endl;
}
