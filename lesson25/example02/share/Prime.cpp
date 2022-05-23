#include "../include/Prime.h"

//在类外实现函数 - 构造函数
Prime::Prime()
{
    cout << "Prime()构造函数" << endl;
    cout << "请输入一个整数:";
    cin >> this->num;
}

//在类外实现函数 - 构造函数
Prime::~Prime()
{
    cout << "~Prime()析构函数" << endl;
}

//在类外实现函数 - prime()函数
bool Prime::prime()
{
    cout << "prime():: ..." << endl;
    bool flag = true;//先假设是素数
    for(int i = 2; i < this->num / 2; i++)
    {
        if(this->num % i == 0)//能被后面的数整除,不是素数
        {
            flag = false;//不是素数
            break;
        }
    }
    return flag;
}

//在类外实现函数 - getNum()函数
int  Prime::getNum()
{
    cout << "getNum():: ..." << endl;
    return this->num;
}
