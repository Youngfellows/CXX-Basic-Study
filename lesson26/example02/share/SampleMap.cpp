#include "../include/SampleMap.h"

void mapTest1()
{
    cout << "mapTest1():: ..." << endl;
    //map对象初始化
    map<string,float> mapBook;

    //添加元素
    mapBook["price"] = 52.0;

    //获取元素
    int price = mapBook["price"];
    cout << "price:" << price << endl;

    cout << endl;
}

void mapTest2()
{
    cout << "mapTest2():: ..." << endl;
    //初始化map
    map<string,double> mapBox;

    //添加元素
    mapBox["area"] = 128.5;

    //查找并读取元素
    int count = mapBox.count("area");
    if(count)
    {
        float area = mapBox["area"];
        cout << "area=" << area << endl;
    }else
    {
        cout << "没有元素area" << endl;
    }

    count = mapBox.count("color");
    if(count)
    {
        float color = mapBox["color"];
        cout << "color=" << color << endl;
    }else
    {
        cout << "没有元素color" << endl;
    }

    cout << endl;
}

void mapTest3()
{
    cout << "mapTest3():: ..." << endl;
    //初始化map
    map<string,double> mapBox;

    //添加元素
    mapBox["area"] = 128.5;

    //查找并读取元素
    map<string,double>::iterator iter = mapBox.find("area");
    if(iter != mapBox.end())
    {
        string key = iter->first;
        double value = iter->second;
        cout << key << "=" << value << endl;
    }

    cout << endl;
}

void mapTest4()
{
    cout << "mapTest4():: ..." << endl;
    cout << endl;
}

void mapTest5()
{
    cout << "mapTest5():: ..." << endl;
    cout << endl;
}

void mapTest6()
{
    cout << "mapTest6():: ..." << endl;
    cout << endl;
}

void mapTest7()
{
    cout << "mapTest7():: ..." << endl;
    cout << endl;
}

void mapTest8()
{
    cout << "mapTest8():: ..." << endl;
    cout << endl;
}

void mapTest9()
{
    cout << "mapTest9():: ..." << endl;
    cout << endl;
}