#include "../include/Polynomial2.h"

Polynomial2::Polynomial2()
{
    cout << "Polynomial2()构造函数" << endl;
    cout << "请输入n:";
    cin >> this->n;
}

Polynomial2::~Polynomial2()
{
    cout << "~Polynomial2()析构函数" << endl;
}

float Polynomial2::fn()
{
    cout << "fn()函数" << endl;
    return this->fn(this->n);
}

float Polynomial2::fn(int n)
{
    cout << "fn(" << n << ")函数" << endl;
    if(n == 1)
    {
        return 1;
    }else{
        return (n * n + fn(n - 1));
    }
}