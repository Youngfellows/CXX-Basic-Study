#include<iostream>

//函数声明
void testArrayOne();//以下标方式访问数组
void testArrayTwo();//以指针方式访问数组

int main()
{
    //以下标方式访问数组
    testArrayOne();

    //以指针方式访问数组
    testArrayTwo();

    return 0;
}

//函数定义
//以下标方式访问数组
void testArrayOne()
{
    int array[10];
    int sum = 0;
    for(int i=0; i < 10; i++)
    {
      array[i] = i;//为数组元素赋值
    }

    for(int i=0;i < 10; i++)
    {
      std::cout << array[i] << " ";
      sum = sum + array[i];//读取数组元素
    }

    std::cout << "sum = " << sum << std::endl;
}


//以指针方式访问数组
void testArrayTwo()
{
    int array[5] = {33,44,22,11,55};//数组

    //打印数组元素的地址
    std::cout << "数组元素的首地址: array = " << array << std::endl;

    //打印各个元素的地址
    for(int i = 0; i < sizeof(array)/sizeof(int);i++)
    {
        std::cout << "第"<< i <<"个元素的地址是 &array[" << i << "] = " << &array[i] << std::endl;
    }

    std::cout << std::endl;

    for(int i = 0; i < sizeof(array)/sizeof(int);i++)
    {
        std::cout << "第"<< i <<"个元素的地址是 &array[" << i << "] = " << array + i << std::endl;
    }

    //下标方式访问元素
    std::cout << "数组元素是: ";
    for(int i = 0;i < sizeof(array)/sizeof(int);i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

     //指针方式访问元素
    std::cout << "数组元素是: ";
    for(int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
      std::cout << *(array + i) << " ";
    }
    std::cout << std::endl;

}
