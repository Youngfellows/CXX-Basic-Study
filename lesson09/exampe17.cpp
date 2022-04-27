#include<iostream>
#include<cmath>

//点类
class Point 
{
    private: 
        double x;
        double y;

    public: 
        Point(double x,double y);
        ~Point();
        double getX();
        double getY();

        friend double distance(Point &a,Point &b);//声明类Point的友元函数
        friend double distance(Point *pa,Point &pb);//声明类Point的友元函数
};

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

double Point::getY()
{
    return this->y;
}

//定义类Point的友元函数
double distance(Point &a,Point &b)
{
    // std::cout << "b.getX() = " << b.getX() << std::endl;
    // std::cout << "a.getX() = " << a.getX() << std::endl;

    // std::cout << "b.getY() = " << b.getY() << std::endl;
    // std::cout << "a.getY() = " << a.getY() << std::endl;

    double dx = b.getX() - a.getX();
    double dy = b.getY() - a.getY();

    // std::cout << "dx = " << dx << std::endl;
    // std::cout << "dy = " << dy << std::endl;

    return sqrt(dx * dx + dy * dy);
}

double distance(Point *pa,Point *pb)
{
    // std::cout << "pb->getX() = " << pb->getX() << std::endl;
    // std::cout << "pa->getX() = " << pa->getX() << std::endl;

    // std::cout << "pb->getY() = " << pb->getY() << std::endl;
    // std::cout << "pa->getY() = " << pa->getY() << std::endl;

    double dx = pb->getX() - pa->getX();
    double dy = pb->getY() - pa->getY();

    // std::cout << "dx = " << dx << std::endl;
    // std::cout << "dy = " << dy << std::endl;

    return sqrt(dx * dx + dy * dy);
}

int main()
{
    //友元函数
    Point p1(3.4,7.8);//点p1
    Point p2(8.4,15.8);//点p2
    //std::cout << "p1.getX() = " << p1.getX() << std::endl;

    Point *p3 = new Point(3.4,7.8);//点p3
    Point *p4 = new Point(8.4,15.8);//点p4

    double d = distance(p1,p2);
    std::cout << "p1点到p2点的距离: " << d << std::endl;

    d = distance(p3,p4);
    std::cout << "p3点到p4点的距离: " << d << std::endl;
    delete p3;
    delete p4;

    return 0;
}