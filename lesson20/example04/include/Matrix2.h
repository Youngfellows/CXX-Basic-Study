#ifndef MATRIX2_H
#define MATRIX2_H

#include "./Global.h"

//定义Matrix类,矩阵
class Matrix2
{
    private:
        int mat[M][N];//矩阵
    
    public:
        Matrix2();//构造函数
        ~Matrix2();//析构函数
        void input();//输入矩阵元素
        void display();//输出矩阵元素
        //使用友元函数,重载+运算符
        friend Matrix2 operator + (Matrix2 &a,Matrix2 &b);
        //使用友元函数,重载 >> 输入运算符
        friend istream & operator >> (istream &in,Matrix2 &a);
        //使用友元函数,重载 << 输出运算符
        friend ostream & operator << (ostream &out,Matrix2 &a);
};

#endif