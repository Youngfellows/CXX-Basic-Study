#include "../include/SampleList.h"

void listTest1()
{
    cout << "listTest1():: ..." << endl;
    //list链表容器的初始化
    list<string> *pCitys = new list<string>();//调用无参数构造函数
    //list<string> citys;//调用无参数构造函数

    //添加元素
    pCitys->push_back("深圳");
    pCitys->push_back("广州");
    pCitys->push_back("北京");

    //在迭代器iter指向的元素前面插入元素
    list<string>::iterator iter = pCitys->begin();
    iter++;
    iter++;
    pCitys->insert(iter,"南京");

    //使用迭代器遍历元素
    for(iter = pCitys->begin(); iter != pCitys->end(); iter++)
    {
        string city = *iter;//获取元素
        cout << city << " ";
    }
    cout << endl;

    //释放内存
    delete pCitys;
    cout << endl;

}

void listTest2()
{
    cout << "listTest2():: ..." << endl;
    //list链表容器的初始化
    list<string> *pCitys = new list<string>();//调用无参数构造函数
    //list<string> citys;//调用无参数构造函数

    //添加元素
    pCitys->push_back("深圳");
    pCitys->push_back("广州");
    pCitys->push_back("北京");

    //在迭代器iter指向的元素前面插入3个值为“xxx”的元素
    list<string>::iterator iter = pCitys->begin();
    iter++;
    iter++;
    pCitys->insert(iter,3,"南京");

    //使用迭代器遍历元素
    for(iter = pCitys->begin(); iter != pCitys->end(); iter++)
    {
        string city = *iter;//获取元素
        cout << city << " ";
    }
    cout << endl;

    //释放内存
    delete pCitys;
    cout << endl;
}

void listTest3()
{
    cout << "listTest3():: ..." << endl;
    //list链表容器的初始化
    list<string> *pCitys = new list<string>();//调用无参数构造函数
    list<string> *pCitys2 = new list<string>();

    //list<string> citys;//调用无参数构造函数

    //pCitys添加元素
    pCitys->push_back("深圳");
    pCitys->push_back("广州");
    pCitys->push_back("北京");
    pCitys->push_back("贵阳");

    //pCitys2添加元素
    pCitys2->push_back("武汉");
    pCitys2->push_back("大连");
    pCitys2->push_back("南京");
    pCitys2->push_back("西安");

    list<string>::iterator iter = pCitys->begin();   
    cout << "插入前" << endl;
    for(iter = pCitys->begin(); iter != pCitys->end(); iter++)
    {
        string city = *iter;//获取元素
        cout << city << " ";
    }
    cout << endl;

    //在迭代器iter指向的元素前面插入范围内的元素
    iter = pCitys->begin();
    iter++;
    iter++;
    //插入元素
    pCitys->insert(iter,pCitys2->begin(),pCitys2->end());
    

    cout << "插入后" << endl;
    //使用迭代器遍历元素
    for(iter = pCitys->begin(); iter != pCitys->end(); iter++)
    {
        string city = *iter;//获取元素
        cout << city << " ";
    }
    cout << endl;

    //释放内存
    delete pCitys;
    cout << endl;
}

void listTest4()
{
    cout << "listTest4():: ..." << endl;
    //list链表容器的初始化
    list<string> *pCitys = new list<string>();//调用无参数构造函数
    //list<string> citys;//调用无参数构造函数

    //添加元素
    pCitys->push_back("深圳");
    pCitys->push_back("广州");
    pCitys->push_back("北京");

    //在迭代器iter指向的元素前面插入元素
    list<string>::iterator iter = pCitys->begin();
    iter++;
    iter++;
    pCitys->insert(iter,"南京");

    cout << "删除前:" << endl;
    //使用迭代器遍历元素
    for(iter = pCitys->begin(); iter != pCitys->end(); iter++)
    {
        string city = *iter;//获取元素
        cout << city << " ";
    }
    cout << endl;

    //删除元素
    iter = pCitys->begin();
    iter++;
    iter++;
    pCitys->erase(iter);

    cout << "删除后:" << endl;
    //使用迭代器遍历元素
    for(iter = pCitys->begin(); iter != pCitys->end(); iter++)
    {
        string city = *iter;//获取元素
        cout << city << " ";
    }
    cout << endl;

    //释放内存
    delete pCitys;
    cout << endl;
}

void listTest5()
{
    cout << "listTest5():: ..." << endl;
     //list链表容器的初始化
    list<string> *pCitys = new list<string>();//调用无参数构造函数
    //list<string> citys;//调用无参数构造函数

    //是否为空
    bool isEmpty = pCitys->empty();
    int size = pCitys->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;

    //添加元素
    pCitys->push_back("深圳");
    pCitys->push_back("广州");
    pCitys->push_back("北京");

    //在迭代器iter指向的元素前面插入元素
    list<string>::iterator iter = pCitys->begin();
    iter++;
    iter++;
    pCitys->insert(iter,"南京");

    cout << "删除前:" << endl;
    isEmpty = pCitys->empty();
    size = pCitys->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;
    //使用迭代器遍历元素
    for(iter = pCitys->begin(); iter != pCitys->end(); iter++)
    {
        string city = *iter;//获取元素
        cout << city << " ";
    }
    cout << endl;

    //删除元素
    iter = pCitys->begin();
    iter++;
    iter++;
    pCitys->erase(iter);

    cout << "删除后:" << endl;
    isEmpty = pCitys->empty();
    size = pCitys->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;
    //使用迭代器遍历元素
    for(iter = pCitys->begin(); iter != pCitys->end(); iter++)
    {
        string city = *iter;//获取元素
        cout << city << " ";
    }
    cout << endl;

    //释放内存
    delete pCitys;
    cout << endl;
}

void listTest6()
{
    cout << "listTest6():: ..." << endl;
}

void listTest7()
{
    cout << "listTest7():: ..." << endl;
}

void listTest8()
{
    cout << "listTest8():: ..." << endl;
}

void listTest9()
{
    cout << "listTest9():: ..." << endl;
}

void listTest10()
{
    cout << "listTest10():: ..." << endl;
}
