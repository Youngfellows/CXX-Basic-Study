#include "../include/Product.h"

//对静态数据成员进行初始化
float Product::discount = 0.05;
int Product::sum = 0;
int Product::count = 0;

//在类外定义函数 - 构造函数
Product::Product()
{
    cout << "Product()构造函数" << endl;
}

//在类外定义函数 - 构造函数
Product::Product(int num,int quantity,float price)
{
    cout << "Product()有参数构造函数" << endl; 
    this->num = num;
    this->quantity = quantity;
    this->price = price;
}

//在类外定义函数 - 析构函数
Product::~Product()
{
    cout << "~Product()析构函数" << endl;
}


//在类外定义函数 - total()函数
void Product::total()
{
    float rate = 1.0;//打折
    if(this->quantity > 10)
    {
        rate = 0.98 * rate;
    }
    sum = sum + this->quantity * price * rate *(1 - discount);//累计销售款
    count = count + this->quantity;//累计销售件数
}


//在类外定义函数 - average()函数
float Product::average()
{
    return sum / count;
}


//在类外定义函数 - display()函数
void Product::display()
{
    cout << "销售总件数:" << count << endl;
    cout << "总销售价:" << sum << endl;
    cout << "平均售价:" << average() << endl;
}
