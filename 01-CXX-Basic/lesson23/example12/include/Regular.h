#ifndef REGULAR_H
#define REGULAR_H

#include "./Global.h"

//定义Regular类 - 正则表达式处理
class Regular
{
    private:
        char *str = NULL;//字符串
        int *number = NULL;//数字数组
        int size = 0;//数组元素个数
    
    public:
        Regular();//构造函数
        ~Regular();//析构函数
        char * input();//输入字符串
        char * get();//获取输入的字符串
        int * calc(char *);//统计数字数组
        void display(char *);//显示数字数组
};

#endif