#include<iostream>

class Distance
{
    private: 
        double feet;
        double inches;

    public: 
        Distance();
        Distance(double f,double i);
        ~Distance();
        void display();
        Distance operator -();//重载-
        bool operator < (const Distance &d);//重载<
};

Distance::Distance()
{
    this->feet = 0;
    this->inches = 0;
}

Distance::Distance(double f,double i)
{
    feet = f;
    inches = i;
}

Distance::~Distance()
{
    std::cout << "析构函数" << std::endl;
}

Distance Distance::operator - ()
{
    this->feet = this->feet;
    this->inches = this->inches;
}

bool Distance::operator < (const Distance &d)
{
    if(this->feet < d.feet)
    {
        return true;
    }
    if(this->feet == d.feet && this->inches < d.inches)
    {
        return true;
    }
    return false;
}

void Distance::display()
{
    std::cout << "英尺: " << this->feet << " ,英寸: " << this->inches << std::endl;
}

int main()
{
    Distance d1(11,10);
    Distance d2(4,37);
    Distance d3(11,27);

    if(d1 < d2)
    {
        std::cout << "d1 小于 d2" << std::endl;
    }else
    {
        std::cout << "d1 大于等于 d2" << std::endl;
    }

    if(d1 < d3)
    {
         std::cout << "d1 小于 d3" << std::endl; 
    }else
    {
         std::cout << "d1 大于等于 d3" << std::endl;
    }

    return 0;
}