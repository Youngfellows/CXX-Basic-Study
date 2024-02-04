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
                //display();
            }
        }
    }
}

//在类外定义函数 - maxChange()函数
void Matrix::maxChange(int *p)//交换最大值元素
{
    cout << "maxChange::" << endl;
    int i;
    int j;
    int temp;
    int *pmax;//最大值元素地址
    int *pt = p;//指针变量pt指向数组
    pmax = pt;
    for(i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if(*(pt + N * i + j) > *pmax)
            {
                pmax = pt + N*i + j;//找出最大值地址
            }
        }   
    }
    //最大值与中间一个元素交换,行列是基数的数组才有中间一个元素
    if ((M * N) % 2 != 0)
    {
        temp = *(pt + (M*N)/2);
        *(pt + (M*N)/2) = *pmax;
        *pmax = temp;
    }
    
}

//在类外定义函数 - leftTopChange()函数
void Matrix::leftTopChange(int *p)//交换左上角元素最小值
{
    cout << "leftTopChange::" << endl;
    int i;
    int j;
    int temp;
    int *pmin;//最小值元素地址
    int *pt = p;//指针变量pt指向数组
    pmin = pt;
    cout << "leftTopChange:: 1, *pmin:" << *pmin << endl;
    for(i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if(*(pt + N * i + j) < *pmin)
            {
                pmin = pt + N*i + j;//找出最大值地址
            }
        }   
    }

    cout << "leftTopChange:: 2, *pmin:" << *pmin << endl;
    //最小值与左上角元素交换
    temp = *pt;
    *pt= *pmin;
    *pmin = temp;
}

//在类外定义函数 - rightTopChange()函数
void Matrix::rightTopChange(int *p)//交换右上角元素最小值
{
    cout << "rightTopChange::" << endl;
    //display2(p);
    int i;
    int j;
    int temp;
    int *pmin;//最小值元素地址
    int *pt = p;//指针变量pt指向数组
    pmin = pt + 1;//最小值指向a[0][1]个元素开始
    cout << "rightTopChange:: 1, *pmin:" << *pmin << endl;
    for(i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if(((pt + N * i + j ) != pt)&& (*(pt + N * i + j) < *pmin))
            {
                pmin = pt + N*i + j;//找出最大值地址
            }
        }   
    }
    cout << "rightTopChange:: 2, *pmin:" << *pmin << endl;
    //最小值与右上角元素交换
    temp = *(pt + N -1);
    *(pt + N -1) = *pmin;
    *pmin = temp;
}

//在类外定义函数 - leftBottomChange()函数
void Matrix::leftBottomChange(int *p)//交换左下角元素最小值
{
    cout << "leftBottomChange::" << endl;
    int i;
    int j;
    int temp;
    int *pmin;//最小值元素地址
    int *pt = p;//指针变量pt指向数组
    pmin = pt + 1;//最小值指向a[0][1]个元素开始
    cout << "leftBottomChange:: 1, *pmin:" << *pmin << endl;
    for(i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if(((pt + N * i + j ) != pt) &&((pt + N * i + j ) != (pt + N -1)) && (*(pt + N * i + j) < *pmin))
            {
                pmin = pt + N*i + j;//找出最大值地址
            }
        }   
    }
    cout << "leftBottomChange:: 2, *pmin:" << *pmin << endl;
    //最小值与右上角元素交换
    temp = *(pt + M*N - N);
    *(pt + M*N - N) = *pmin;
    *pmin = temp;
}

//在类外定义函数 - rightBottomChange()函数
void Matrix::rightBottomChange(int *p)//交换右下角元素最小值
{
    cout << "rightBottomChange::" << endl;
    int i;
    int j;
    int temp;
    int *pmin;//最小值元素地址
    int *pt = p;//指针变量pt指向数组
    pmin = pt + 1;//最小值指向a[0][1]个元素开始
    cout << "rightBottomChange:: 1, *pmin:" << *pmin << endl;
    for(i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if(((pt + N * i + j ) != pt) &&((pt + N * i + j ) != (pt + N -1)) && ((pt + N * i + j ) != (pt + M*N - N)) && (*(pt + N * i + j) < *pmin))
            {
                pmin = pt + N*i + j;//找出最大值地址
            }
        }   
    }
    cout << "rightBottomChange:: 2, *pmin:" << *pmin << endl;
    //最小值与右上角元素交换
    temp = *(pt + M*N - 1);
    *(pt + M*N - 1) = *pmin;
    *pmin = temp;
}


