#include "../include/SelectSort.h"

//在类外实现函数 - 构造函数
SelectSort::SelectSort()
{
    cout << "SelectSort()无参数构造函数" << endl;
}

//在类外实现函数 - 析构函数
SelectSort::~SelectSort()
{
    cout << "~SelectSort()析构函数" << endl;
}

//在类外实现函数 - input()函数
int *SelectSort::input(int size)
{
    if(size > MAX_SIZE)
    {
        char buff[128];
        char *err = buff;
        sprintf(err, "输入的数%d大于%d",size,MAX_SIZE);
        cout << err << endl;
        throw err;
    }else if(size <= 0)
    {
        throw size;
    }  
    this->size = size;
    return this->input();//调用input()输入函数
}

//在类外实现函数 - input()函数
int * SelectSort::input()
{
    cout << "input():: ... " << endl;
    cout << "输入" << this->size << "个整数" << endl;
    //使指针变量pNum指向数组元素
    this->pNum = this->number;
    for(int i = 0; i < this->size; i++)
    {
        cout << "第" << (i + 1) << "个整数:";
        //cin >> this->number[i];//输入数组元素的值
        cin >> *(this->pNum + i);//通过指针变量间接为数组元素赋值
    }
    //返回指向数组对象的指针
    return this->pNum;
}

//在类外实现函数 - display()函数
void SelectSort::display()
{
    cout << "display():: ... " << endl;
    for(int i = 0; i < this->size; i++)
    {
        cout << *(this->number + i) << " ";
    }
    cout << endl;
}

//在类外实现函数 - display()函数
void SelectSort::display(int *num)
{
    cout << "display():: -^_^- " << endl;
    for(int i = 0; i < this->size; i++)
    {
        cout << *(num + i) << " ";
    }
    cout << endl;
}

//在类外实现函数 - sort()函数 - 使用冒泡排序法
int * SelectSort::sort(int *num)
{
    cout << "sort():: ..." << endl;
    int temp;//临时变量
    for(int i = 0; i < this->size - 1; i++)
    {
        int min = i;//每一轮的第一个元素,最小值元素,依次与后面的数比较并交换
        for(int j = i + 1; j < this->size; j++)
        {
            int a = *(this->pNum + min);
            int b = *(this->pNum + j);

            cout << "i:" << i << "j:" << j << ",min:" << min << ",a:" << a << ",b:" << b << endl;
            if(a > b)
            {
                //记录最小值元素
                min = j;
                cout << "change,min=" << min << endl;
            }
        }
        //交换元素
        if(min != i)
        {
            //把最小值拿到前面
            temp = *(this->pNum + i);
            *(this->pNum + i) = *(this->pNum + min);
            *(this->pNum + min) = temp;
        }
        this->display();
    }
    return this->pNum;
}

//在类外实现函数 - sort()函数 - 使用选择排序法
int * SelectSort::selectSort(int *num)
{
    cout << "selectSort():: ..." << endl;
    int temp;//临时变量
    for(int i = 0; i < this->size - 1; i++)
    {
        int min = i;//每一轮的第一个元素,最小值元素,依次与后面的数比较并交换
        for(int j = i + 1; j < this->size; j++)
        {
            int a = *(this->pNum + min);
            int b = *(this->pNum + j);

            cout << "i:" << i << "j:" << j << ",min:" << min << ",a:" << a << ",b:" << b << endl;
            if(a > b)
            {
                cout << "change,min=" << min << endl;
                //交换元素,把最小值拿到前面
                temp = *(this->pNum + min);
                *(this->pNum + min) = *(this->pNum + j);
                *(this->pNum + j) = temp;
            }
        }
        this->display();
    }
    return this->pNum;
}