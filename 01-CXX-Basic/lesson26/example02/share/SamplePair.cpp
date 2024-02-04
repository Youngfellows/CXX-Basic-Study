#include "../include/SamplePair.h"

void pairTest1()
{
    cout << "pairTest1():: ..." << endl;
    //创建一个空的pair对象
    pair<string,int> p1;

    //初始化key - value
    p1.first = "age";
    p1.second = 18;

    //获取key - value
    string key = p1.first;
    int value = p1.second;

    cout << key << "=" << value << endl;
    cout << endl;
}


void pairTest2()
{
    cout << "pairTest2():: ..." << endl;
    //创建一个pair对象,并初始化
    pair<string,int> *p = new pair<string,int>("score",99);

    //获取key - value
    string key = (*p).first;
    int value = (*p).second;

    cout << key << "=" << value << endl;
    cout << endl;
}

void pairTest3()
{
    cout << "pairTest3():: ..." << endl;
    //创建pair对象,并初始化
    pair<string,string> auth;//作者
    auth = make_pair("author","张无忌");

    //获取key - value
    string key = auth.first;
    string value = auth.second;

    cout << key << "=" << value << endl;
    cout << endl;
}

void pairTest4()
{
    cout << "pairTest4():: ..." << endl;
}

void pairTest5()
{
    cout << "pairTest5():: ..." << endl;
}

void pairTest6()
{
    cout << "pairTest6():: ..." << endl;
}

void pairTest7()
{
    cout << "pairTest7():: ..." << endl;
}

void pairTest8()
{
    cout << "pairTest8():: ..." << endl;
}

void pairTest9()
{
    cout << "pairTest9():: ..." << endl;
}
