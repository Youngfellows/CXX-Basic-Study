#ifndef SORT_H
#define SORT_H

#include "./Global.h"

//定义Sort类 - 排序数组
class Sort
{
    private:
        int ele[SIZE];//数组
        int size;//实际数组大小
    
    public:
        Sort();//构造函数
        ~Sort();//析构函数
        int ** input(int number);//输入一维数组元素
        int ** get();//获取一维数组元素
        int ** sort(int ** e);//排序一维数组
        void display(int ** e);//打印一维数组
};

#endif