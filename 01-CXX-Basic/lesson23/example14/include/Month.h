#ifndef MONTH_H
#define MONTH_H

#include "./Global.h"

//定义Month类 - 字符串处理
class Month
{
    private:
       const char *months[SIZE] = {"00","11","22","33","44","55","66","77","88","99","100","101","102"};//通过指针数组保存月份信息

    public:
        Month();//构造函数
        ~Month();//析构函数
        const char * get(int month);//返回字符串,月份名称
};

#endif