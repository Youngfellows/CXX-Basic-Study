#include "../include/Wallet.h"


Wallet::Wallet()
{
    cout << "Wallet()构造函数" << endl;
}

Wallet::~Wallet()
{
    cout << "~Wallet()析构函数" << endl;
}

void Wallet::addMoney(int money)//添加钱
{
    
    for(int i = 0; i < money; i++)
    {
        //addMoney1();
        addMoney2();
    }   
}

long Wallet::getMoney()//获取钱
{
    return this->mMoney;
}

void Wallet::addMoney1()//添加钱
{
    mutexWallet.lock();//上锁
    this->mMoney++;
    mutexWallet.unlock();//解锁
}

void Wallet::addMoney2()//添加钱
{
    ////自动加锁&自动解锁
    std::lock_guard<std::mutex> *myLock = new std::lock_guard<std::mutex>(this->mutexWallet);
    this->mMoney++;//操作共享资源

    //释放内存
    delete myLock;
}