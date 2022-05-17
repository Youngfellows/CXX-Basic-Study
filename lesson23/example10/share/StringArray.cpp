#include "../include/StringArray.h"

//在类外实现函数 - 构造函数
StringArray::StringArray()
{
    cout << "StringArray()构造函数" << endl;
}

//在类外实现函数 - 析构函数
StringArray::~StringArray()
{
    cout << "~StringArray()析构函数" << endl;
}

//在类外实现函数 - input1()函数
void StringArray::input1()
{
    cout << "input1()::" << endl;
    cout << "请输入" << SIZE << "个字符串" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cin >> this->str[i];//输入字符串
    }
}

//在类外实现函数 - input2()函数
void StringArray::input2()
{
    cout << "input2()::" << endl;
}

//在类外实现函数 - display1()函数
void StringArray::display1()
{
    cout << "display1()::" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << this->str[i] << endl;//打印字符串
    }
    cout << endl;
}

//在类外实现函数 - display2()函数
void StringArray::display2(char **s)
{
    cout << "display2()::" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << s[i] << endl;//打印字符串
    }
}

//在类外实现函数 - display2()函数
void StringArray::display3()
{
    cout << "display3()::" << endl;
}

//在类外实现函数 - sort1()函数
void StringArray::sort1()
{
    cout << "sort1()::" << endl;
    int i;
    int j;
    char buf[LEN];//缓冲区
    char *pt = buf;//char *类型指针变量pt指向字符串buf
    for(i = 0; i < SIZE; i++)
    {
        for(j = i; j < SIZE - 1; j++)
        {
            cout << "i=" << i << "," << "j=" << j << ",j+1=" << j+1 << endl;
            if(strcmp(this->str[j],this->str[j + 1]) > 0)
            {
                cout << "i=" << i << "," << "j=" << j << ",大于j+1=" << j+1 << endl; 
                strcpy(pt,this->str[j]);
                strcpy(this->str[j],this->str[j + 1]);
                strcpy(this->str[j + 1],pt);
            }
            cout << "=====================" << endl;
            display1();
        }
    }
}

//在类外实现函数 - sort2()函数
void StringArray::sort2()
{
    cout << "sort2()::" << endl;
}

//在类外实现函数 - sort3()函数
void StringArray::sort3()
{
    cout << "sort3()::" << endl;
}

//在类外实现函数 - getStr()函数
// char (*p)[LEN] StringArray::getStr()//返回字符型二维数组
// {
//     return this->str;
// }

//在类外实现函数 - getStr2()函数
string * StringArray::getStr2()//返回字符串数组地址
{
    return this->str2;
}