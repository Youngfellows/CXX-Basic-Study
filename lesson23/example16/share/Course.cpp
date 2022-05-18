#include "../include/Course.h"

//在类外实现函数 - 构造函数
Course::Course()
{
    cout << "Course()构造函数" << endl;
}

//在类外实现函数 - 构造函数
Course::Course(char cname[LEN],float score)
{
    cout << "Course()有参数构造函数" << endl;
    //cout << "Course:: 1,cname=" << cname << endl;
    //拷贝字符串
    strcpy(this->cname,cname);
    this->score = score;
    //cout << "Course:: 2,cname=" << this->cname << endl;
}

//在类外实现函数 - 析构函数
Course::~Course()
{
    cout << "~Course()析构函数" << endl;
    cout << endl;
}

//在类外实现函数 - getCName()函数
char * Course::getCName()
{
    return this->cname;
}

//在类外实现函数 - getScore()函数
float Course::getScore()
{
    return this->score;
}