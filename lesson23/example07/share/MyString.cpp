#include "../include/MyString.h"

//在类外实现函数 - 构造函数
MyString::MyString()
{
    cout << "MyString()无参数构造函数" << endl;
}

//在类外实现函数 - 构造函数
MyString::MyString(char s[LEN])
{
    cout << "MyString()有参数构造函数" << endl;
    strcpy(this->str,s);
}

//在类外实现函数 - 析构函数
MyString::~MyString()
{
    cout << "~MyString()析构函数" << endl;
}

//在类外实现函数 - get()函数
char * MyString::get()
{
    //cout << "get():: str=" << this->str << endl;
    return this->str;
}

//在类外实现函数 - set()函数
void MyString::set(char s[LEN])
{
    //cout << "set() ..." << endl;
    strcpy(this->str,s);
    //cout << "set():: str=" << this->str << endl;
}

//在类外实现函数 - length()函数
int MyString::length()
{
    //cout << "length():: str=" << this->str << endl;
    int len = 0;
    char *p = this->str;//char *p型指针变量p,p指向字符串(字符数组str)
    while (*p != '\0')//字符串结束标准
    {
       len++;
       p++;//移动指针指向
    }
    return len;
}

//在类外实现函数 - copy()函数
char * MyString::copy(char *p2,int start)
{
    //动态申请内存
    if (start > this->length())
    {
        char buf[100];//缓冲区
        char err[100] = "拷贝的位置%d已经超过字符串长度%d了";
        sprintf(buf,err,start,this->length());
        cout << buf << endl;
        throw buf;
    }
    cout << "copy():: start:" << start << endl;

    char *p = this->str;//char *p型指针变量p,p指向字符串(字符数组str)
    cout << "copy:: 1,p=" << p << endl;
    int i = 0;//索引
    while (i < start - 1)
    {
        i++;
        p++;//移动指针
        //cout << "i=" << i << ",p=" << p << endl;
    }
    cout << "copy:: 2,p=" << p << endl;

    //从start开始拷贝
    int j = 0;
    while(*p != '\0')
    {
        p2[j] = *p;
        j++;
        p++;
    }
    p2[j] = '\0';
    cout << "copy:: 3,p2=" << p2 << endl;
    return p2;
}

//在类外实现函数 - calc()函数 - 通过函数指针来回调
void MyString::calc(CALCULATE_1 calc,char *str,int &upper,int &lower,int &digit,int &space,int &other)
{
    (*calc)(str,upper,lower,digit,space,other);
}

//在类外实现函数 - calc2()函数 - 通过函数指针来回调
void MyString::calc2(CALCULATE_2 calc,char *str,int *upper,int *lower,int *digit,int *space,int *other)
{
    (*calc)(str,upper,lower,digit,space,other);
}

