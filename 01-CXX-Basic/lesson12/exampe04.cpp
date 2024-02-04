#include<iostream>

//基类
class Base
{
    public:
        Base ()
        {
            std::cout << "Base()构造函数" << std::endl;
        }

        virtual  ~Base()//虚析构函数
        {
            std::cout << "~Base()虚析构函数" << std::endl;
        }
};

//子类
class Derived : public Base
{
    public: 
        Derived()
        {
            std::cout << "Derived()构造函数" << std::endl;
        }

        ~Derived()
        {
            std::cout << "~Derived()析构函数" << std::endl; 
        }

};

int main()
{
    //虚析构函数在删除动态派生类对象的调用情况
    Base *base = new Derived();//基类指针指向派生类对象
    Derived *derived = new Derived();//派生类指针指向派生类对象

    std::cout << "删除地一个对象" << std::endl;
    delete base;

    std::cout << "删除第二个对象" << std::endl;
    delete derived;

    return 0;
}