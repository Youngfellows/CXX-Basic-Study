#include "../include/Matrix2.h"

//在类外定义函数 - 构造函数
Matrix2::Matrix2()
{
    cout << "Matrix2()构造函数" << endl;
}

//在类外定义函数 - 析构函数
Matrix2::~Matrix2()
{
    cout << "~Matrix2()析构函数" << endl;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            mat[i][j] = 0;
        }
    }
}

//在类外定义函数 - input()函数
void Matrix2::input()
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
void Matrix2::display()
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
Matrix2 operator + (Matrix2 &a,Matrix2 &b)
{
    Matrix2 c;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            c.mat[i][j] =a.mat[i][j] + b.mat[i][j]; 
        }
    }
    return c;
}

//使用友元函数,重载 >> 输入运算符
istream & operator >> (istream &in,Matrix2 &a)
{
   //cout << ">>>>>>>>>>>>>" << endl;
   for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
           cout << "mat[" << i << "][" << j << "]=";
           in >> a.mat[i][j]; 
        }
    }  
    return in;
}


//使用友元函数,重载 << 输出运算符
ostream & operator << (ostream &out,Matrix2 &a)
{
    out << "<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            out << a.mat[i][j] << " "; 
        }
        out << endl;
    }  
    out << endl;
    return out;
}