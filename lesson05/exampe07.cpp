#include<iostream>
#include<iomanip>

void printArray();//以下标方式访问数组元素
void printArray2();//以指针方式访问二维数组
void printArray3();//以指针方式访问二维数组

int main()
{
    //以下标方式访问数组元素
    //printArray();

    //以指针方式访问二维数组
    printArray2();

    //以指针方式访问二维数组
    printArray3();

    return 0;
}

//以指针方式访问二维数组
void printArray3()
{
   int a[3][4] = {{11,22,33,44},{55,66,77,88},{99,45,78,94}};//定义二维数组
   int *p;//int *型指针变量p
   int k = 0;

   std::cout << "\n1以指针方式访问二维数组\n";
   //首元素地址/尾元素地址
   for(p = a[0];p < a[0] + 12; p++)
   {
      std::cout << *p << " ";
      k++;
      if(k % 4 == 0)
      {
        std::cout << std::endl;
      }
   }

   k = 0;
   std::cout << "\n2以指针方式访问二维数组\n";
   for(p = *a;p < *a + 12; p++)
   {
     std::cout << *p << " ";
     k++;
     if(k % 4 == 0)
     {
       std::cout << std::endl;
     }
   }

   std::cout << "\n3以指针方式访问二维数组\n";
   for(int i = 0;i < 3;i++)
   {
     for(int j = 0;j < 4;j++)
     {
       std::cout << *((*a + i)+j) << " ";
     }
     std::cout << std::endl;
   }

   std::cout << "\n4以指针方式访问二维数组\n";
   for(int i = 0;i < 3;i++)
   {
     for(int j = 0;j < 4;j++)
     {
       //std::cout << *((*a + i)+j) << " ";
       std::cout << *(a[i] + j) << " ";
     }
     std::cout << std::endl;
   }



}

//以指针方式访问二维数组
void printArray2()
{
   int a[3][4] = {{11,22,33,44},{55,66,77,88},{99,45,78,94}};//定义二维数组

   std::cout << "a = " << a << std::endl;
   std::cout << "*a = " << *a << std::endl;

   std::cout << "1打印数组元素的地址: " << std::endl;
   for(int i = 0; i < 3;i++)
   {
     for(int j = 0; j < 4;j++)
     {
       std::cout  <<  &a[i][j] << " ";//二维数组元素的地址
     }
     std::cout << std::endl;
   }

   std::cout << std::endl;
   std::cout << "2打印数组元素的地址: " << std::endl;
   for(int i = 0; i < 3;i++)
   {
     for(int j = 0; j < 4;j++)
     {
       //std::cout  <<  &a[i][j] << " ";
       std::cout << a[i] + j << " ";//二维数组元素的地址
     }
     std::cout << std::endl;
   }

   std::cout << "打印数组元素的值: " << std::endl;
   for(int i = 0; i < 3;i++)
   {
     for(int j = 0; j < 4;j++)
     {
       //std::cout  <<  &a[i][j] << " ";
       std::cout << *(a[i] + j) << " ";//二维数组元素的值
     }
     std::cout << std::endl;
   }



   std::cout << std::endl;
   std::cout << "3打印数组元素的地址: " << std::endl;
   for(int i = 0; i < 3;i++)
   {
     //std::cout << *(a+i) << std::endl;//一维数组的首地址
     for(int j = 0; j < 4;j++)
     {
       //std::cout  <<  &a[i][j] << " ";
       //std::cout << a[i] + j << " ";
       std::cout << *(a+i) + j << " ";//二维数组元素的地址
     }
     std::cout << std::endl;
   }

   std::cout << "3打印数组元素的值: " << std::endl;
   for(int i = 0; i < 3;i++)
   {
     //std::cout << *(a+i) << std::endl;//一维数组的首地址
     for(int j = 0; j < 4;j++)
     {
       //std::cout  <<  &a[i][j] << " ";
       //std::cout << a[i] + j << " ";
       std::cout << *(*(a+i) + j) << " ";//二维数组元素的地址
     }
     std::cout << std::endl;
   }

}

//以下标方式访问数组元素
 void printArray()
 {
   int a[3][4] = {{11,22,33,44},{55,66,77,88},{99,45,78,94}};//定义二维数组

   for(int i=0; i < 3; i++)
   {
     for(int j=0;j < 4;j++)
     {
       std::cout << std::setw(5) << a[i][j];
     }
     std::cout << std::endl;
   }

 }
