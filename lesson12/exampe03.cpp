#include<iostream>

//基类
class Base
{
    public: 
        //虚函数,抽象函数
        virtual void f1() 
        {
            std::cout << "Base 类 f1()" << std::endl;            
        }

        //虚函数
        virtual void f2()
        {
            std::cout << "Base 类 f2()" << std::endl;
        }

        //虚函数
        virtual void f3()
        {
            std::cout << "Base 类 f3()" << std::endl;
        }

        void f()
        {
            std::cout << "Base 类 f()" << std::endl;
        }
};


//Base子类
class Derived : public Base
{
    public: 
        Derived()
        {
            std::cout << "Derived()无参构造函数" << std::endl;      
        }

        void f1()
        {
            std::cout << "Derived 类 f1()" << std::endl;            
        }

        //Derived 类自己的f2函数
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

    //delete d;
    delete base;

    return 0;
}