#include<iostream>

//抽象类
class Shape
{
    protected: 
        double height;//高
        double width;//宽

    public: 
        Shape();
        Shape(double w,double h);
        ~Shape();
        void setWidth(double w);//设置宽
        void setHeigth(double h);//设置高

        //抽象函数
        virtual double getArea() = 0;
};

//矩形
class Rectangle : public Shape
{
    public: 
        Rectangle(double w,double h);
        double getArea();//实现抽象方法

};

//三角形
class Triangle : public Shape
{
    public: 
        Triangle(double w,double h);
        double getArea();//实现抽象方法
};


Shape::Shape()
{
    std::cout << "Shape()无参构造函数" << std::endl;
    this->width = 0;
    this->height = 0;
}

Shape::Shape(double w,double h)
{
    std::cout << "Shape()有参构造函数" << std::endl;
    this->width = w;
    this->height = h;
}

Shape::~Shape()
{
    std::cout << "～Shape()析构函数" << std::endl;
}

void Shape::setWidth(double w)
{
    this->width = w;
}

void Shape::setHeigth(double h)
{
    this->height = h;
}

Rectangle::Rectangle(double w,double h):Shape(w,h)
{
    std::cout << "Rectangle()调用Shape类构造函数" << std::endl;
}

//实现抽象方法
double Rectangle::getArea()
{
    std::cout << "Rectangle类的getArea()" << std::endl;
    return this->width * this->height;
}

Triangle::Triangle(double w,double h):Shape(w,h)
{
     std::cout << "Triangle()调用Shape类构造函数" << std::endl;
}

//实现抽象方法
double Triangle::getArea()
{
    return (this->width * this->height)/2;
}

int main()
{
    Shape *shape;//定义类指针变量shape
    Rectangle *rect = new Rectangle(33,27);//矩形
    Triangle *tri = new Triangle(37.8,29);//三角形

    double area ;//面积
    shape = rect;//shape指向矩形
    area = shape->getArea();
    std::cout << "矩形面积: " << area << std::endl;


    shape = tri;//shape指向三角形
    area = shape->getArea();
    std::cout << "三角形面积: " << area << std::endl;
    

    return 0;
}