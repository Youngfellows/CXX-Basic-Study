#ifndef CAT_H
#define CAT_H

#include "./Animal.h"

//定义Cat类 - 保护派生类 - 猫 - 继承Animal类
class Cat: protected Animal
{
    //私有数据成员
    private:
        long num;//学号
        char addr[SIZE];//地址

    public:
        Cat();//构造函数
        ~Cat();//析构函数
        void getValue4Cat();//获取猫信息
        void display4Cat();//显示猫信息
};

#endif