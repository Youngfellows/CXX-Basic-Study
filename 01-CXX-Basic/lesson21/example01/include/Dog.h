#ifndef DOG_H
#define DOG_H

#include "./Animal.h"

//定义Dog类 - 公共派生类 - 小学生 - 继承Student类
class Dog: public Animal
{
    //私有数据成员
    private:
        long num;//学号
        char addr[SIZE];//地址

    public:
        Dog();//构造函数
        ~Dog();//析构函数
        void getValue4Dog();//获取猫信息
        void display4Dog();//显示猫信息
};

#endif