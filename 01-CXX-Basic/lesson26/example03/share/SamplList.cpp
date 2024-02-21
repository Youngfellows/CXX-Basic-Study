#include "../include/SampleList.h"


/**
*	3.3 list
*	3.3.1 list定义
*		List是stl实现的双向链表，与向量(vectors)相比, 它允许快速的插入和删除，但是随机访问却比较慢。使用时需要添加头文件
*		#include <list>
*
*	3.3.2 list定义和初始化
*		list<int>lst1;//创建空list
*		list<int> lst2(5);//创建含有5个元素的list
*		list<int>lst3(3,2);//创建含有3个元素的list
*		list<int>lst4(lst2);//使用lst2初始化lst4
*		list<int>lst5(lst2.begin(),lst2.end());//同lst4
*
*	3.3.3 list常用操作函数
*		Lst1.assign() 给list赋值
*		Lst1.back() 返回最后一个元素
*		Lst1.begin() 返回指向第一个元素的迭代器
*		Lst1.clear() 删除所有元素
*		Lst1.empty() 如果list是空的则返回true
*		Lst1.end() 返回末尾的迭代器
*		Lst1.erase() 删除一个元素
*		Lst1.front() 返回第一个元素
*		Lst1.get_allocator() 返回list的配置器
*		Lst1.insert() 插入一个元素到list中
*		Lst1.max_size() 返回list能容纳的最大元素数量
*		Lst1.merge() 合并两个list
*		Lst1.pop_back() 删除最后一个元素
*		Lst1.pop_front() 删除第一个元素
*		Lst1.push_back() 在list的末尾添加一个元素
*		Lst1.push_front() 在list的头部添加一个元素
*		Lst1.rbegin() 返回指向第一个元素的逆向迭代器
*		Lst1.remove() 从list删除元素
*		Lst1.remove_if() 按指定条件删除元素
*		Lst1.rend() 指向list末尾的逆向迭代器
*		Lst1.resize() 改变list的大小
*		Lst1.reverse() 把list的元素倒转
*		Lst1.size() 返回list中的元素个数
*		Lst1.sort() 给list排序
*		Lst1.splice() 合并两个list
*		Lst1.swap() 交换两个list
*		Lst1.unique() 删除list中相邻重复的元素
*/
void listTest1()
{
    cout << "listTest1():: ..." << endl;
    //初始化list,动态申请内存
    list<string>* city = new list<string>();

    //插入元素
    city->push_back("深圳");
    city->push_back("武汉");
    city->push_back("广州");//在list的末尾添加一个元素 
    city->push_front("北京");//在list的头部添加一个元素 

    //插入元素
    list<string>::iterator iter = city->begin();
    iter++;
    iter++;
    city->insert(iter, "上海");

    //是否为空
    bool isEmpty = city->empty();
    int size = city->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;


    //遍历元素 - 使用迭代器
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        string ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl;

    //遍历元素并删除
    while (!city->empty())
    {
        string ele = city->back();//获取链表最后一个元素
        cout << ele << " ";
        city->pop_back();//删除最后一个元素
    }
    cout << endl;

    // while(!city->empty())
    // {
    //     string ele = city->front();//获取链表第一个元素
    //     cout << ele << " ";
    //     city->pop_front();//删除第一个元素
    // }
    // cout << endl;

    isEmpty = city->empty();
    size = city->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;

    cout << endl;
    //释放内存
    delete city;
}

void listTest2()
{
    cout << "listTest2():: ..." << endl;

    //初始化list,动态申请内存
    list<string>* city = new list<string>();

    //插入元素
    city->push_back("深圳");
    city->push_back("武汉");
    city->push_back("广州");//在list的末尾添加一个元素 
    city->push_front("北京");//在list的头部添加一个元素 

    //插入元素
    list<string>::iterator iter = city->begin();
    iter++;
    iter++;
    city->insert(iter, "上海");

    //是否为空
    bool isEmpty = city->empty();
    int size = city->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;


    //遍历元素 - 使用迭代器
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        string ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl;

    //遍历元素并删除
    // while(!city->empty())
    // {
    //     string ele = city->back();//获取链表最后一个元素
    //     cout << ele << " ";
    //     city->pop_back();//删除最后一个元素
    // }
    // cout << endl;

    while (!city->empty())
    {
        string ele = city->front();//获取链表第一个元素
        cout << ele << " ";
        city->pop_front();//删除第一个元素
    }
    cout << endl;

    isEmpty = city->empty();
    size = city->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;

    cout << endl;
    //释放内存
    delete city;
}

void listTest3()
{
    cout << "listTest3():: ..." << endl;

    //初始化list,动态申请内存
    list<string>* city = new list<string>();

    //插入元素
    city->push_back("深圳");
    city->push_back("武汉");
    city->push_back("广州");//在list的末尾添加一个元素 
    city->push_front("北京");//在list的头部添加一个元素 

    //插入元素
    list<string>::iterator iter = city->begin();
    iter++;
    iter++;
    city->insert(iter, "上海");

    //是否为空
    bool isEmpty = city->empty();
    int size = city->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;


    //遍历元素 - 使用迭代器
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        string ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl;

    //遍历元素并删除
    // while(!city->empty())
    // {
    //     string ele = city->back();//获取链表最后一个元素
    //     cout << ele << " ";
    //     city->pop_back();//删除最后一个元素
    // }
    // cout << endl;

    // while(!city->empty())
    // {
    //     string ele = city->front();//获取链表第一个元素
    //     cout << ele << " ";
    //     city->pop_front();//删除第一个元素
    // }
    // cout << endl;

    //遍历元素并删除
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        //删除元素
        if (*iter == "广州")
        {
            //city->erase(iter);//删除指定元素
            city->erase(iter);//有bug
            cout << "delete" << endl;
            break;
        }
    }

    //遍历元素
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        string ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl;

    isEmpty = city->empty();
    size = city->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;

    cout << endl;
    //释放内存
    delete city;
}

void listTest4()
{
    cout << "listTest4():: ..." << endl;

    //初始化list,动态申请内存
    list<string>* city = new list<string>();

    //插入元素
    city->push_back("深圳");
    city->push_back("武汉");
    city->push_back("广州");//在list的末尾添加一个元素 
    city->push_front("北京");//在list的头部添加一个元素 
    city->push_front("重庆");
    city->push_front("成都");

    //插入元素
    list<string>::iterator iter = city->begin();
    iter++;
    iter++;
    city->insert(iter, "上海");

    //是否为空
    bool isEmpty = city->empty();
    int size = city->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;


    //遍历元素 - 使用迭代器
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        string ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl;

    //遍历元素并删除
    // while(!city->empty())
    // {
    //     string ele = city->back();//获取链表最后一个元素
    //     cout << ele << " ";
    //     city->pop_back();//删除最后一个元素
    // }
    // cout << endl;

    // while(!city->empty())
    // {
    //     string ele = city->front();//获取链表第一个元素
    //     cout << ele << " ";
    //     city->pop_front();//删除第一个元素
    // }
    // cout << endl;

    //遍历元素并删除
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        //删除元素
        if (*iter == "广州")
        {
            //city->erase(iter);//删除指定元素
            //city->erase(iter);//有bug
            city->remove(*iter);
            cout << "remove" << endl;
            break;
        }
    }

    //遍历元素
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        string ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl;

    isEmpty = city->empty();
    size = city->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;

    cout << endl;
    //释放内存
    delete city;
}

void listTest5()
{
    cout << "listTest5():: ..." << endl;

    //初始化list,动态申请内存
    list<string>* city = new list<string>();

    //插入元素
    city->push_back("深圳");
    city->push_back("武汉");
    city->push_back("广州");//在list的末尾添加一个元素 
    city->push_front("北京");//在list的头部添加一个元素 
    city->push_front("重庆");
    city->push_front("成都");

    //插入元素
    list<string>::iterator iter = city->begin();
    iter++;
    iter++;
    city->insert(iter, "上海");

    //是否为空
    bool isEmpty = city->empty();
    int size = city->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;


    //遍历元素 - 使用迭代器
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        string ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl;

    //遍历元素并删除
    // while(!city->empty())
    // {
    //     string ele = city->back();//获取链表最后一个元素
    //     cout << ele << " ";
    //     city->pop_back();//删除最后一个元素
    // }
    // cout << endl;

    // while(!city->empty())
    // {
    //     string ele = city->front();//获取链表第一个元素
    //     cout << ele << " ";
    //     city->pop_front();//删除第一个元素
    // }
    // cout << endl;

    //遍历元素并删除
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        //删除元素
        if (*iter == "广州")
        {
            //city->erase(iter);//删除指定元素
            //city->erase(iter);//有bug
            city->remove_if(event);
            cout << "remove" << endl;
            break;
        }
    }

    //遍历元素
    for (iter = city->begin(); iter != city->end(); iter++)
    {
        string ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl;

    isEmpty = city->empty();
    size = city->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;

    cout << endl;
    //释放内存
    delete city;
}

//按条件移除
bool event(const string& city)
{
    return ((city == "武汉") || (city == "北京"));
}

void listTest6()
{
    cout << "listTest6():: 1111 ..." << endl;
    std::list<int>* clientList = new std::list<int>();
    clientList->push_back(33);
    clientList->push_back(44);
    clientList->push_back(22);
    clientList->push_back(11);
    clientList->push_back(22);
    clientList->push_back(77);
    clientList->push_back(44);
    clientList->push_back(22);
    clientList->push_back(88);
    clientList->push_back(44);
    clientList->push_back(66);

    std::list<int>::iterator iter;
    for (iter = clientList->begin();iter != clientList->end();iter++)
    {
        int client = *iter;
        std::cout << "client:" << client << std::endl;
        if (client == 22 || client == 44)
        {
            clientList->remove(client);//可以删除重复元素
            iter = clientList->begin();
            std::cout << "delete " << client << std::endl;
            //break;
        }
    }

    std::cout << "=====================" << std::endl;
    for (iter = clientList->begin();iter != clientList->end();iter++)
    {
        int client = *iter;
        std::cout << "client:" << client << std::endl;
    }
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
