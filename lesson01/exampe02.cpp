#include<iostream>

#define PI (3.1415926)
//定义圆
class Circle
{
	//const double PI = 3.1415926;//圆周率
	private:
		double radius;//半径

	public:
		//设置半径
		void setRadius(double r)
		{
			radius = r;
		}

		//获取圆的半径
		double getRadius()
		{
			return radius;
		}
		//求周长
		double getGirth()
		{
			return 2*PI*radius;
		}
		
		//求面积
		double getArea()
		{
			return PI*radius*radius;
		}

		
};

int main()
{
	//用面向对象方法变成，求圆的周长和面积
	Circle circleA,circleB;
	double ra,rb;
	std::cout << "请输入元A的半径: ";
	std::cin >> ra; 
	circleA.setRadius(ra);//设置半径
	
	std::cout << "请输入圆B的半径: ";
	std::cin >> rb;
	circleB.setRadius(rb);

	
	//计算
	std::cout << "圆A的半径:" << circleA.getRadius() << std::endl;
	std::cout << "圆A的周长:" << circleA.getGirth() << std::endl;
	std::cout << "圆A的面积:" << circleA.getArea() << "\n\n";

	//计算
	std::cout << "圆B的半径:" << circleB.getRadius() << std::endl;
	std::cout << "圆B的周长:" << circleB.getGirth() << std::endl;
	std::cout << "圆B的面积:" << circleB.getArea() << std::endl;

	return 0;
}
























