#include<iostream>

//基类1
class Shape
{
    protected: 
        double width;//宽
        double heigth;//高

    public: 
        Shape();
        Shape(double w,double h);
        ~Shape();
        void setWidth(double w);
        void setHeigth(double h);
        double getWidth();
        double getHeigth();
};

//基类2 //花费
class PaintCost
{
    public: 
        double getCost(double area);//花费
};

double PaintCost::getCost(double area)
{
    return area * 70;
}

//派生类,多继承
class Rectangle : public Shape,public PaintCost
{
    public: 
        double getArea();//获取面积
};

Shape::Shape()
{
    this->width = 0;
    this->heigth = 0;
}

Shape::Shape(double w,double h)
{
    this->width = w;
    this->heigth = h;
}

Shape::~Shape()
{
    std::cout << "析构函数" << std::endl;
}

void Shape::setWidth(double w)
{
    this->width = w;
}

void Shape::setHeigth(double h)
{
    this->heigth = h;
}

double Shape::getWidth()
{
    return this->width;
}

double Shape::getHeigth()
{
    return this->heigth;
}


double Rectangle::getArea()
{
    std::cout << "宽: " << this->width << " ,高: " << this->heigth << std::endl;
    return this->heigth * this->width;
}

int main()
{
    //多继承
    Rectangle *rectangle = new Rectangle();
    rectangle->setWidth(8.9);//设置宽
    rectangle->setHeigth(5.0);//设置高

    double area = rectangle->getArea();
    std::cout << "面积: " << area << std::endl;

    double cost = rectangle->getCost(area);
    std::cout << "花费: " << cost << std::endl;

    return 0;
}