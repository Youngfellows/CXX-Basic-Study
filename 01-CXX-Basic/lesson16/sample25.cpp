#include<iostream>

using namespace std;

//定义Animal类 - 动物 - 基类
class Animal
{
    public:
        //基类构造函数
        Animal();
        //基类析构函数
        ~Animal();
};

//定义Cat类 - 猫 - 基类的派生类(子类)
class Cat: Animal
{
    public:
        //子类构造函数
        Cat();
        //子类析构函数
        ~Cat();
};

//在类外定义函数 - 基类构造函数
Animal::Animal()
{
    cout << "Animal()构造函数" << endl;
}

//在类外定义函数 - 基类析构函数
Animal::~Animal()
{
    cout << "~Animal()析构函数" << endl;
}

//在类外定义函数 - 子类构造函数
Cat::Cat()
{
    cout << "Cat()构造函数" << endl;
}

//在类外定义函数 - 子类构造函数
Cat::~Cat()
{
    cout << "~Cat()析构函数" << endl;
}

int main(int arg,char *args[])
{
    //演示构造函数 - 析构函数调用顺序
    //创建一个子类对象,动态申请内存
    Cat *cat = new Cat();
    
    //释放内存
    delete cat;

    return 0;
}