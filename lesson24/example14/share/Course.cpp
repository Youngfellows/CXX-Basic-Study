#include "../include/Course.h"

//在类外实现函数 - 构造函数
Course::Course()
{ 
    //一定要有一个无参数构造函数
    cout << "Course()无参数构造函数" << endl;   
}

//在类外实现函数 - 构造函数
Course::Course(char *cname,float score)
{
    cout << "Course()有参数构造函数" << endl;
    //char buff[LEN];
    strcpy(this->cName,cname);
    this->score = score;
}

//在类外实现函数 - 析构函数
Course::~Course()
{
    cout << "~Course()析构函数" << endl;
}

//在类外实现函数 - getCName()函数
char *Course::getCName()
{
    return this->cName;
}

//在类外实现函数 - getScore()函数
float Course::getScore()
{
    return this->score;
}

//在类外实现函数 - display()函数
void Course::display()
{
    //cout << "Course::display():: ..." << endl;
    cout << "cName:" << this->cName << ",score:" << this->score << endl;
}
