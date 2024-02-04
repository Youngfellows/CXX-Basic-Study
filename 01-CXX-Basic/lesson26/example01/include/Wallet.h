#ifndef WALLET_H
#define WALLET_H

#include "./Global.h"

//定义类Wallet - 钱包
class Wallet
{
    private:
        long mMoney = 0;//钱
        mutex mutexWallet;//互斥量

    public:
        Wallet();
        ~Wallet();
        void addMoney(int money);//添加钱
        long getMoney();//获取钱

    private:
        void addMoney1();//添加钱
        void addMoney2();//添加钱
};

#endif