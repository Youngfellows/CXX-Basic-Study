#include<iostream>
#include<cmath>

void prime();//函数声明

int main()
{
    prime();

    return 0;
}


//函数定义
void prime()
{
    //找出100—200之间的所有素数
    long m;
    int i;
    int k;//素数的个数


    std::cout << "100到200之间的素数是: \n";
    for(m = 101; m <= 200; m += 2)
    {
        double sqrtm = std::sqrt(double(m));
        for(i = 2; i <= sqrtm; i++)
        {
            if(m % i ==0)
            {
                break;
            }
        }
        
        if(sqrtm < i)//素数
        {
            std::cout << m << "\t" ;
            k++;//统计素数的个数           
        }

        if(k % 10 == 0)
        {
            std::cout << std::endl;//每行显示10个
        }
        
    }
    std::cout << std::endl;
}