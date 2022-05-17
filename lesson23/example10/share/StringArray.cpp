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
    cout << "请输入" << SIZE << "个字符串" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cin >> this->str[i];//输入字符串
    }
    display2(this->str);
    sort2(this->str);
    display2(this->str);
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
void StringArray::display2(char s[SIZE][LEN])
{
    cout << "display2()::" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << s[i] << endl;//打印字符串
    }
    cout << endl; 
}

//在类外实现函数 - display2()函数
void StringArray::display3(char **s)
{
    cout << "display3()::" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << s[i] << endl;//打印字符串
    }
    cout << endl;
}

//在类外实现函数 - display2()函数
void StringArray::display4(char **s)
{
    cout << "display4()::" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        //cout << s+i << endl;
        cout << *(s+i) << endl;
    }
    cout << endl;
}

//在类外实现函数 - display5()函数
void StringArray::display5(char (*p)[LEN])//显示字符串数组
{
    cout << "display4()::" << endl;
    cout << "p:" << p << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << *(p + i) << endl;
    }
    cout << endl;
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
            //cout << "=====================" << endl;
            //display1();
        }
    }
}

//在类外实现函数 - sort2()函数
void StringArray::sort2(char s[SIZE][LEN])
{
    cout << "sort2()::" << endl;
    int i;
    int j;
    char buf[LEN];//缓冲区
    char *pt = buf;//char *类型指针变量pt指向字符串buf
    for(i = 0; i < SIZE; i++)
    {
        for(j = i; j < SIZE - 1; j++)
        {
            cout << "i=" << i << "," << "j=" << j << ",j+1=" << j+1 << endl;
            if(strcmp(s[j],s[j + 1]) > 0)
            {
                cout << "i=" << i << "," << "j=" << j << ",大于j+1=" << j+1 << endl; 
                strcpy(pt,s[j]);
                strcpy(s[j],s[j + 1]);
                strcpy(s[j + 1],pt);
            }
        }
    }
}

//在类外实现函数 - sort3()函数
void StringArray::sort3(char **s)
{
    cout << "sort3()::" << endl;
    char buf[LEN];//缓冲区
    char *pt = buf;//char *类型指针变量pt指向字符串buf
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = i; j < SIZE - 1; j++)
        {
            //cout << "i=" << i << "," << "j=" << j << ",j+1=" << j+1 << endl;
            if(strcmp(s[j],s[j + 1]) > 0)
            {
                //cout << "i=" << i << "," << "j=" << j << ",大于j+1=" << j+1 << endl; 
                strcpy(pt,s[j]);
                strcpy(s[j],s[j + 1]);
                strcpy(s[j + 1],pt);
                //display4(s);
            }
        }
    }
}

//在类外实现函数 - sort3()函数
void StringArray::sort4(char (*s)[LEN])
{
    cout << "sort4()::" << endl;
    char buf[LEN];//缓冲区
    char *pt = buf;//char *类型指针变量pt指向字符串buf
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = i; j < SIZE - 1; j++)
        {
            //cout << "i=" << i << "," << "j=" << j << ",j+1=" << j+1 << endl;
            if(strcmp(*(s + j),s[j + 1]) > 0)
            {
                //cout << "i=" << i << "," << "j=" << j << ",大于j+1=" << j+1 << endl; 
                strcpy(pt,s[j]);
                strcpy(s[j],s[j + 1]);
                strcpy(s[j + 1],pt);
                //display4(s);
            }
        }
    }
}

//在类外实现函数 - getStr()函数 - 重点: 返回一个二维数组
char ** StringArray::getStr()
{
    //动态申请内存
    char **data;//定义一个返回二维数组的指针变量
    data = (char **)malloc(SIZE * sizeof(char *));//申请两个保存char * 数据的二维数组
    //为二维数组元素赋值
    for(int i = 0; i < SIZE; i++)
    {
        data[i] = this->str[i];
    }

    return data;//返回二维数组
}

//重点: 返回一个二维数组,通过返回一个指向一维数组(一维数组含有LEN个char元素)的指针变量来实现
char (*StringArray::getStr3())[LEN]
{
    cout << "getStr3::" << endl;
    //动态申请内存
    char (*data)[LEN] = new char[SIZE][LEN];
    data = this->str;//data指针变量指向二维数组str的0行元素
    return data;
}

//在类外实现函数 - getStr2()函数
string * StringArray::getStr2()//返回字符串数组地址
{
    return this->str2;
}