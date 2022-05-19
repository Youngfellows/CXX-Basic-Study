#ifndef MATRIX_H
#define MATRIX_H

#include "./Global.h"

//定义Matrix类 - 二维数组
class Matrix
{
    private:
        int num[M][N];//定义一个M * N的二维数组
        int **pNum;//指向二维数组的指针变量
        int *pNum1[M];//指针数组pNum1,数组中的每一个元素是int *,即指针数组中的每一个元素保存二维数组的行信息
        int (*pNum2)[N];//指向含有N个int类型元素的一维数组的指针变量pNum2
        
    public:
        Matrix();//构造函数
        ~Matrix();//析构函数
        int ** input();//输入二维数组元素
        int ** get();//获取二维数组,返回指向指针的指针
        int (*get1())[N];//获取二维数组,通过指向一维数组的指针变量来实现
        void display();//显示二维数组
        void display(int **p);//显示二维数组,参数是指向指针的指针
        void display(int (*p)[N]);//显示二维数组,参数是指向一维数组的指针变量
        int sum();//求对角线元素之和
        //int sum(int *p[M]);//求对角线元素之和,参数是一个指针数组,和下面的指向指针的指针其实是一样的
        int sum(int **p);//求对角线元素之和,参数是指向指针的指针变量
        int sum(int (*p)[N]);//求对角线元素之和,参数是指向一维数组的指针变量 
        int *psum(int **p);//求对角线元素之和,参数是指向指针的指针变量,返回值是一个指向sum和的指针变量
};

#endif