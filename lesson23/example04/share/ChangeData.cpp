#include "../include/ChangeData.h"

//在类外实现函数 - 构造函数
ChangeData::ChangeData()
{
    cout << "ChangeData()构造函数" << endl;
}

//在类外实现函数 - 析构函数
ChangeData::~ChangeData()
{
    cout << "~ChangeData()析构函数" << endl;
}

//在类外实现函数 - input()函数
void ChangeData::input()
{
    cout << "input() ..." << endl;
    cout << "请输入" << SIZE << "个数" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << "number[" << i << "]=";
        cin >> this->number[i];
    }
}

//在类外实现函数 - display()函数
void ChangeData::display()
{
    cout << "display() ..." << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << this->number[i] << " ";
    }
    cout << endl;
}

//在类外实现函数 - changeMax()函数
void ChangeData::changeMax()
{
    cout << "changeMax() ..." << endl;
    int *p;//int *型指针变量
    int *max;//最大值元素指针变量
    int temp;//临时变量
    max = this->number;//默认第一个元素最大
    cout << "1,max=" << *max << endl;
    for(p = number + 1; p < number + SIZE; p++)
    {
        if(*p > *max)
        {
            max = p;//将最大值地址赋值给max
        }
    }
    //交换最大值和第一个元素位置
    if(*max != this->number[0])
    {
        temp = *max;
        *max = this->number[0];
        this->number[0] = temp;
    }

}

//在类外实现函数 - changeMin()函数
void ChangeData::changeMin()
{
    cout << "changeMin() ..." << endl;
    int *p;//int *型指针变量
    int *min;//最小值元素指针变量
    int temp;//临时变量
    min = this->number;//默认第一个一个元素最小
    cout << "1,max=" << *min << endl;
    for(p = number + 1; p < number + SIZE; p++)
    {
        if(*p < *min)
        {
            min = p;//将最大值地址赋值给max
        }
    }
    //交换最大值和第一个元素位置
    if(*min != this->number[SIZE - 1])
    {
        temp = *min;
        *min = this->number[SIZE - 1];
        this->number[SIZE - 1] = temp;
    }
}

