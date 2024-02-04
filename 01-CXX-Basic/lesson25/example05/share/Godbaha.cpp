#include "../include/Godbaha.h"

//在类外实现函数 - 构造函数
Godbaha::Godbaha()//构造函数
{
    cout << "Godbaha()构造函数" << endl;
    cout << "请输入一个大于6的整数:";
    cin >> this->num;
}

//在类外实现函数 - 析构函数
Godbaha::~Godbaha()
{
    cout << "~Godbaha()析构函数" << endl;
}

//在类外实现函数 - 获取偶数
int Godbaha::getNum()
{
    return this->num;
}

//在类外实现函数 - 素数a
int Godbaha::getPrimeA()
{
    return this->primeA;
}

//在类外实现函数 - 素数B
int Godbaha::getPrimeB()
{
    return this->primeB;
}

//判断一个数是否是素数
bool Godbaha::prime(int a)
{
    int i;
    int k = sqrt(a);
    bool flag = true;
    for(i = 2; i <= k; i++)
    {
        if((a / i) == 0)
        {
            flag = false;
            break;
        }
    }

    return flag;
}

//获取素数之和
int * Godbaha::get()
{
    int a = 0;
    int b = 0;
    for(a = 3; a <= this->num / 2; a += 2)
    {
        if(prime(a))//a是素数
        {
            this->primeA = a;
            cout << a << "是素数" << endl;
            b = this->num - a;                  
            if(prime(b))
            {
                this->primeB = b;
                cout << b << "是素数" << endl;
            }
        }
    }
    
    //动态申请内存,保存数据
    // int data[2] = new int[2];
    // data[0] = a;
    // data[1] = b;
    int *data = (int *)malloc(SIZE_PRIME * sizeof(int));
    *(data + 0) = this->primeA;
    *(data + 1) = this->primeB;

    return data;
}