#include "../include/EditString.h"

//在类外定义函数 - 构造函数
EditString::EditString():SimpleString()
{
    cout << "EditString()构造函数" << endl;
}

//在类外定义函数 - 构造函数 - 初始化父类
EditString::EditString(char *content):SimpleString(content)
{
    cout << "EditString()有参数构造函数 ~^_^~ ..." << endl;
}

//在类外定义函数 - 析构函数
EditString::~EditString()
{
    cout << "~EditString()析构函数" << endl;
}

//在类外定义函数 - moveCorsor()函数
int EditString::moveCursor(int pos)//移动光标
{
    this->cursor = pos;
}

//在类外定义函数 - getCorsor()函数
int EditString::getCursor()
{
    return this->cursor;
}

//在类外定义函数 - insert()构造函数
int EditString::insert(SimpleString *newText)//在光标处插入字符串
{
    int size = newText->getLength();//插入字符串的长度
    char *pText = newText->getContent();//插入字符串
    int length = this->getLength();//当前字符串的长度
    char *pCur = this->getContent();//当前字符串

    int i = 0;//新串的索引
    int k = 0;//记录光标之前原始字符串的索引
    int j = 0;//新字符串的索引

    //动态申请内存
    char * newStr = new char[length + size + 1];

    //1.先拷贝光标之前的原始字符串内容
    for(i = 0; i < this->cursor; i++)
    {
        newStr[i] = pCur[i];
    }
    k = i;

    //2.在光标位置插入新字符串
    for(j = 0; j < size; j++,i++)
    {
        newStr[i] = pText[j];
    }

    //3.移动光标到插入字符串尾部,插入原始字符串的后续内容
    this->cursor = i;
    int l = 0;
    for(l = k; l < length; l++,i++)
    {
        newStr[i] = pCur[l];
    }
    newStr[i] = '\0';

    //设置字符串
    this->setContent(newStr);
    //释放空间
    delete [] newStr;
    return this->cursor;
}

//在类外定义函数 - replace()构造函数
int EditString::replace(SimpleString *newText)//在光标所在位置用字符串替换
{
    cout << "replace:: ~~~" << endl;
    int size = newText->getLength();//插入字符串的长度
    char *pText = newText->getContent();//插入字符串
    int length = this->getLength();//当前字符串的长度
    char *pCur = this->getContent();//当前字符串

    int i = 0;//原始串的索引
    int j = 0;//新字符串的索引

    //动态申请内存
    int dynamicSize = 0;
    if (length > (this->cursor + size))
    {
        //替换后的新串比原始字符串长,只替换到原始字符串大小
        dynamicSize = length + 1;
    }else
    {
        dynamicSize = this->cursor + size + 1;
    }
    char * newStr = new char[dynamicSize];

    //1.先拷贝光标之前的原始字符串内容
    for(i = 0; i < this->cursor; i++)
    {
        newStr[i] = pCur[i];
    }

    //2.拷贝光标之后的内容
    for(i = this->cursor,j = 0; i < dynamicSize; i++,j++ )
    {
        newStr[i] = pText[j];
    }
    newStr[i] = '\0';
    this->cursor = i;

    this->setContent(newStr);
    //cout << "replace:: 222222222" << endl;
    delete [] newStr;
    return this->cursor;
}

//在类外定义函数 - delete()构造函数
void EditString::deleteStr(int num)//在光标所在的位置删除num个字符
{
    int length = this->getLength();//字符串长度
    char *content = this->getContent();//字符串
    int cursor = this->getCursor();//当前光标位置
    //开始删除
    int i = 0;
    for( i = cursor; i < length; i++)
    {
        content[i] = content[i+num];
    }
    content[i] = '\0';
}
