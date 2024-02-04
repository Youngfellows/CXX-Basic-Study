#include<iostream>
#include<iomanip>

int main()
{
    //求m的n次方

    int m;//底数
    int n;//幂次
    double s = 1;//结果
    int i = 0;//循环次数

    std::cout << "请输入m和n: " << std::endl;
    std::cin >> m >> n;
 

    while(i < n)
    {
        s = s * m;
        i++;   
    }

    std::cout << m << "的" << n << "次方是" << s << std::endl;
    return 0;
}
