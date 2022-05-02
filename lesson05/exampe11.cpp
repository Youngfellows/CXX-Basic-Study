#include<iostream>

void maopaoSort();//冒泡排序法

int main()
{
    //冒泡排序法
    //两两相比
    maopaoSort();

    return 0;
}

//冒泡排序法
void maopaoSort()
{
    const int size = 10;
    int array[size] = {33,24,7,9,3,28,41,17,25,29};//数组


    for(int i = 0;i < size;i++)//外层是趟
    {
        for(int j = 0; j < size - i; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }



    for(int *p = array; p < array + size; p++)
    {
        std::cout << *p << " ";
    }
    std::cout << std::endl;
}
