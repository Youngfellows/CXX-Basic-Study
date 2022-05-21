#ifndef STRING_ARRAY_H
#define STRING_ARRAY_H

#include "./Global.h"

//定义StringArray类 - 字符串数组
class StringArray
{
    private:
        char text[SIZE][LEN];//定义一个字符串数组,也就是一个二维数组
        char **pText;//指向字符串数组的指针变量
        char *pAText[SIZE];//指针数组
        char (*pBText)[LEN];//指向一维数组的的指针变量

    public:
        StringArray();//构造函数
        ~StringArray();//析构函数
        char ** input();//输入二维字符数组
        char ** get();//获取二维字符串数组,返回指向指针的指针
        char (*get(char **text))[LEN];//获取二维字符串数组,返回指向一维数组的指针变量
        char (*get2())[LEN];//获取二维字符串数组,返回指向一维数组的指针变量
        void display();//打印二维字符串数组
        void display(char **text);//打印二维字符串数组,参数是指向指针的指针
        void display(char (*text)[LEN]);//打印二维字符串数组,参数是指向一维数组(一维数组的长度是LEN)的指针
};

#endif