#include "../include/Star.h"

//在类外实现函数 - 构造函数
Star::Star()
{
    cout << "Star()构造函数" << endl;
}

//在类外实现函数 - 析构函数
Star::~Star()
{
    cout << "~Star()析构函数" << endl;
}

//在类外实现函数 - display()函数
void Star::display(char *p)
{
    cout << "display():: 1 ..." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        //打印前面的空格
        for(int j = 0; j < i; j++)
        {
            cout << SPACE;    
        }
        //打印后面连续的*
        for(int j = 0; j < SIZE; j++)
        {
            cout << *(p + j);
        }
        cout << endl;
    }
    cout << endl;
}

//在类外实现函数 -display()函数
void Star::display(string star)
{
    cout << "display():: 2 ..." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        //打印前面的空格
        for(int j = 0; j < i; j++)
        {
            cout << SPACE;    
        }
        //打印后面连续的*
        // for(int j = 0; j < SIZE; j++)
        // {
        //     cout << *(p + j);
        // }
        cout << star << endl;
    }
    cout << endl;
}

//在类外实现函数 - get()函数
char *Star::get()
{
    return this->star;
}

//在类外实现函数 - getStar()函数
char *Star::getStar()
{
    //动态申请内存空间,7个连续空间,保存char字符
    char *p = (char *)malloc(SIZE * sizeof(char));
    //向内存写入数据
    for(int i = 0; i < SIZE; i++)
    {
        *(p + i) = '*';//把*保存到空间
    }
    return p;
}

//在类外实现函数 - getStr()函数
string Star::getStr()
{
    return this->starStr;
}
