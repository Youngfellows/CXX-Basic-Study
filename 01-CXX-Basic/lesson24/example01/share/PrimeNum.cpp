#include "../include/PrimeNum.h"

//在类外实现函数 - 构造函数
PrimeNum::PrimeNum()
{
    cout << "PrimeNum()构造函数" << endl;
    cout << "PrimeNum():: 1,this->number:" << this->number << endl;
    cout << "PrimeNum():: 1,this->pNum:" << this->pNum << endl;
    
    //重点: 为指针变量赋值,否则指针变量的值数组都是为0
    this->pNum = this->number;//使指针变量pNum指向数组number首元素
    for(int i = 1; i < SIZE; i++)
    {
        // this->number[i] = i;//为数组元素赋值
        // *(this->pNum + i) = this->number[i];
        //cout << i << endl;
        *(this->pNum + i) = i;//为数组元素赋值
    }
   
    cout << "PrimeNum():: 2,this->number:" << this->number << endl;
    cout << "PrimeNum():: 2,this->pNum:" << this->pNum << endl;
}

//在类外实现函数 - 析构函数
PrimeNum::~PrimeNum()
{
    cout << "~PrimeNum()析构函数" << endl;
    //释放内存,动态创建的数组
    if (this->pPrime != NULL)
    {
        cout << "释放 this->pPrime 动态指针所指向的内存 ..." << endl;
        delete [] this->pPrime;
    }   
}


//在类外实现函数 - prime()函数
int * PrimeNum::prime()
{
    cout << "prime():: 求素数,从2开始,依次除以后面的数,把能整除的非素数挖掉(设置为0),剩下的就是素数 ..." << endl;
    //cout << "1,第一个:" << *(this->pNum + 1) << endl;
    *(this->pNum + 1) = 0;//1不是素数,先挖掉
    //cout << "2,第一个:" << *(this->pNum + 1) << endl;
    for(int i = 2; i < sqrt(SIZE - 1); i++)
    {
       for(int j = i + 1; j < SIZE; j++)
       {
           int a = *(this->pNum + i);
           int b = *(this->pNum + j);
           //cout << "i,(this->pNum + "<< i << ")=" << a << ",";
           //cout << "j,(this->pNum + "<< j << ")=" << b << endl;
           if((a != 0) && (b != 0))//没有被挖掉
           {    
               if( (b % a ) == 0)//能被后面的数整除,挖掉
               {
                   *(this->pNum + j) = 0; //挖掉非素数
               }
           }
       }
       //cout << endl;
    }
    //过滤获取素数数组元素,并返回
    return this->filter();
}

//在类外实现函数 - filter()函数
int * PrimeNum::filter()
{
    cout << "filter():: ..." << endl;
    //动态创建数组
    this->pPrime = new int[SIZE];
    this->count = 0;//统计素数个数
    for(int i = 1; i < SIZE; i++)
    {
        int num = *(this->pNum + i);
        if( num != 0)//是素数
        {
            *(this->pPrime + this->count) = num;//把素数添加到数组中
            this->count++;
        }
    }
    return this->pPrime;
}

//在类外实现函数 - prime()函数
void PrimeNum::display()
{
    cout << "display():: ..." << endl;
    for(int i = 1; i < SIZE; i++)
    {
        cout.width(4);
        cout << *(this->pNum + i) << " ";
        if ((i % 10) == 0 )
        {
            cout << endl;
        }
    }
    cout << endl;
}

//在类外实现函数 - display()函数 - 打印素数
void PrimeNum::display(int *pPrime)
{
    cout << "display():: ...打印素数..." << endl;
    if(this->count != 0)
    {
        for(int i = 0; i < this->count; i++)
        {
            cout.width(4);
            cout << *(this->pPrime + i) << " ";
            if((i + 1) % 10 == 0)
            {
                cout << endl;
            }
        }
    }
    cout << endl;
}
