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
}

//在类外定义函数 - input()函数
void Matrix::input()
{
    cout << "input():: 请输入" << M << "*" << N << "的二维数组" << endl;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << "matrix[" << i << "][" << j << "]=";
            cin >> matrix[i][j];
        }
    }
}

//在类外定义函数 - display()函数
int *Matrix::getMatrix()
{
    return &(this->matrix[0][0]);
}

//在类外定义函数 - display()函数
void Matrix::display()
{
    cout << "display()::" << endl;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            //cout << "matrix[" << i << "][" << j << "]=";
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

//在类外定义函数 - display()函数
void Matrix::display2(int *p)
{
    cout << "display()::" << endl;
    int *pt = p;//指针变量pt指向数组matrix
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << *(pt + M*i + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

//在类外定义函数 - move()函数
void Matrix::move()
{
    cout << "move()::" << endl;
    for(int i = 0; i < M; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if(i != j)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
                //cout << "===============" << endl;
                //display();
            }
        }
    }
}

//在类外定义函数 - move2()函数
void Matrix::move2(int *p)
{
    cout << "move()::" << endl;
    int *pt = p;//指针变量pt指向数组matrix
    for(int i = 0; i < M; i++)
    {
        for(int j = i; j < N; j++)
        {
            if(i != j)
            {
                int temp = *(pt + M*i + j);
                *(pt + M*i + j) =  *(pt + M*j + i);
                *(pt + M*j + i) = temp;
                //cout << "===============" << endl;
                display();
            }
        }
    }
}


