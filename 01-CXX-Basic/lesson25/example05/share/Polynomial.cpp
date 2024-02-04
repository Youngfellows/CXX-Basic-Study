#include "../include/Polynomial.h"

Polynomial::Polynomial()
{
    cout << "Polynomial()构造函数" << endl;
    cout << "请输入n:";
    cin >> this->n;
    cout << "请输入x:";
    cin >> this->x;
}

Polynomial::~Polynomial()
{
    cout << "~Polynomial()析构函数" << endl;
}

float Polynomial::fx()
{
    cout << "fx()函数" << endl;
    return this->fx(this->n,this->x);
}

float Polynomial::fx(int n,int x)
{
    cout << "fx(" << n << "," << x << ")函数" << endl;
    if(n == 0)
    {
        return 1;
    }else if(n == 1)
    {
        return x;
    }else{
        return ((2 * n - 1) * x - fx(n - 1,x) - (n - 1) * fx(n - 2,x))/n;
    }
}