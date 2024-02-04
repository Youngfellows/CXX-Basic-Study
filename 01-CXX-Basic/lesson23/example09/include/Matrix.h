#ifndef MATRIX_H
#define MATRIX_H

#include "./Global.h"

//定义Matrix类 - 矩阵
class Matrix
{
    private:
        int matrix[M][N];//定义一个二维数组
    public:
        Matrix();//构造函数
        ~Matrix();//析构函数
        void input();//输入元素
        void display();//显示元素
        void move();//移动元素

        int *getMatrix();//获取数组元素
        void display2(int *p);//显示元素
        void move2(int *p);//一定元素

        void maxChange(int *p);//交换最大值元素
        void leftTopChange(int *p);//交换左上角元素最小值
        void rightTopChange(int *p);//交换右上角元素最小值
        void leftBottomChange(int *p);//交换左下角元素最小值
        void rightBottomChange(int *p);//交换右下角元素最小值
};

#endif