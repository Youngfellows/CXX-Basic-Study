#include<iostream>
#include<cmath>
#include<iomanip>

int main()
{
    //求一元二次方程的根
    //ax^2 + bx + c = 0;
    double a,b,c;
    double d;//判别式
    double x1,x2;//根1和根2
    double rp;//实部
    double ip;//虚部

    std::cout << "请输入一元二次方程的系数:" << std::endl;
    std::cout << "a: ";
    std::cin >> a;

    std::cout << "b: ";
    std::cin >> b;

    std::cout << "c: ";
    std::cin >> c;

    std::cout << "一元二次方程: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;


    std::cout << std::setprecision(7) << std::fabs(a) << " " << 1e-8 << std::endl;

    if (std::fabs(a) <= 1.0e-15) {
      std::cout << "不是一元二次方程\n";
    }else
    {
          d = b * b - 4 * a *c;//判别式
          if(std::fabs(d) <= 1.0e-15)
          {
            //d = 0
            std::cout << "有两个相同的实根: x1,x2 = " << -b/(2*a) <<std::endl;
          //}else if(std::fabs(d) > 1.0e-15)
          }
          else if(d > 0.00000001)
          {
            //d > 0
            x1 = (-b + std::sqrt(d))/(2*a);
            x2 = (-b - std::sqrt(d))/(2*a);
            std::cout << "有两个不同的实根: x1 = " << x1 << " ,x2 = " << x2 << std::endl;
          }else
          {
              rp = -b/(2*a);
              ip = std::sqrt(-d)/(2*a);
              std::cout << "有两个不同的共呃复根: x1 = " << rp << " + " << ip << "i" << " ,x2 = " << rp << " - " << ip << std::endl;
          }
    }

    return 0;
}
