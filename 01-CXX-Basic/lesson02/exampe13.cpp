#include<iostream>
#include<cmath>

void prime1();//函数声明
void prime2();//
int main()
{
    //判断是否是素数
    //prime1();
    prime2();
   
    return 0;
}

//函数定义
void prime2()
{
   int i;
   long m;

   std::cout << "请输入一个数: ";
   std::cin >> m;

   double sqrtm = std::sqrt(double(m));
   std::cout << "sqrtm = " << sqrtm << std::endl;


   for(i=2;i<sqrtm;i++)
   {
       if(m % i == 0)
       {
           break;
       }
   }  

   std::cout << "i = " << i << std::endl;

   if(sqrtm < i)
   {
       std::cout << m << "是素数" << std::endl;
   }else
   {
       std::cout << m  << "不是素数" << std::endl;
   }
}

//函数定义
void prime1()
{
 //判定是否是素数
   int i;
   long m;

   std::cout << "请输入一个数:";
   std::cin >> m;

   for(i=2;i<m;i++)
   {
       if(m % i == 0)
       {
           break;
       }
   }  

   std::cout << "i = " << i << std::endl;

   if(m == i)
   {
       std::cout << m << "是素数" << std::endl;
   }else
   {
       std::cout << m  << "不是素数" << std::endl;
   }
}


