#include "../include/StringArray.h"

//在类外实现函数 - 构造函数
StringArray::StringArray()
{
    cout << "StringArray()构造函数" << endl;
}

//在类外实现函数 - 析构函数
StringArray::~StringArray()
{
    cout << "StringArray()析构函数" << endl;
}

//输入二维字符数组
char ** StringArray::input()
{
    cout << "input():: ..." << endl;
    cout << "请输入" << SIZE << "*" << LEN << "的字符串数组" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << "text[" << i << "]=";
        //cin >> text[i];
        cin >> *(text + i);
    }

    return NULL;
}

//获取二维字符串数组,返回指向指针的指针
char ** StringArray::get()
{
    cout << "get():: ..." << endl;
    //定义一个指针数组保存二维数组的地址
    char *pText[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        pText[i] = this->text[i];//保存二维数组的地址
    }

    //动态申请内存,返回地址,申请SIZE个保存char *类型数据的空间,即可以保存二维数组的行地址
    char **data = (char **)malloc(SIZE * sizeof(char *));
    for(int i = 0; i < SIZE; i++)
    {
        //为内存空间赋值,指向二维数组的行
        *(data + i) = *(pText + i);
    }

    return data;
}

//获取二维字符串数组,返回指向一维数组的指针变量
char (*StringArray::get(char **text))[LEN]
{
    cout << "get():: 1 ..." << endl;
    return NULL;
}

//获取二维字符串数组,返回指向一维数组的指针变量
char (*StringArray::get2())[LEN]
{
    cout << "get2():: ..." << endl;
    //动态创建一个指向一维数组的指针变量
    // char (*data)[LEN] = new char[SIZE][LEN];
    // data = this->text;//指向一维数组的指针变量,指向二维数组的首行
    // return data;//这样也OK
    this->pBText = this->text;
    return this->pBText;
}

//打印二维字符串数组
void StringArray::display()
{
    cout << "display():: ..." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        //cout << text[i] << endl;
        cout << *(text + i) << endl;
    }
}

//打印二维字符串数组,参数是指向指针的指针
void StringArray::display(char **text)
{
    cout << "display():: 1 ..." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << *(text + i) << endl;
    }
}

//打印二维字符串数组,参数是指向一维数组(一维数组的长度是LEN)的指针
void StringArray::display(char (*text)[LEN])
{
    cout << "display():: 2 ..." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << *(text + i) << endl;
    }
}

/**
 * @brief 过滤字符串,返回字符串数组
 * 
 * @param p 
 * @param callback 函数指针回调函数,返回过滤后的字符串数组和数组的大小
 */
void StringArray::filter(char **p,void (*callback)(char **p,int size))
{
    cout << "filter():: ... " << endl;
    int count = 0;
    char temp[SIZE][LEN];

    for(int i = 0; i < SIZE; i++)
    {
        char *s = *(p + i);
        if(*s == 'A') //字符串是否以A开头
        {
            //temp[count++] = s;//拷贝以A开头的字符串到数组
            strcpy(temp[count],s);
            cout << "xxx: " << temp[count] << endl;
            count++;
        }
    }

    cout << "count:" << count << endl;
    if(count > 0)
    {
        char *pText[count];
        for(int i = 0; i < count; i++)
        {
            pText[i] = temp[i];//保存二维数组的地址
        }

        //动态申请内存
        char **data = (char **)malloc(count * sizeof(char *));
        //为内存空间赋值
        for(int i = 0; i < count; i++)
        {
            *(data + i) =  *(pText + i);
        }
        
        //调用回调函数    
        (*callback)(data,count);
    }else
    {
        //调用回调函数
        (*callback)(NULL,0);
    }
}