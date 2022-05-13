#ifndef CADRE_H
#define CADRE_H

#include "./Global.h"

//定义Cadre类 - 干部
class Cadre
{
    private:
        string name;//姓名
        char sex;//性别
        int age;//年龄
        string addr;//地址
        string tel;//电话

        string post;//职务
    public:
        Cadre();//构造函数
        Cadre(string name,char sex,int age,string addr,string tel,string post);//构造函数
        ~Cadre();//析构函数
        //void display();//显示干部信息
        void display();
};

#endif