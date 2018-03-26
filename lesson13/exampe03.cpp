#include<iostream>

template<typename T>
T max(const T a,const T b)
{
    return a > b? a: b;
}

//重载函数模板
template<typename T>
T max(const T a,const T b,const T c)
{
    T t;
    t = max(a,b);
    return max(t,c);
}

//重载函数模板
int max(const int a,const char b)
{
    return a > b? a: b;
}


int main()
{
    //重载函数模板
    std::cout << "max(3,'a') is " << max(3,'a') << std::endl;
    std::cout << "max(9.3,0.78) is " << max(9.3,0.78) << std::endl;
    std::cout << "max(7,9) is " << max(7,9) << std::endl;
    std::cout << "max(89,74,38) is " << max(89,74,387) << std::endl;

    return 0;
}