#include<iostream>

class Counter
{
    static int number;//静态数据成员
    
    public: 
       Counter();
       ~Counter();
       void setNumber(int number);
       void showNumber();

};

Counter::Counter()
{
    std::cout << "Counter()构造函数" << std::endl;
}

Counter::~Counter()
{
    std::cout << "~Counter()析构函数" << std::endl;
}

void Counter::setNumber(int number)
{
    this->number = number;
}

void Counter::showNumber()
{
    std::cout << "number = " << number << std::endl;
}

//定义静态数据成员,是类共享的
int Counter::number = 0;

int main()
{

    Counter *a = new Counter();
    Counter *b = new Counter();

    a->showNumber();
    b->showNumber();

    std::cout << std::endl;
    a->setNumber(89);
    a->showNumber();
    b->showNumber();

    delete a;
    delete b;

    return 0;
}