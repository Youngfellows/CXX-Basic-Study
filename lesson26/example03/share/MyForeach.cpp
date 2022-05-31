#include "../include/MyForeach.h"

//在类外实现函数 - 构造函数
MyForeach::MyForeach()
{
    cout << "MyForeach()构造函数" << endl;
    this->init();
}

//在类外实现函数 - 析构函数
MyForeach::~MyForeach()
{
    cout << "~MyForeach()析构函数" << endl;
}

//在类外实现函数 - init()函数
void MyForeach::init()
{
    cout << "init():: ..." << endl;
    int *p = this->nums;//指针变量指向数组
    for(int i = 0; i < SIZE; i++)
    {
        //通过指针变量为数组赋值
        *(p + i) = i;
    }

    //向集合中添加元素
    this->citys.push_back("深圳");
    this->citys.push_back("广州");
    this->citys.push_back("武汉");
    this->citys.push_back("北京");
}

//在类外实现函数 - testForeach1()函数
void MyForeach::testForeach1()
{
    cout << "testForeach1():: ..." << endl;
    for(int num : this->nums)
    {
        cout << num << "\t";
    }
    cout << endl;

    for(string city : this->citys)
    {
        cout << city << "\t";
    }
    cout << endl;
    cout << endl;
}

//在类外实现函数 - testForeach2()函数
void MyForeach::testForeach2()
{
    cout << "testForeach2():: ..." << endl;
    //for_each(this->nums,this->nums + SIZE,Display<int>());//不执行
    cout << endl;
    cout << endl;
}