#include "../include/MyString.h"

//在类外实现函数 - 构造函数
MyString::MyString()
{
    cout << "MyString()构造函数" << endl;
}

//在类外实现函数 - 析构函数
MyString::~MyString()
{
    cout << "~MyString()析构函数" << endl;
}

//在类外实现函数 - compare()函数
int MyString::compare(char *s1,char *s2)
{
    cout << "compare() ..." << endl;
    int i = 0;
    while (*(s1 + i) == *(s2 + i))
    {
       if (*(s1 + i) == '\0')
       {
           return 0;//全部字符相同返回0
       }
       i++; 
    }
    //字符不同时返回第一个不同字符的ASCII码差值
    return (*(s1 + i) - *(s2 + i));
}

