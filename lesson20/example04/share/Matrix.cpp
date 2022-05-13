#include "../include/Matrix.h"

//在类外定义函数 - 构造函数
Matrix::Matrix()
{
    cout << "Matrix()构造函数" << endl;
}

//在类外定义函数 - 析构函数
Matrix::~Matrix()
{
    cout << "~Matrix()析构函数" << endl;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            mat[i][j] = 0;
        }
    }
}

//在类外定义函数 - input()函数
void Matrix::input()
{
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << "mat[" << i << "][" << j << "]=";
            cin >> mat[i][j];
        }
    }
}

//在类外定义函数 - display()函数
void Matrix::display()
{
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            //cout << "mat[" << i << "][" << j << "]=" << endl;
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

//在类外定义函数 - 重载 + 运算符 - 使用友元函数
Matrix operator + (Matrix &a,Matrix &b)
{
    Matrix c;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            c.mat[i][j] =a.mat[i][j] + b.mat[i][j]; 
        }
    }
    return c;
}