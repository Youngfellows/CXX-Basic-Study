#include<iostream>

//抽象类: 图形
class Figure
{
    protected: 
        double x;//x位置
        double y;//y位置

    public: 
        Figure(double px,double py);//设置位置
        virtual ~Figure();
        virtual double area() = 0;//求面积(抽象函数)
};

//矩形  继承自 图形
class Square: public Figure
{
    public: 
        Square(double px,double py);
        double area();//求面积(具体实现)
};

//三角形
class Triangle : public Figure
{
    public: 
        Triangle(double px,double py);
        double area();//求面积(具体实现)
};

//圆形
class Circle : public Figure
{
    protected:
        double r;//半径

    public: 
        Circle(double px,double py,double r);
        double area();//求面积(具体实现)
};


//方法定义--基类
Figure::Figure(double px,double py)
{
    std::cout << "Figure()有参构造函数" << std::endl;
    this->x = px;
    this->y = py;
}

Figure::~Figure()
{
    std::cout << "~Figure()析构函数" << std::endl;
}

//定义方法--矩形
Square::Square(double px,double py):Figure(px,py)
{
    std::cout << "Square()有参构造函数" << std::endl;
}

double Square::area()
{
    return this->x * this->y;
}

//定义方法--三角形
Triangle::Triangle(double px,double py) : Figure(px,py)
{
    std::cout << "Triangle()有参构造函数" << std::endl;
}

double Triangle::area()
{
    return (this->x * this->y) /2;
}

//定义方法--圆形、
Circle::Circle(double px,double py,double r):Figure(px,py)
{
    std::cout << "Circle()有参构造函数" << std::endl;
    this->r = r;
}

const double PI = 3.1415926;//圆周率 - 常量
double Circle::area()
{
        return PI * this->r * this->r;
}



int main()
{
    //纯虚函数和抽象类
    Figure *figure;//基类指针变量
    // Triangle triangle(10,5);//三角形
    // Square squre(10,5);//矩形
    // Circle circle(10,5);

    Triangle *triangle = new Triangle(10,5);//三角形
    Square *squre = new Square(10,5);//矩形
    Circle *circle = new Circle(10,5,1);//圆形

    double area;//面积
    // figure = &triangle;//基类指针指向三角形
    figure = triangle;//基类指针指向三角形
    area  = figure->area();
    std::cout << "三角形: area = " << area << std::endl;

    // figure = &squre;
    figure = squre;
    area = figure->area();
    std::cout << "矩形: area = " << area << std::endl;

    // figure = &circle;
    figure = circle;
    area = figure->area();
    std::cout << "圆形: area = " << area << std::endl;

    delete triangle;
    delete squre;
    delete circle;

    return 0;
}