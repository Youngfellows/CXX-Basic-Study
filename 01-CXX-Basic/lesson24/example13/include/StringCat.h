#ifndef STRING_CAT_H
#define STRING_CAT_H

#include "./Global.h"

//定义StringCat类 - 字符串拼接
class StringCat
{
    private:
        char s1[SIZE_1];//字符串1
        char s2[SIZE_2];//字符串2
        string str1;//字符串1
        string str2;//字符串2

    public:
        StringCat();//构造函数
        ~StringCat();//析构函数
        void input1();//输入字符串
        void input2();//输入字符串
        char * strcat1();//拼接字符串
        char * strcat2();//拼接字符串
        string strcat3();//拼接子字符
};

#endif