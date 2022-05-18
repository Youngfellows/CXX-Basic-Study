#include "../include/Month.h"

//在类外实现函数 - 构造函数
Month::Month()
{
    cout << "Month()构造函数" << endl;
    //months = {"00","11","22","33","44","55","66","77","88","99","100","101","102"};
}

//在类外实现函数 - 析构函数
Month::~Month()
{
    cout << "~Month()析构函数" << endl;
}

//在类外实现函数 - get()函数
char * Month::get(int month)
{
    cout << "get() ..." << endl;
    if((month >= 1) && (month <= 12))
    {
        return *(this->months + month);
    }else{
        throw month;
    }
    return NULL;
}

