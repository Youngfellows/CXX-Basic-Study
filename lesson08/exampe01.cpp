#include<iostream>

//定义结构体
struct Weather
{
    double temp;//温度
    double wind;//风力
};

int main()
{
     //声明结构体类型变量
     Weather weather;
     weather.temp = 26.5;
     weather.wind = 4.5;

     std::cout << "温度: " << weather.temp << std::endl;
     std::cout << "风力: " << weather.wind << std::endl;

    return 0;
}
