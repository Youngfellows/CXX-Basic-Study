#include<iostream>

int main()
{
    //求菲波那契数列的前 n 项
    int n;//项数
    int i;//趟数
    long  int a0;//前一项
    long  int a1;//后一项

    a0 = 0;
    a1 = 1;
    std::cout << "请输入项数n:" << std::endl;
    std::cin >> n;

    std::cout << a0 << "\t" << a1 << "\t";
    for(i = 2;i <= n/2;i++)
    {
        a0 = a0 + a1;
        a1 = a1 + a0;

        std::cout << a0 << "\t" << a1 << "\t";

        //每行输出10个
        if(i % 5 == 0)
        {
            std::cout << std::endl;
        }
    } 

    if( n % 2 == 1)
    {
        std::cout << a0 + a1 << std::endl;//n为基数输出最后一项
    }
    std::cout <<  "\ni = " << i << std::endl;
    return 0;
}