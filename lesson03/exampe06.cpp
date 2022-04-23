#include<iostream>

//函数声明:返回指针
int *maxValue(int *,int *);

int main()
{
    //返回指针
    int x,y;
    std::cout << "请输入两个数x,y:" << std::endl;
    std::cin >> x >> y;

    std::cout << "前: &x = " << &x << " ,&y = " << &y << std::endl;
    int max = *maxValue(&x,&y);

    std::cout << "maxVlue = " << maxValue(&x,&y) << " ,max = " << max << "\n";

    return 0;
}

//函数定义
int *maxValue(int *a,int *b)
{
    if(*a > *b)
    {
        return a;
    }else
    {
        return b;
    }
}