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

        //重载复制运输符
        void operator = (const Distance &d);
        
         //重载函数调用运算符
         Distance operator () (double a,double b,double c);

        void display();
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
    feet = f;
    inches = i;
}

Distance::~Distance()
{
    std::cout << "~Distance()析构函数" << std::endl;
}

void Distance::display()
{
    std::cout << "英尺: " << this->feet << " ,英寸: " << this->inches << std::endl;
}

//重载复制运输符
void Distance::operator=(const Distance &d)
{
    this->feet = d.feet;
    this->inches = d.inches;
}

//重载函数调用运算符
Distance Distance::operator()(double a,double b,double c)
{
    Distance d;
    d.feet = a + c + 13.48;
    d.inches = b + 48.9;
    return d;
}

int main()
{
    Distance d1(33,44);
    Distance d2(78,47.9);

    std::cout << "d1 = " ;
    d1.display();

    std::cout << "\nd2 = ";
    d2.display();

    d1 = d2;
    std::cout << "\nd1 = " ;
    d1.display();

    Distance d3;
    std::cout << "\nd3 = ";
    d3.display();
    
    d3 = d2(3,4,8);
    std::cout << "\nd3 = ";
    d3.display();
    

    return 0;
}