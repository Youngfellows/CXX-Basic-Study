#ifndef PUPILS_H
#define PUPILS_H

#include "./Student.h"

//定义Pupils类 - 公共派生类 - 小学生 - 继承Student类
class Pupils: public Student
{
    //私有数据成员
    private:
        long num;//学号
        char addr[SIZE];//地址

    public:
        Pupils();//构造函数
        ~Pupils();//析构函数
        void getValue4Pupils();//获取小学生信息
        void display4Pupils();//显示小学生信息
};

#endif