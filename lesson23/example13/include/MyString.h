#ifndef MYSTRING_H
#define MYSTRING_H

#include "./Global.h"

//定义MyString类 - 字符串处理
class MyString
{
    public:
        MyString();//构造函数
        ~MyString();//析构函数
        int compare(char *s1,char *s2);//比较字符串
};

#endif