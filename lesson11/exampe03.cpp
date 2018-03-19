#include<iostream>

//基类D
class D
{
    public: 
        D()
        {
            std::cout << "D()构造函数" << std::endl;
        }

        ~D()
        {
            std::cout << "~D()析构函数" << std::endl;
        }
};

//类A继承类D
class A: virtual public D
{
    public: 
        A()
        {
            std::cout << "A()构造函数" << std::endl;
        }

        ~A()
        {
            std::cout << "~A()析构函数" << std::endl; 
        }
};

//类A继承类D  //虚继承
class B: virtual public D
{
    public: 
        B()
        {
            std::cout << "B()构造函数" << std::endl;
        }

        ~B()
        {
            std::cout << "~B()析构函数" << std::endl; 
        }
};

//类C继承B和C
class  C: public A,public B
{
    public: 
        C()
        {
            std::cout << "C()构造函数" << std::endl;
        }

        ~C()
        {
            std::cout << "~C()析构函数" << std::endl; 
        }
};

int main()
{
    //虚继承,只有一个D对象
    C *test = new C();
    delete test;

    return 0;
}