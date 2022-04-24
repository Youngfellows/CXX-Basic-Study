#include<iostream>
#include<iomanip>

int main()
{
    //计算货物运费
    double tCosts;//运输费用
    double uPrice;//单价
    double weight;//重量
    double distant;//距离

    std::cout << "请输入货物重量(吨): ";
    std::cin >> weight;

    std::cout << "请输入距离(km): ";
    std::cin >> distant;

    //判断单价
    if(distant < 100)
    {
      uPrice = 30;
    }else if(distant >= 100 && distant < 200)
    {
      uPrice = 27.5;
    }else if(distant >= 200 && distant < 300)
    {
      uPrice = 25;
    }else if (distant >= 300 && distant < 400) {
      uPrice = 22.5;
    }else
    {
      uPrice = 20;
    }

    //费用
    tCosts = uPrice * weight * distant;

    std::cout << "运输费用: " << std::setprecision(6) << tCosts << '$' << std::endl;

    return 0;
}
