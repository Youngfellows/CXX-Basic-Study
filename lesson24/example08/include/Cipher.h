#ifndef CIPHER_H
#define CIPHER_H

#include "./Global.h"

//定义Star类 - 星星
class Cipher
{
    private:
        char star[SIZE];//字符数组
        string starStr;//字符串

    public:
        Cipher();//构造函数
        ~Cipher();//析构函数
        char *input();//输入字符串
        string input2();//输入字符串
        void display(char *star);//显示原文
        void display(string star);//显示原文
        char * get();//获取字符数组
        char * getStar();//获取字符数组
        string getStr();//获取字符串
        char * decrypt(char *star);//解密
        string decrypt(string star);//解密
};

#endif