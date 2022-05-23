#ifndef STRING_ARRAY_H
#define STRING_ARRAY_H

#include "./Global.h"

//定义StringArray类 - 字符串数组
class StringArray
{
    private:
        string text[SIZE];//字符串数组
        string *pText;//指向字符串数组的指针变量

    public:
        StringArray();//构造函数
        ~StringArray();//析构函数
        string * input();//输入字符串数组
        string * get();//获取字符串数组
        void sort();//排序字符串数组
        void sort(string *text);//排序字符串数组
        void display();//显示字符串数组
        void display(string *text);//显示字符串数组
};

#endif