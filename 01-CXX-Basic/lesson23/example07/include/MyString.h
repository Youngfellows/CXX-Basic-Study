#ifndef MY_STRING_H
#define MY_STRING_H

#include "./Global.h"

//定义MyString类 - 字符串处理
class MyString
{
    private:
        char str[LEN];//字符数组,保存字符串

    public:
        MyString();//构造函数
        MyString(char s[LEN]);//构造函数
        ~MyString();//析构函数
        char * get();//获取字符串
        void set(char s[LEN]);//设置字符串
        int length();//获取字符串长度
        char * copy(char *dest,int start);//从第几个字符开始拷贝字符串
        void calc(CALCULATE_1 calc,char *str,int &upper,int &lower,int &digit,int &space,int &other);//通过函数指针来回调
        void calc2(CALCULATE_2 calc,char *str,int *upper,int *lower,int *digit,int *space,int *other);//通过函数指针来回调
};

#endif