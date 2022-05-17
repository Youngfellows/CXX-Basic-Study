#ifndef STRING_ARRAY_H
#define STRING_ARRAY_H

#include "./Global.h"

//定义StringArray类 - 字符串数组
class StringArray
{
    private:
        char str[SIZE][LEN];//使用字符型二维数组保存字符串数组
        string str2[SIZE];//字符串数组
    
    public:
        StringArray();//构造函数
        ~StringArray();//析构函数
        void input1();//输入字符串数组
        void input2();//输入字符串数组
        void display1();//显示字符串数组
        void display2(char s[SIZE][LEN]);//显示字符串数
        void display3(char **s);//显示字符串数组
        void display4(char **s);//显示字符串数组
        void sort1();//排序字符串数组
        void sort2(char s[SIZE][LEN]);//排序字符串数组
        void sort3(char **s);//排序字符串数组

        string *getStr2();//返回字符串数组地址

        //重点: 返回一个二维数组
        char **getStr();
};

#endif