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
        //cin >> *(text + i);
        fgets(*(text + i),LEN,stdin);
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

//统计字符个数,返回值存入一个数组中
int * StringArray::calc(char **pText)
{
    cout << "calc():: ..." << endl;
    int upper = 0;//大写字母个数
    int lower = 0;//小写字母
    int digit = 0;//数字
    int space = 0;//空格
    int other = 0;//其他
    
    for(int i = 0; i < SIZE; i++)
    {
        char *s = *(pText + i);
        //cout << s ;
        int j = 0;
        char ch;
        while((ch = *(s + j)) != '\0')
        {
            if(ch >= 'A' && ch <= 'Z')
            {
                upper++;
            }else if(ch >= 'a' && ch <= 'z')
            {
                lower++;
            }else if(ch >= '0' && ch <= '9')
            {
                digit++;
            }else if(ch == ' ')
            {
                space++;
            }else {
                other++;
            }
            j++;
        }
    }
    cout << "upper:" << upper << endl;
    cout << "lower:" << lower << endl;
    cout << "digit:" << digit << endl;
    cout << "space:" << space << endl;
    cout << "other:" << other << endl;

    //动态申请内存,向内存写入要保存字符个数
    int * data = (int *)malloc(SIZE_CHAR_NUM * sizeof(int));
    *data = upper;
    *(data + 1) = lower;
    *(data + 2) = digit;
    *(data + 3) = space;
    *(data + 4) = other;

    return data;
}