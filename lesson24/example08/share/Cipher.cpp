#include "../include/Cipher.h"

//在类外实现函数 - 构造函数
Cipher::Cipher()
{
    cout << "Cipher()构造函数" << endl;
}

//在类外实现函数 - 析构函数
Cipher::~Cipher()
{
    cout << "~Cipher()析构函数" << endl;
}

//在类外实现函数 - input()函数
char *Cipher::input()
{
    cout << "input():: ..." << endl;
    cout << "请输入加密后的字符串:";
    cin >> this->star;
    return this->star;
}

//在类外实现函数 - input2()函数
string Cipher::input2()
{
    cout << "input2():: ..." << endl;
    cout << "请输入加密后的字符串:";
    cin >> this->starStr;
    return this->starStr;
}

//在类外实现函数 - display()函数
void Cipher::display(char *p)
{
    cout << "display():: 1 ..." << endl;
    cout << "原文:" << p << endl;
}

//在类外实现函数 -display()函数
void Cipher::display(string star)
{
    cout << "display():: 2 ..." << endl;
    cout << "原文:" << star << endl;
}

//在类外实现函数 - get()函数
char *Cipher::get()
{
    return this->star;
}

//在类外实现函数 - getStar()函数
char *Cipher::getStar()
{
    int size = strlen(this->star);
    cout << "size=" << size << endl;

    //动态申请内存空间,7个连续空间,保存char字符
    char *p = (char *)malloc(size * sizeof(char));
    //向内存写入数据
    for(int i = 0; i < size; i++)
    {
        *(p + i) = *(this->star + i);//把输入的字符保存到空间
        //*(p + i) = this->star[i];//把输入的字符保存到空间
    }
    return p;
}

//在类外实现函数 - getStr()函数
string Cipher::getStr()
{
    return this->starStr;
}

//在类外实现函数 - decrypt()函数
char * Cipher::decrypt(char *star)//解密
{
    cout << "decrypt():: ..." << endl;
    int i = 0;

    while( *(star + i) != '\0')
    {
        if((*(star + i) >= 'A') && (*(star + i) <= 'Z'))
        {
           *(star + i) = 155 - *(star + i);
        }else if((*(star + i) >= 'a') && (*(star + i) <= 'z'))
        {
            *(star + i) = 219 - *(star + i);
        }
        i++;
    }
    return star;
}

//在类外实现函数 - decrypt()函数
string Cipher::decrypt(string star)//解密
{
    cout << "decrypt():: ..." << endl;
    long unsigned int i = 0;
    while(i < star.size())
    { 
        if((star[i] >= 'A') && (star[i] <= 'Z'))
        {
           star[i] = 155 - star[i];
        }else if((star[i] >= 'a') && (star[i] <= 'z'))
        {
            star[i] = 219 -star[i];
        }
        i++;
    }
    return star;
}
