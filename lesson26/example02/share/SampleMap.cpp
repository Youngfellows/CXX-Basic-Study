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

    //添加元素 - 使用数组方式
    mapBox["area"] = 128.5;
    mapBox["price"] = 314.5; 

    //查找并读取元素
    map<string,double>::iterator iter = mapBox.find("area");
    if(iter != mapBox.end())
    {
        string key = iter->first;
        double value = iter->second;
        cout << key << "=" << value << endl;
    }

    //查找并读取元素
    iter = mapBox.find("addr");
    if(iter != mapBox.end())
    {
        string key = iter->first;
        double value = iter->second;
        cout << key << "=" << value << endl;
    }else
    {
        cout << "没有查找到addr元素" << endl;
    }

    //获取元素
    for(iter = mapBox.begin(); iter != mapBox.end(); iter++)
    {
        string key = iter->first;
        int value = iter->second;
        cout << key << "=" << value << endl;
    }

    cout << endl;
}

void mapTest4()
{
    cout << "mapTest4():: ..." << endl;
    //初始化map
    map<string,int> students = {{"张无忌",18},{"周芷若",22},{"郭靖",33}};

    //获取元素大小
    int size = students.size();
    cout << "size:" << size << endl;

    //获取元素
    map<string,int>::iterator iter;
    for(iter = students.begin(); iter != students.end(); iter++)
    {
        string key = iter->first;
        int value = iter->second;
        cout << key << "=" << value << endl;
    }

    cout << endl;
}

void mapTest5()
{
    cout << "mapTest5():: ..." << endl;
    //初始化map
    map<string,string> mapCity;

    //插入元素 - 使用make_pair
    mapCity.insert(make_pair("city","深圳"));
    mapCity.insert(make_pair("area","960"));

    //遍历元素
    map<string,string>::iterator iter;
    for(iter = mapCity.begin(); iter != mapCity.end(); iter++)
    {
        string key = iter->first;//通过指针访问元素
        string value = (*iter).second;//通过对象访问元素
        cout << key << "=" << value << endl;
    }
    cout << endl;
}

void mapTest6()
{
    cout << "mapTest6():: ..." << endl;
    //初始化map
    map<string,string> *mapPerson = new map<string,string>();

    //插入元素 - 使用pair
    mapPerson->insert(pair<string,string>("name","张翠山"));
    mapPerson->insert(pair<string,string>("age","46"));
    mapPerson->insert(pair<string,string>("addr","武当山"));
    mapPerson->insert(pair<string,string>("konghu","太极拳"));
    mapPerson->insert(pair<string,string>("wife","阴素素"));
    mapPerson->insert(pair<string,string>("master","张三丰"));

    //遍历元素
    map<string,string>::iterator iter;
    for(iter = mapPerson->begin(); iter != mapPerson->end(); iter++)
    {
        string key = iter->first;//通过指针访问元素
        string value = (*iter).second;//通过对象访问元素
        cout << key << "=" << value << endl;
    }
    cout << endl;

    //删除元素 - 将键作为参数
    mapPerson->erase("wife");
    for(iter = mapPerson->begin(); iter != mapPerson->end(); iter++)
    {
        string key = iter->first;//通过指针访问元素
        string value = (*iter).second;//通过对象访问元素
        cout << key << "=" << value << endl;
    }
    cout << endl;

    //删除元素 - 接受迭代器作为参数，并删除选代器指向的元素
    iter = mapPerson->find("age");
    if(iter != mapPerson->end())
    {
        //删除元素
        mapPerson->erase(iter);
    }

    for(iter = mapPerson->begin(); iter != mapPerson->end(); iter++)
    {
        string key = iter->first;//通过指针访问元素
        string value = (*iter).second;//通过对象访问元素
        cout << key << "=" << value << endl;
    }
    cout << endl;

    //删除元素 - 使用选代器指定边界，从而将指定范围内的所有元素都从 map 或 multirnap 中删除
    map<string,string>::iterator iter1 = mapPerson->find("addr");
    map<string,string>::iterator iter2 = mapPerson->find("master");
    mapPerson->erase(iter1,iter2);
    
    for(iter = mapPerson->begin(); iter != mapPerson->end(); iter++)
    {
        string key = iter->first;//通过指针访问元素
        string value = (*iter).second;//通过对象访问元素
        cout << key << "=" << value << endl;
    }
    cout << endl;

    //释放内存
    delete mapPerson;
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