#include "../include/Sort.h"

//在文件外实现函数 - 构造函数
Sort::Sort()
{
    cout << "Sout()构造函数" << endl;
}

//在文件外实现函数 - 析构函数
Sort::~Sort()
{
    cout << "~Sort()析构函数" << endl;
}

//在文件外实现函数 - input()函数
int **Sort::input(int number)
{
    cout << "input() ..." << endl;
    if(number > SIZE)
    {
        char buff[128];
        const char *err = buff;
        fprintf(stdout, "输入的数%d大于%d",number,SIZE);
        cout << err << endl;
        throw err;
    }else if(number <= 0)
    {
        throw number;
    }
    this->size = number;
    //pstr是一个指针数组,数组大小是size,数组中每一个元素是int *数据,可以保存元素的地址
    int *pstr[this->size];
 
    //为指针数组元素赋值
    for(int i = 0; i < this->size; i++)
    {
        pstr[i] = &ele[i];//将第i个整数的地址赋值给指针数组中的第i个元素
    }

    //int **p = pstr;//指向指针的指针变量p,p指向指针数组的首元素
    //动态申请内存,申请size个长度连续空间,每个空间保存int *类型数据,也就是每一个空间保存一个int数据的地址
    int **p = (int **) malloc(this->size * sizeof(int *));

    //输入数组元素,通过指针数组来实现
    for(int i = 0; i < this->size; i++)
    {
        cout << "第" << (i + 1) << "个元素:" ;
        //cin >> this->ele[i];
        cin >> *pstr[i];
    }

    //为连续空间赋值
    for(int i = 0; i < this->size; i++)
    {
        *(p+i) = pstr[i];//保存每一个元素的地址值
        //*(p+i) = &this->ele[i];//保存每一个元素的地址值
    }
    return p;
}

//在文件外实现函数 - sort()函数 - 获取一维数组元素 
int ** Sort::get()
{
    cout << "get() ..." << endl;
    return NULL;
}

//在文件外实现函数 - sort()函数 - 排序一维数组
int **Sort::sort(int **e)
{
    cout << "sort() ..." << endl;
    int *temp;//交换两个元素的地址
    for(int i = 0; i < this->size - 1; i++)
    {
        for(int j = i; j < this->size; j++)
        {
            //比较原始的值,交换指针的指向
            if(**(e + i) > **(e + j))
            {
                temp = *(e + i);//交换地址
                *(e + i) = *(e + j);
                *(e + j) = temp;
            }
        }
    }
    return e;
}

//在文件外实现函数 - display()函数 - 打印一维数组
void Sort::display(int ** e)
{
    cout << "display() ..." << endl;
    for(int i = 0; i < this->size; i++)
    {
        cout << **(e+i) << " ";
    }
    cout << endl;
}
