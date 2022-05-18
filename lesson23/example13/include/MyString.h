#ifndef MYSTRING_H
#define MYSTRING_H

#include "./Global.h"

//定义MyString类 - 字符串处理
class MyString
{
    private:
        char str[SIZE][LEN];//定义一个二维数组

    public:
        MyString();//构造函数
        ~MyString();//析构函数
        int compare(char *s1,char *s2);//比较字符串

        char ** input();//输入二维数组
        char ** get();//获取二维数组,重点: 通过指向指针的指针来实现返回二维数组
        char ** sort();//对二维数组进行排序
        char ** sort(char **s);//对二维数组进行排序
        
        //重点: 输入二维数组,返回指向一维数组的指针来实现,函数的参数是void
        char (*input2())[LEN];
        //重点: 获取二维数组,
        char (*get2())[LEN];
        //重点: 返回一个二维数组,通过指向一维数组的指针来实现.参数也是一个指向一维数组的指针(也是二维数组)
        char (*sort(char (*s)[LEN]))[LEN];
        
        void display();//显示二维数组
        void display(char **s);//显示二维数组
        void display(char (*s)[LEN]);//显示二维数组
};

#endif