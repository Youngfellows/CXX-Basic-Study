#ifndef MATRIX_H
#define MATRIX_H

#include "./Global.h"

//定义Matrix类,矩阵
class Matrix
{
    private:
        int mat[M][N];//矩阵
    
    public:
        Matrix();//构造函数
        ~Matrix();//析构函数
        void input();//输入矩阵元素
        void display();//输出矩阵元素
        //使用友元函数,重载+运算符
        friend Matrix operator + (Matrix &a,Matrix &b);
};

#endif