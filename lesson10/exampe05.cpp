#include<iostream>

class Timer
{
    private: 
        int hours;//时
        int minutes;//秒

    public: 
        Timer();
        Timer(int h,int m);
        ~Timer();
        void display();

        // 重载前缀递增运算符（ ++ ）
        Timer operator ++();

        // 重载后缀递增运算符（ ++ ）
        Timer operator ++(int);

};

Timer::Timer()
{
    this->hours = 0;
    this->minutes = 0;
}

Timer::Timer(int h,int m)
{
    this->hours = h;
    this->minutes = m;
}

Timer::~Timer()
{
    // std::cout << "析构函数" << std::endl;
}

 // 重载前缀递增运算符（ ++ ）
Timer Timer::operator++()
{
    ++this->minutes;
    if(this->minutes >= 60)
    {
        ++this->hours;
        this->minutes -= 60;
    }

    return Timer(this->hours,this->minutes);
}

 // 重载后缀递增运算符（ ++ ）
 Timer Timer::operator++(int n)
 {
     Timer time(this->hours,this->minutes);

     ++this->minutes;//加之前的值
     if(this->minutes >= 60)
     {
        ++this->hours;
        this->minutes -= 60;
     }
     return time;//返回加之前的值
 }

void Timer::display()
{
    std::cout << this->hours << ":" << this->minutes << std::endl;
}

int main()
{
    //++ 和 -- 运算符重载
    Timer t1(10,59);
    Timer t2(8,59);

    ++t1;
    t1.display();
    ++t1;
    t1.display();

    t2++;
    t2.display();
    t2++;
    t2.display();

    return 0;
}