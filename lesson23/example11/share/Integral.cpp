#include "../include/Integral.h"

//在类外定义函数 - 构造函数
Integral::Integral()
{
    cout << "Integral()构造函数" << endl;
}

//在类外定义函数 - 构造函数
Integral::Integral(int bottom,int top,int count)
{
    cout << "Integral()构造函数" << endl;
    if(bottom > top)
    {
        cout << "bottom > top" << endl;
        throw "bottom > top";
    }
    this->bottomLimit = bottom;
    this->topLimit = top;
    this->count = count;
}

//在类外定义函数 - 析构函数
Integral::~Integral()
{
    cout << "~Integral()析构函数" << endl;
}

//在类外定义函数 - calIntegral()函数 - 通过函数指针来实现接口回调
float Integral::calIntegral(FUNCTION func)//计算定积分
{
   cout << "calIntegral() ..." << endl; 
   cout << "h=" << this->topLimit << endl;
   cout << "x=" << this->bottomLimit << endl;

   int i;
   float x,h,s;
   h = (this->topLimit - this->bottomLimit) / float(this->count);
   x = this->bottomLimit;
   cout << "h=" << h << endl;
   cout << "x=" << x << endl;
   s = 0;
   
   for(i = 1; i < this->count; i++)
   {
       x = x + h;
       s = s + (*func)(x) * h;
   }
   return s;
}