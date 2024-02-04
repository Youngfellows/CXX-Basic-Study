#include<iostream>

class Box 
{
    private: 
        double length;//长度
        double breadth;//宽度
        double height;//高度

    public: 
        Box();
        Box(double l,double b,double h);
        ~Box();
        double volume();//体积
        
        // 重载 + 运算符，用于把两个 Box 对象相加
        Box operator +(const Box &box);

};

Box::Box()
{
    std::cout << "Box()构造函数" << std::endl;
    this->length = 0;
    this->breadth = 0;
    this->height = 0;
}

Box::Box(double l,double b,double h)
{
    std::cout << "Box()构造函数,带参数" << std::endl;
    this->length = l;
    this->breadth = b;
    this->height = h;
}

Box::~Box()
{
    std::cout << "～Box()析构函数" << std::endl;
}

double Box::volume()
{
    return this->length * this->breadth * this->height;
}

// 重载 + 运算符，用于把两个 Box 对象相加
Box Box::operator+(const Box &box)
{
    Box temp;
    temp.length = this->length + box.length;
    temp.breadth = this->breadth + box.breadth;
    temp.height = this->height + box.height;
    std::cout << "新Box，长: " << temp.length << " ,宽: " << temp.breadth << " ，高: " << temp.height << std::endl;
    return temp;
}

int main()
{
    Box box1(3,4,5);
    Box box2(7,6,5);
    Box box3;

    box3 = box1 + box2;

    std::cout << "box1体积: " << box1.volume() << std::endl;
    std::cout << "box2体积: " << box2.volume() << std::endl;
    std::cout << "box3体积: " << box3.volume() << std::endl;
    return 0;
}