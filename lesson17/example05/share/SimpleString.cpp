#include "../include/SimpleString.h"

//在类外定义方法 - 构造函数
SimpleString::SimpleString()
{
    cout << "SimpleString()无参数构造函数" << endl;
    this->content = NULL;
}

//在类外定义方法 - 构造函数
SimpleString::SimpleString(char *content)
{
    cout << "SimpleString()有参数构造函数" << endl;
    this->length = strlen(content);
    //动态申请内存
    if (this->content != NULL)
    {
       delete this->content;
       this->content = NULL;
    }
    this->content = new char[this->length + 1];
    //为字符串赋值
    strcpy(this->content,content); 
}

//在类外定义方法 - 析构函数
SimpleString::~SimpleString()
{
    cout << "~SimpleString()析构函数" << endl;
    if (this->content != NULL)
    {
        delete [] this->content;//释放内存
    }
    
}

//在类外定义方法 - getLength()函数
int SimpleString::getLength()
{
    //cout << "getLength()::" << this->length << endl;
    return this->length;
}

//在类外定义方法 - getContent()函数
char *SimpleString::getContent()
{
    //cout << "getContent::" << endl;
    return this->content;
}

//在类外定义方法 - setContent()函数
int SimpleString::setContent(char *content)
{
   this->length = strlen(content);
    //动态申请内存
    if (this->content != NULL)
    {
       delete this->content;
       this->content = NULL;
    }
    this->content = new char[this->length + 1];
    //为字符串赋值
    strcpy(this->content,content); 
    //cout << "setContent:" << this->content << endl;
    return this->length;
}

//在类外定义方法 - print()函数
void SimpleString::print()
{
    cout << this->content << endl;
}
