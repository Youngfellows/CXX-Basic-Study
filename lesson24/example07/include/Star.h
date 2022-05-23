#ifndef STAR_H
#define STAR_H

#include "./Global.h"

//定义Star类 - 星星
class Star
{
    private:
        char star[SIZE] = {'*','*','*','*','*'};//字符数组
        string starStr = "*****";//字符串

    public:
        Star();//构造函数
        ~Star();//析构函数
        void display(char *star);//显示平行四边形
        void display(string star);//显示平行四边形
        char * get();//获取字符数组
        char * getStar();//获取字符数组
        string getStr();//获取字符串
};

#endif