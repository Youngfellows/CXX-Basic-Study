#ifndef CHANGE_DATE_H
#define CHANGE_DATE_H

#include "./Global.h"

//定义ChangeDate类 - 交换数组元素
class ChangeData
{
    private:
        int number[SIZE];
    
    public:
        ChangeData();//构造函数
        ~ChangeData();//析构函数
        void input();//输入数据
        void changeMax();//交换最大值元素
        void changeMin();//交换最小值元素
        void display();//显示数据
};

#endif