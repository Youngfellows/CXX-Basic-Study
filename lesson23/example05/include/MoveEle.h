#ifndef MOVE_ELE_H
#define MOVE_ELE_H

#include "./Global.h"

//定义MoveEle类 - 移动数组元素
class MoveEle
{
    private:
        int number[SIZE];//数组元素
        int count;//元素个数
    public:
        MoveEle();//构造函数
        ~MoveEle();//析构函数
        void inputEle(int n);//输入元素
        void display();//显示元素
        void move(int m);//移动m个元素
};

#endif