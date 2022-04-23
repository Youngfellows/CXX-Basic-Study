#include<iostream>

//返回引用
int & maxValue(int &a,int &b);//函数声明

//不应该返回局部变量的引用
// int & f2Error();

int main()
{
    int x,y;
    std::cout << "请输入两个数x,y: \n";
    std::cin >> x >> y;

    std::cout << "max = " << maxValue(x,y) << std::endl;
    
    //std::cout << "f2 = " << f2Error() << std::endl;

    return 0;
}

//返回引用
int & maxValue(int &a,int &b)
{
    if(a > b)
    {
        return a;
    }else
    {
        return b;
    }
}


//不应该返回局部变量的引用
// int & f2Error()
// {
//     int temp = 10086;
//     return temp;
// }
