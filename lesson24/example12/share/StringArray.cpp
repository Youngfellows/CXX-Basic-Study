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

//在类外实现函数 -input()函数
string * StringArray::input()
{
    cout << "input()::  ... " << endl;
    cout << "请输入" << SIZE << "个字符串" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        //cin >> text[i];//输入字符串
        cin >> *(text + i);//输入字符串
    }
    return this->text;
}

//在类外实现函数 - get()函数
string *StringArray::get()
{
    cout << "get()::  ... " << endl;
    this->pText = this->text;
    return this->pText;
}

//在类外实现函数 - sort()函数
void StringArray::sort()
{
    cout << "sort()::  ... " << endl;
    string temp;
    for(int i = 0; i < SIZE - 1; i++)
    {
        for(int j = i; j < SIZE; j++)
        {
            // if(text[i] > text[j])
            // {
            //     temp = text[i];
            //     text[i] = text[j];
            //     text[j] = temp;
            // }

            if(*(text + i) > *(text + j))
            {
                temp = *(text + i);
                *(text + i) = *(text + j);
                *(text + j) = temp;
            }
        }
    }
}

//在类外实现函数 - sort()函数
void StringArray::sort(string *text)
{
    cout << "sort():: 1 ... " << endl;
    string temp;
    for(int i = 0; i < SIZE - 1; i++)
    {
        for(int j = i; j < SIZE; j++)
        {
            if(*(text + i) > *(text + j))
            {
                temp = *(text + i);
                *(text + i) = *(text + j);
                *(text + j) = temp;
            }
        }
    }
}

//在类外实现函数 - 构造函数
void StringArray::display()
{
    cout << "display():: ... " << endl;
    for(int i = 0; i < SIZE; i++)
    {
        //cout << text[i];
        cout << *(text + i) << endl;
    }
}

//在类外实现函数 - 构造函数
void StringArray::display(string *text)
{
    cout << "display():: 1 ... " << endl;
    for(int i = 0; i < SIZE; i++)
    {
        //cout << text[i];
        cout << *(text + i) << endl;
    }
}
