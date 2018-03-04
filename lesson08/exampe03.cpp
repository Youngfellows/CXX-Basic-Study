#include<iostream>

//声明结构体
struct Weather
{
    double temp;//温度
    double wind;//风力
};

void test1(Weather w);//传值
void test2(Weather &w);//传引用
void test3(Weather *w);//传地址

int main()
{
    Weather day;
    day.temp = 23.5;//温度
    day.wind = 5.5;//风力

    std::cout << "1.温度: " << day.temp << std::endl;
    std::cout << "1.风力: " << day.wind << std::endl << std::endl;

    //test1(day);//传值
    // test2(day);//传引用
    test3(&day);//传地址

    std::cout << "3.温度: " << day.temp << std::endl;
    std::cout << "3.风力: " << day.wind << std::endl << std::endl;


    return 0;
}

void test1(Weather w)//传值
{
    w.temp = 18.0;
    w.wind = 7.0;

    std::cout << "2.温度: " << w.temp << std::endl;
    std::cout << "2.风力: " << w.wind << std::endl << std::endl;
}

void test2(Weather &w)
{
      w.temp = 18.0;
      w.wind = 7.0;

      std::cout << "2.温度: " << w.temp << std::endl ;
      std::cout << "2.风力: " << w.wind << std::endl << std::endl;
}

void test3(Weather *w)
{
  w->temp = 18.0;
  w->wind = 7.0;

  std::cout << "2.温度: " << w->temp << std::endl;
  std::cout << "2.风力: " << w->wind << std::endl << std::endl;
}
