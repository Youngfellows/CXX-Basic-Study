#ifndef ANIMAL_H
#define ANIMAL_H

#include "./Global.h"

//定义Animal类 - 动物 - 基类
class Animal
{
    //基类保护成员
    protected:
        char name[SIZE];//姓名
        char sex[SIZE];//性别
        int age;//年龄

    //基类公有成员函数
    public:
        Animal();//基类-构造函数
        ~Animal();//基类-析构函数
        void getValue();//基类-公有成员函数-获取基类私有数据
        void display();//基类-公有成员函数-显示基类私有数据
};

#endif