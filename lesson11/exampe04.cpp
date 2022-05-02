#include<iostream>

//基类
class Shape
{
    protected: 
        double width;//宽
        double heigth;//高
    
    public: 
        Shape();
        Shape(double w,double h);
        ~Shape();
        //double getArea();//面积
        virtual double getArea();//面积(虚函数,子类调用指向自己的同名函数)
        //virtual double getArea() = 0;//纯虚函数
};

//矩形
class Rectangle: public Shape
{
    public: 
        Rectangle(double w,double h);
        double getArea();//面积
};

//三角形
class Triangle: public Shape
{
    public:      
        Triangle(double w,double h);
        double getArea();//面积
};

Shape::Shape()
{
    std::cout << "Shape()无参构造函数" << std::endl;
    this->width = 0;
    this->heigth = 0;
}

Shape::~Shape()
{
    std::cout << "～Shape()析构函数" << std::endl;
}

Shape::Shape(double w,double h)
{
    std::cout << "Shape()有参构造函数" << std::endl;
    this->width = w;
    this->heigth = h;
}

double Shape::getArea()
{
    std::cout << "Shape 类的 getArea()" << std::endl;
    return 0;
}

//调用父类的构造函数
Rectangle::Rectangle(double w,double h):Shape(w,h)
{
    std::cout << "Rectangle()构造函数" << std::endl;
}

double Rectangle::getArea()
{
    std::cout << "Rectangle 类的 getArea()" << std::endl;
    return this->width * this->heigth;
}

Triangle::Triangle(double w,double h):Shape(w,h)
{
    std::cout << "Triangle()构造函数" << std::endl;
}

double Triangle::getArea()
{
    std::cout << "Triangle 类的 getArea()" << std::endl;
    return (this->width * this->heigth)/2.0;
}

int main()
{
    //多态
    Shape *shape;//定义一个指针类型
    double area;
    
    Rectangle *rect = new Rectangle(8.8,7.9);//距形
    Triangle *tri = new Triangle(8.8,7.9);//三角形

    shape = rect;//指针变量指向矩形
    area =  shape->getArea();
    std::cout << "矩形面积: " << area << std::endl;

    shape = tri;//指针变量指向三角形
    area  =  shape->getArea();
    std::cout << "三角形面积: " << area << std::endl;

  return 0;
}