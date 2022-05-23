#ifndef MY_NUMERIC_H
#define MY_NUMERIC_H

#include "./Global.h"

class MyNumeric
{
    private:
        long long int number;
        char buff[LEN];//保存数字字符的字符数组
        int size;//数字长度
        char *p;//指向字符数组的指针变量
        //int index = 0;//索引

    public:
        MyNumeric();//构造函数
        ~MyNumeric();//析构函数
        char * get();//获取数字字符数组
        int getSize();//获取字符数组长度
    private:
        void convert(long long int num);//转换字符
};

#endif