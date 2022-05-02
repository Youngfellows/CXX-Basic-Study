#include<iostream>

int main()
{
    //数组测试
    int array[5] = {1,3,5,7,9};//数组

    //打印数组
    for(int i = 0;i < 5; i++)
    {
        std::cout << array[i] << " ";
    };
    std::cout << std::endl;

    static int array1[3] = {1,2,3};
    for(int i = 0;i < 3;i++)
    {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    int array2[7] = {1,2,3,4,5,6,7};
    int size = sizeof(array2)/sizeof(int);//数组大小
    std::cout << "数组大小: size = " << size << std::endl;
    for(int i = 0;i < size;i++)
    {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
