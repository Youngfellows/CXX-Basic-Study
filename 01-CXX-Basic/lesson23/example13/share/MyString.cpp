#include "../include/MyString.h"

//在类外实现函数 - 构造函数
MyString::MyString()
{
    cout << "MyString()构造函数" << endl;
}

//在类外实现函数 - 析构函数
MyString::~MyString()
{
    cout << "~MyString()析构函数" << endl;
    cout << endl;
}

//在类外实现函数 - compare()函数
int MyString::compare(char *s1,char *s2)
{
    cout << "compare() ..." << endl;
    int i = 0;
    while (*(s1 + i) == *(s2 + i))
    {
       if (*(s1 + i) == '\0')
       {
           return 0;//全部字符相同返回0
       }
       i++; 
    }
    //字符不同时返回第一个不同字符的ASCII码差值
    return (*(s1 + i) - *(s2 + i));
}

//在类外实现函数 - input()函数
char ** MyString::input()//输入二维数组
{
    cout << "input():: ..." << endl;
    cout << "请输入" << SIZE << "个字符串" << endl;
    char buffer[LEN];//临时缓冲区
    char *s = buffer;//指针变量s,s指向字符串buffer
    for(int i = 0; i < SIZE; i++)
    {
        fgets(s,LEN,stdin);//输入字符串
        //拷贝字符串到字符数组
        strcpy(this->str[i],s);
    }
    return get();
}

//重点: 输入二维数组,返回指向一维数组的指针来实现,函数的参数是void
char (*MyString::input2())[LEN]
{
    cout << "input2():: ..." << endl;
    cout << "请输入" << SIZE << "个字符串" << endl;
    char buffer[LEN];//临时缓冲区
    char *s = buffer;//指针变量s,s指向字符串buffer
    for(int i = 0; i < SIZE; i++)
    {
        fgets(s,LEN,stdin);//输入字符串
        //拷贝字符串到字符数组
        strcpy(this->str[i],s);
    } 
    return get2();
}

//在类外实现函数 - get()函数
char ** MyString::get()//获取二维数组,重点: 通过指向指针的指针来实现返回二维数组
{
    cout << "get():: ..." << endl;
    //动态申请内存,并返回一个二维数组
    char **p = (char **)malloc(SIZE * sizeof(char *));//申请一个含有SIZE个char *元素的连续空间,及是一个二维数组
    //为二维数组赋值
    for(int i = 0; i < SIZE; i++)
    {
        //cout << "(p + " << i <<")=" << (p + i) << endl;
        //cout << "this->str[" << i <<"]=" << this->str[i] << endl;
        *(p + i) = this->str[i];
    }

    return p;
}

//重点: 获取二维数组,通过指向一维数组的指针来实现
char (*MyString::get2())[LEN]
{
    cout << "get2():: ..." << endl;
    //动态申请内存,返回一个指向一维数组的指针变量
    char (*data)[LEN] = new char[SIZE][LEN];
    data = this->str;//data指针变量指向二维数组str的0行元素
    return data;
}

//在类外实现函数 - sort()函数
char ** MyString::sort()//对二维数组进行排序
{
    cout << "sort():: ..." << endl;
    char buff[LEN];//缓冲区
    char *p = buff;//char *型指针变量p指向字符串buff
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = i + 1; j < SIZE; j++)
        {
            //比较后,交换字符串的地址
            if(strcmp(this->str[i],this->str[j]) > 0)
            {
                strcpy(p,this->str[i]);
                strcpy(this->str[i],this->str[j]);
                strcpy(this->str[j],p);
            }
        }
    }
    return get();
}

//在类外实现函数 - sort()函数
char ** MyString::sort(char **s)//对二维数组进行排序
{
    cout << "sort():: 1 ..." << endl;
    char buff[LEN];//缓冲区
    char *p = buff;//char *型指针变量p指向字符串buff
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = i + 1; j < SIZE; j++)
        {
            //比较后,交换字符串的地址
            if(strcmp(*(s + i),*(s + j)) > 0)
            {
                strcpy(p,*(s + i));
                strcpy(*(s + i),*(s + j));
                strcpy(*(s + j),p);
            }
        }
    }
    return get();
}

//重点: 返回一个二维数组,通过指向一维数组的指针来实现.参数也是一个指向一维数组的指针(也是二维数组)
char (*MyString::sort(char (*s)[LEN]))[LEN]
{
    cout << "sort():: 2 ..." << endl;
    char buff[LEN];//缓冲区
    char *p = buff;//char *型指针变量p指向字符串buff
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = i + 1; j < SIZE; j++)
        {
            //比较后,交换字符串的地址
            if(strcmp(*(s + i),*(s + j)) > 0)
            {
                strcpy(p,*(s + i));
                strcpy(*(s + i),*(s + j));
                strcpy(*(s + j),p);
            }
        }
    }
    return get2();
}

//在类外实现函数 - display()函数
void MyString::display()//显示二维数组
{
    cout << "display():: ..." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << *(str + i);
    }
    cout << endl;
}

//在类外实现函数 - display()函数
void MyString::display(char **s)//显示二维数组
{
    cout << "display():: 1 ..." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << *(s+i);
    }
    cout << endl;
}

//在类外实现函数 - display()函数
void MyString::display(char (*s)[LEN])//显示二维数组
{
    cout << "display():: 2 ..." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << *(s + i) ;
    }
    cout << endl;
}

