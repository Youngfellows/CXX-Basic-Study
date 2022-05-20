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
    cout << "请输入" << M << "*" << N << "行的二维数组元素" << endl;
    //通过指针数组进行中转,为指针数组每一个元素赋值,元素是每一行的地址
    for(int i = 0; i < M; i++)
    {
        //cout << "this->num[" << i << "]=" << this->num[i] << endl;
        //cout << "this->pNum1[" << i << "]=" << this->pNum[i] << endl;
        this->pNum1[i] = this->num[i];//指针数组每一个元素保存的是每一行的地址
    }

    //指针变量pNum指向二维数组第一行首元素
    this->pNum = this->pNum1;

    //输入二维数组元素
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            //输入num[i][j]元素
            cout << "num[" << i << "][" << j << "]=";
            // cin >> this->num[i][j];
            // *(*(this->pNum + i) + j) = this->num[i][j];

            cin >> *(*(this->pNum + i) + j);//通过指针变量间接为数组赋值
        }
    }
    //返回指向二维数组的指针变量
    return this->pNum;
}

//获取二维数组,返回指向指针的指针
int ** Matrix::get()
{
    cout << "get():: ..." << endl;
    return this->pNum1;
}

//获取二维数组,通过指向一维数组的指针变量来实现
int (*Matrix::get1())[N]
{
    cout << "get1():: ..." << endl;
    //动态申请内存,返回一个指向一维数组的指针变量
    int (*data)[N] = new int[M][N];
    // error: cannot convert ‘int* [3]’ to ‘int (*)[3]’ in assignment
    //data = this->pNum1;//data指针变量指向二维数组num的0行元素,也就是指针指针数组的第一个元素
    data = this->num;//data指针变量指向二维数组num的0行元素,也就是指针指针数组的第一个元素
    return data;
}

//显示二维数组
void Matrix::display()
{
    cout << "display():: ..." << endl;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << this->num[i][j] << " ";
        }
        cout << endl;
    }
}

//显示二维数组,参数是指向指针的指针
void Matrix::display(int **p)
{
    cout << "display():: 1 ..." << endl;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int ele = *(*(p + i) + j);//通过指针变量访问数组元素
            cout << ele << " ";
        }
        cout << endl;
    }
}

//显示二维数组,参数是指向一维数组的指针变量
void Matrix::display(int (*p)[N])
{
    cout << "display():: 2 ..." << endl;
    for(int i = 0; i < M; i++)
    {
        //cout << "p[" << i << "]=" << p[i] << endl;
        //cout << "p" << i << "=" << p + i << endl;
        for(int j = 0; j < N; j++)
        {
            //int ele = *(p[i] + j);
            int ele = *(*(p + i) + j);
            cout << ele << " ";
        }
        cout << endl;
    }
}

//求对角线元素之和
int Matrix::sum()
{
    cout << "sum():: ..." << endl;
    int sum = 0;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            //累加对角线元素
            if(i == j)
            {
                sum += this->num[i][j];
            }
        }
    }
    return sum;
}

//求对角线元素之和,参数是一个指针数组,和下面的指向指针的指针其实是一样的
//int Matrix::sum(int *p[M]);
//求对角线元素之和,参数是指向指针的指针变量
int Matrix::sum(int **p)
{
    cout << "sum():: 1 ..." << endl;
    int sum = 0;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
           int ele = *(*(p + i) + j);
           if(i == j)//累加对角线元素
           {
               sum += ele;
           }
        }
    }
    return sum;
}

//求对角线元素之和,参数是指向一维数组的指针变量
int Matrix::sum(int (*p)[N])
{
    cout << "sum():: 2 ..." << endl;
    int sum = 0;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int ele = *(p[i] + j);//获取num[i][j];
            //int ele = *(*(p + i) + j);//获取num[i][j];
            if(i == j)//累加对角线元素
            {
                sum += ele;
            }
        }
    }
    return sum;
}

//求对角线元素之和,参数是指向指针的指针变量,返回值是一个指向sum和的指针变量
int * Matrix::psum(int **p)
{
    cout << "psum():: ..." << endl;
    int sum = 0;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int ele = *(p[i] + j);//获取num[i][j];
            //int ele = *(*(p + i) + j);//获取num[i][j];
            if(i == j)//累加对角线元素
            {
                sum += ele;
            }
        }
    }
    //动态申请内存,并保存sum对象值
    int *s = new int(sum);
    return s;//返回保存sum结果的指针变量
}