#include<iostream>
#include<cmath>

//点类
class Point
{
    private: 
        double x;
        double y;

    public: 
        Point(double px,double py);
        ~Point();
        double getX();
        double getY();
};

//距离类
class Distance
{
    private: 
        Point p1;//p1点
        Point p2;//p2点
        double distance;//距离

    public: 
        Distance(Point p1,Point p2);
        double getDistance();//获取距离
};

Distance::Distance(Point pa,Point pb):p1(pa),p2(pb)//初始化列表
{
    double dx = p1.getX() - p2.getX();
    double dy = p1.getY() - p2.getY();
    distance = sqrt(dx * dx + dy * dy);
}

double Distance::getDistance()
{
    return distance;
}


Point::Point(double px,double py)
{
    std::cout << "Point()构造函数" << std::endl;
    this->x = px;
    this->y = py;
}

Point::~Point()
{
    std::cout << "~Point()析构函数" << std::endl;
}

double Point::getX()
{
    return this->x;
}

double  Point::getY()
{
    return this->y;
}

int main()
{
    //类包含
    //用类包含求计算两点之间的距离
    Point p1(13.4,89.7);
    Point p2(23.4,129.7);

    Distance distance(p1,p2);
    std::cout << "p1点到p2点之间的距离是: " << distance.getDistance() << std::endl;

    return 0;
}