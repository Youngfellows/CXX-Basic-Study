#include<iostream>

class Counter
{
    public: 
        Counter(int member);
        ~Counter();
        int member;//公有数据成员
        static int Smem;//公有静态数据成员
};

Counter::Counter(int member)
{
    std::cout << "Counter()构造函数" << std::endl;
    this->member = member;
}

Counter::~Counter()
{
    std::cout << "~Counter()析构函数" << std::endl;
}

//初始化公有静态数据成员
int Counter::Smem = 1;//初始值为1

int main()
{
    Counter *counter = new Counter(5);

    for(int i = 0;i < counter->member; i++)
    {
        Counter::Smem += i;
        std::cout << "Counter::Smem = " << Counter::Smem << " \n";
    }

    std::cout << std::endl;
    std::cout << "counter->Smem = " << counter->Smem << std::endl;
    std::cout << "counter->member = " << counter->member << std::endl;

    std::cout << std::endl;
    
    Counter *cb = new Counter(118);
    std::cout << "cb->Smem = " << cb->Smem << std::endl;//静态数据成员为同类对象共享
    std::cout << "cb->member = " << cb->member << std::endl;
    delete counter;
    delete cb;

    return 0;
}