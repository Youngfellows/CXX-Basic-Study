#include<iostream>

int main()
{
    //指向数组的指针数组
    double (*pArray[3])[2];//指针数组pArray,pArray的大小是3,存放的元素是double array[2]数组元素的地址
    double aa[2] = {1.11,2.22};//数组aa
    double bb[2] = {3.33,4.44};//数组bb
    double cc[2] = {5.55,6.66};//数组cc

    pArray[0] = &aa;//pArray[0] 保存数组aa的地址
    pArray[1] = &bb;//pArray[1] 保存数组bb的地址
    pArray[2] = &cc;//pArray[2] 保存数组cc的地址

    std::cout << "&aa = " << &aa << " ,pArray[0] = " << pArray[0] << std::endl;
    std::cout << "&bb = " << &bb << " ,pArray[1] = " << pArray[1] << std::endl;
    std::cout << "&cc = " << &cc << " ,pArray[2] = " << pArray[2] << std::endl;

    std::cout << "pArray[0] = " << pArray[0] << std::endl;//数组aa的地址
    std::cout << "*pArray[0] = " << *pArray[0] << std::endl;//数组aa的首元素地址
    std::cout << "&aa = " << &aa << std::endl;//数组aa的地址
    std::cout << "*pArray[0]+1 = " << *pArray[0] + 1 << std::endl;//元素aa[1]的地址
    std::cout << "&aa[1] = " << &aa[1] << std::endl;//元素aa[1]的地址
    std::cout << "*(*pArray[0] + 1) = " << *(*pArray[0] + 1) << std::endl;//元素aa[1]
    std::cout << "aa[1] = " << aa[1] << std::endl;//元素aa[1]


    //输出数组元素
    for(int i = 0; i < 3; i++)
    {
      for(int j = 0;j < 2;j++)
      {
        std::cout << *(*pArray[i] + j) << " ";//打印指针数组元素的值//*(*pArray[ i ]+j) == *(aa+j) == aa[j]
      }
      std::cout << std::endl;
    }

    return 0;
}
