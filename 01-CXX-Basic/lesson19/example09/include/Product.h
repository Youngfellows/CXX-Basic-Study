#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>

using namespace std;

//定义Product类 - 销售商品
class Product
{
    private:
        int num;//售货员号
        int quantity;//每个售货员销货件数
        float price;//销货单价

        //静态变量,类共享的
        static float discount;//商店统一折扣
        static int count;//总销售件数
        static int sum;//总销售款
    
    public:
        Product();//构造函数
        Product(int num,int quantity,float price);//构造函数
        ~Product();//析构函数
        void total();//计算总款
        static float average();//平均价
        static void display();//显示
};

#endif