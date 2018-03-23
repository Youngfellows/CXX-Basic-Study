#include<iostream>

//基类
class Base
{
    public: 
        virtual void f1()
        {
            std::cout << "base 类 f1()" << std::endl;            
        }

        virtual void f2()
        {
            std::cout << "base 类 f2()" << std::endl;
        }

        virtual void f3()
        {
            std::cout << "base 类 f3()" << std::endl;
        }

        void f()
        {
            std::cout << "base 类 f()" << std::endl;
        }
};


//Base子类
class Derived : public Base
{
    public: 
        Derived()
        {

        }

        void f1()
        {
            std::cout << "Derived 类 f1()" << std::endl;            
        }

        void f2(int a)
        {
            std::cout << "Derived 类 f2()" << std::endl;
        }

        // char f3()
        // {
        //     std::cout << "Derived 类 f3()" << std::endl;
        //     return a;
        // }

        void f()
        {
            std::cout << "Derived 类 f()" << std::endl;
        }
};

int main()
{
    Derived *d = new Derived();//定义一个子类对象
    Base *base;//基类指针
    
    base = d;//基类指针指向子类对象
    base->f();
    base->f1();
    base->f2();
    base->f3();

    return 0;
}