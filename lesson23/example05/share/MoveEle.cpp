#include "../include/MoveEle.h"

//在类外定义函数 - 构造函数
MoveEle::MoveEle()
{
    cout << "MoveEle()构造函数" << endl;
}

//在类外定义函数 - 析构函数
MoveEle::~MoveEle()
{
    cout << "~MoveEle()析构函数" << endl;
}

//在类外定义函数 - inputEle()函数
void MoveEle::inputEle(int n)
{
    cout << "inputEle()函数" << endl;
    this->count = n;
    if(n > SIZE)
    {
        //太长了,抛出异常
        throw n;
    }

    cout << "请输入" << n << "个元素" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "number[" << i << "]=" ;
        cin >> number[i];
    }
}

//在类外定义函数 - display()函数
void MoveEle::display()
{
    cout << "display()函数" << endl;
    for(int i = 0; i < this->count; i++)
    {
        cout << number[i] << " ";
    }
    cout << endl;
}

//在类外定义函数 - move()函数 - 是循环后移一次的函数
void MoveEle::move(int m)
{
    cout << "move()函数" << endl;
    int *array = number;
    int *p;
    int endEle;//最后一个元素
    endEle = *(array + this->count - 1);
    cout << "endEle=" << endEle << endl;
    for(p = array + this->count -1; p > array; p--)
    {
        *p = *(p - 1);
    }
    *array = endEle;
    m--;
    if(m > 0)
    {
        //递归调用
        move(m);
    }
} 
