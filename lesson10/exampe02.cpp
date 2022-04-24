#include<iostream>

class Distance
{
    private: 
        double feet;//英寸
        double inches;//英尺

    public: 
        Distance();
        ~Distance();
        Distance(double f,double i);
        void display();//显示距离的方法
        Distance operator - ();//重载负运算符（ - ）
};

Distance::Distance()
{
    std::cout << "Distance()无参构造函数" << std::endl;
    this->feet = 0;
    this->inches = 0;
}

Distance::Distance(double f,double i)
{
    std::cout << "Distance()有参构造函数" << std::endl;
    this->feet = f;
    this->inches = i;
}

Distance::~Distance()
{
    std::cout << "~Distance()析构函数" << std::endl; 
}

void Distance::display()
{
    std::cout << "英尺: " << this->feet << " ,英寸: " << this->inches << std::endl;
}

//重载负运算符（ - ）
Distance Distance::operator-()
{
    this->feet = -this->feet;
    this->inches = -this->inches;
    return Distance(this->feet,this->inches);
}

int main()
{
    //一元运算符重载
    Distance d1(11,30);
    -d1;
    d1.display();

    Distance d2(-4,11);
    -d2;
    d2.display();

    return 0;
}