#include<iostream>
#include<list>

int main()
{
    std::list<int> list;
    list.push_front(1);// 头部插入
    list.push_back(2);// 尾部插入
    list.insert(list.begin(),3);//开始位置插入
    list.insert(list.end(),4);// 结束位置插入

    std::cout << "是否为空: " << list.empty() << std::endl;
    std::cout << "lis链表大小: " << list.size() << std::endl;
    std::cout << "第一个元素: " << list.front() << std::endl;
    std::cout << "最后一个元素: " << list.back() << std::endl;

    //正向遍历链表
    std::list<int>::iterator iter = list.begin();
    for(; iter != list.end(); iter++)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    //逆向遍历
    std::list<int>::reverse_iterator riter = list.rbegin();
    for(;riter != list.rend(); riter++)
    {
        std::cout << *riter << " ";
    }
    std::cout << std::endl;

    //链表排序
    list.sort();
    iter = list.begin();
    for(;iter != list.end(); iter++)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    //清空链表
    list.clear();
    std::cout << "清空后的大小: " << list.size() << std::endl;

    return 0;
}