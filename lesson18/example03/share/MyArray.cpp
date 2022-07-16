#include "../include/MyArray.h"

//在类外定义函数 - 构造函数
MyArray::MyArray()
{
    cout << "MyArray()无参数构造函数" << endl;
}

//在类外定义函数 - 构造函数
MyArray::MyArray(int size)
{
    cout << "MyArray()有参数构造函数" << endl;
    if(size <= 0)
    {
        throw size;
    }

    this->size = size;
    //动态申请内存
    if(this->ele != NULL)
    {
        delete [] this->ele;
    }
    this->ele = new int[size];
}

//在类外定义函数 - 析构函数
MyArray::~MyArray()
{
    cout << "~MyArray()析构函数" << endl;
    //释放内存
    delete [] this->ele;
}


//在类外定义函数 - set()函数
void MyArray::set()
{
    for(int i = 0; i < size; i++)
    {
        cout << "请输入" << i << "个元素:";
        cin >> this->ele[i];
    }
}

//在类外定义函数 - sort()函数
void MyArray::sort()
{
    //使用排序法实现
    int max = 0;
    for(int i = 0; i < size; i++)
    {
       max = i;
       for(int j = i + 1; j < size; j++)
       {
           if(this->ele[max] < this->ele[j])
           {
               max = j;
           }
       }

       if(max != i)
       {
           int temp = this->ele[i];
           this->ele[i] = this->ele[max];
           this->ele[max] = temp; 
       }
    }
}

//在类外定义函数 - maxEle()函数
int MyArray::maxEle()
{
    int max = this->ele[0];
    for(int i = 0; i < size; i++)
    {
        if(max < this->ele[i])
        {
            max = this->ele[i];
        }
    }
    return max;
}

//在类外定义函数 - display()函数
void MyArray::display()
{
    cout << endl;
    for(int i = 0; i < size; i++)
    {
        cout << this->ele[i] << " ";
    }
    cout << endl;
}
