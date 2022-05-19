#ifndef SELECT_SORT_H
#define SELECT_SORT_H

#include "./Global.h"

//定义SelectSort类 - 选择排序
class SelectSort
{
    private:
        int number[MAX_SIZE];//声明一个MAX_SIZE大小的整型数组number
        int *pNum;//int *类型指针变量pNum,是指向字符串number的
        int size;//数组大小

    public:
        SelectSort();//构造函数
        ~SelectSort();//析构函数
        int * input(int size);//输入数组元素
        int * sort(int *pNum);//使用选择排序法排序数组元素,并返回排序后的数组
        int * selectSort(int *pNum);//使用选择排序法排序数组元素,并返回排序后的数组
        void display();//打印数组元素
        void display(int *pNum);//显示数组元素

    private:
        int *input();//输入数组元素
};

#endif