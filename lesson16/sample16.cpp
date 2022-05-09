#include<iostream>

using namespace std;

//定义Dog类 - 狗狗
class Dog
{
    public:
        //构造函数
        Dog();

        //析构函数
        ~Dog();

        //拷贝构造函数
        Dog(Dog &dog);
};

//在类外定义函数
Dog::Dog()
{
    cout << "Dog()构造函数 ^_^ ..." << endl;
}

Dog::~Dog()
{
    cout << "~Dog()析构函数 ..." << endl;
}

Dog::Dog(Dog &dog)
{
    cout << "Dog(Dog &dog)拷贝构造函数 ~~~" << endl;
}

/********************值传递、地址传递、引用传递的对比***************************/
Dog func1(Dog dog);//传递值
Dog * func2(Dog *dog);//传地址
Dog & func3(Dog &dog);//传引用


int main(int arg,char *args[])
{
    //值传递、地址传递、引用传递的对比
    Dog sheepdog;//牧羊犬

    cout << "开始调用func1()函数" << endl;
    func1(sheepdog);

    cout << "开始调用func2()函数" << endl;
    func2(&sheepdog);


    cout << "开始调用func3()函数" << endl;
    func3(sheepdog);

    return 0;
}

/**
 * @brief 传递值
 * 
 * @param dog 传递值
 * @return Dog 返回Dog对象
 */
Dog func1(Dog dog)
{
    cout << "perform func1() ..." << endl;
    return dog;
}

/**
 * @brief 传地址
 * 
 * @param dog 传地址
 * @return Dog* 返回dog对象的指针变量
 */
Dog * func2(Dog *dog)
{
    cout << "perform func2() ..." << endl;
    return dog;
}

/**
 * @brief 传引用
 * 
 * @param dog 传引用
 * @return Dog* 返回dog对象的引用
 */
Dog & func3(Dog &dog)
{
    cout << "perform func3() ..." << endl;
    return dog;
}