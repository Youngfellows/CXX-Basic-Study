#include<iostream>

//冒泡排序法的函数模板 
template <typename ElementType>
ElementType* sortBubble(ElementType *a, int size)
{
    ElementType  temp;
    //排序
    for(int i = 1; i < size; i++)
    {
        for(int j = 0; j < size - i; j++ )
        {
            if(a[j] > a[j + 1])
            {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
            }    
        }
    }

    //打印
    // for(int i = 0; i < size; i++)
    // {
    //     std::cout << a[i] << " ";
    // }
    // std::cout << std::endl;

    return a;//返回排序后的数组
}

int main()
{
    int size = 0;
    int intArr[] = {22,33,44,7,78,6,9,17,24};
    // std::cout << "大小: " << sizeof(intArr)/sizeof(intArr[0]) << std::endl;

   size = sizeof(intArr)/sizeof(intArr[0]);
   int *sortInt =  sortBubble(intArr,size);
   for(int i = 0; i < size; i++)
   {
       std::cout << *sortInt << " ";
       sortInt++;//int * 指针变量指向下一个对象
   }
   std::cout << std::endl;

    char chArr[] = "aispeex.com";
    size = sizeof(chArr)/sizeof(chArr[0]);
    char *sortChar = sortBubble(chArr,size);
    for(int i = 0; i < size; i++)
    {
        std::cout << *sortChar << " ";
        sortChar++;//char * 指针变量指向下一个元素
    }
    std::cout << std::endl;


    double doubleArr[] = {23.4,78.9,69.0,43,7,98.4};
    size = sizeof(doubleArr)/sizeof(doubleArr[0]);
    double *sort = sortBubble(doubleArr,size);//返回一个double * 指针变量
    //std::cout << "*sort = " << *sort << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << *sort << " " ;
        sort++;//double * 指针变量指向下一个对象
    }
    std::cout << std::endl;

    return 0;
}