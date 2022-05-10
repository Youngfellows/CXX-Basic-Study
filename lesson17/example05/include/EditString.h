#ifndef EDIT_STRING_H
#define EDIT_STRING_H

#include "./SimpleString.h"

//定义EditString类 - 可编辑字符串 - SimpleString的派生类(子类)
class EditString: public SimpleString
{
    private:
        int cursor = 0;//光标位置
    
    public:
        EditString();//构造函数
        EditString(char *content);//构造函数
        ~EditString();//析构函数
        int moveCursor(int pos);//移动光标
        int getCursor();//获取当前光标位置
        int insert(SimpleString *newStr);//在光标处插入字符串
        int replace(SimpleString *newStr);//在光标所在位置用字符串替换
        void deleteStr(int num);//在光标所在的位置删除num个字符
};

#endif