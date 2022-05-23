#include "../include/MyNumeric.h"

//在类外定义函数 - 构造函数
MyNumeric::MyNumeric()
{
    cout << "MyNumeric()构造函数" << endl;
    this->p = this->buff;
    cout << "请输入一个整数:";
    cin >> this->number;
}

//在类外定义函数 - 构造函数
MyNumeric::~MyNumeric()
{
    cout << "~MyNumeric()析构函数" << endl;
}

//获取数字字符数组
char * MyNumeric::get()
{
    if (this->number < 0)
    {
        this->number = -(this->number);
    }
    this->convert(this->number); 
    return this->p;
}

//获取字符数组长度
int MyNumeric::getSize()
{
    //return strlen(this->buff);
    return this->size;
}

//转换字符
void MyNumeric::convert(long long int n)
{
    int i;
    char ch;
    if((i = n / 10) != 0)//检测n是否为个位数
    {
        convert(i);//不是个位,递归调用
    }
    ch = n % 10 + '0';
    *(this->p + this->size++) = ch;//为数组元素赋值
    //cout << ch << " ";
}