#include "../include/StringCat.h"

//在类外实现函数 - 构造函数
StringCat::StringCat()
{
    cout << "StringCat()构造函数" << endl;
}

//在类外实现函数 - 析构函数
StringCat::~StringCat()
{
    cout << "~StringCat()析构函数" << endl;
}


//在类外实现函数 - input1()函数
void StringCat::input1()//输入字符串
{
    cout << "input1():: ..." << endl;
    cout << "请输入字符串s1:" ;
    cin >> this->s1;
    cout << "请输入字符串s2:" ;
    cin >> this->s2;
}

//在类外实现函数 - input2()函数
void StringCat::input2()//输入字符串
{
    cout << "input2():: ..." << endl;
    cout << "请输入字符串str1:" ;
    cin >> this->str1;
    cout << "请输入字符串str2:" ;
    cin >> this->str2;
}

//在类外实现函数 - strcat1()函数
char * StringCat::strcat1()//拼接字符串
{
    cout << "strcat1():: ..." << endl;
    int i = 0;
    int j = 0;
    while(*( this->s1 + i) != '\0')
    {
        i++;
    }
    //把字符串s2拼接到字符串s1
    while(*( this->s2 + j) != '\0')
    {
        *( this->s1 + i) = *( this->s2 + j);
        i++;
        j++;
    }
    //添加字符串结束标准
    *( this->s1 + i) = '\0';

    return this->s1;
}

//在类外实现函数 - strcat2()函数
char * StringCat::strcat2()//拼接字符串
{
    cout << "strcat2():: ..." << endl;
    strcat(this->s1,this->s2);//调用系统函数实现
    return this->s1;
}

//在类外实现函数 - strcat3()函数
string StringCat::strcat3()//拼接子字符
{
    cout << "strcat3():: ..." << endl;
    return this->str1 + this->str2;
}
