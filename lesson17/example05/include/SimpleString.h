#ifndef SIMPLE_STRING_H
#define SIMPLE_STRING

#include<iostream>
#include<cstring>

using namespace std;

//定义SimpleString类 - 基类 - 字符串
class SimpleString
{
    //公共属性
    private:
        int length = 0;//字符长度
        char *content;//字符内容

    public:
        SimpleString();//构造函数
        SimpleString(char *content);//构造函数
        ~SimpleString();//析构函数
        int getLength();//获取字符串长度
        char *getContent();//获取字符串
        int setContent(char *content);//设置字符串
        void print();//打印字符串
};

#endif