#ifndef MY_ARRAY_H
#define MY_ARRAY_H

#include<iostream>

using namespace std;

//定义MyArray类 - 数组
class MyArray
{
    private:
        int *ele;//数组元素
        int max;//最大值
        int size;//数组大小

    public:
        MyArray();//构造函数
        MyArray(int size);//构造函数
        ~MyArray();//析构函数
        void set();//设置数组元素
        void sort();//排序数组元素
        int maxEle();//获取最大值元素
        void display();//显示数组元素
};

#endif