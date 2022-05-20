#include "../include/Matrix.h"

//在类外实现函数 - 构造函数
Matrix::Matrix()
{
    cout << "Matrix()构造函数" << endl;
}

//在类外实现函数 - 析构函数
Matrix::~Matrix()
{
    cout << "~Matrix()析构函数" << endl;
}

//输入二维数组元素
int ** Matrix::input()
{
    cout << "input():: ..." << endl;
    return NULL;
}

//获取二维数组,返回指向指针的指针
int ** Matrix::get()
{
    cout << "get():: ..." << endl;
    return NULL;
}

//获取二维数组,通过指向一维数组的指针变量来实现
int (*Matrix::get1())[N]
{
    cout << "get1():: ..." << endl;
    return NULL;
}

//显示二维数组
void Matrix::display()
{
    cout << "display():: ..." << endl;
}

//显示二维数组,参数是指向指针的指针
void Matrix::display(int **p)
{
    cout << "display():: 1 ..." << endl;
}

//显示二维数组,参数是指向一维数组的指针变量
void Matrix::display(int (*p)[N])
{
    cout << "display():: 2 ..." << endl;
}

//求对角线元素之和
int Matrix::sum()
{
    cout << "sum():: ..." << endl;
    return 0;
}

//求对角线元素之和,参数是一个指针数组,和下面的指向指针的指针其实是一样的
//int Matrix::sum(int *p[M]);
//求对角线元素之和,参数是指向指针的指针变量
int Matrix::sum(int **p)
{
    cout << "sum():: 1 ..." << endl;
    return 0;
}

//求对角线元素之和,参数是指向一维数组的指针变量
int Matrix::sum(int (*p)[N])
{
    cout << "sum():: 2 ..." << endl;
    return 0;
}

//求对角线元素之和,参数是指向指针的指针变量,返回值是一个指向sum和的指针变量
int *psum(int **p)
{
    cout << "psum():: ..." << endl;
    return NULL;
}