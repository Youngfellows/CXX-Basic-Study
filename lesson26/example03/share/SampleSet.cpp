#include "../include/SampleSet.h"


/**
*
*	3.5 set/multiset 
*		std::set 是关联容器，含有 Key 类型对象的已排序集。用比较函数compare进行排序。搜索、移除和插入拥有对数复杂度。 set 通常以红黑树实现。
*		set容器内的元素会被自动排序，set与map不同，set中的元素即是键值又是实值，set不允许两个元素有相同的键值。不能通过set的迭代器去修改set元素，原因是修改元素会破坏set组织。当对容器中的元素进行插入或者删除时，操作之前的所有迭代器在操作之后依然有效。
*		由于set元素是排好序的，且默认为升序，因此当set集合中的元素为结构体或自定义类时，该结构体或自定义类必须实现运算符‘<’的重载。
*
*	　　multiset特性及用法和set完全相同，唯一的差别在于它允许键值重复。
*	　　set和multiset的底层实现是一种高效的平衡二叉树，即红黑树（Red-Black Tree）。
*
*	3.5.1 set常用成员函数
*		1. begin()--返回指向第一个元素的迭代器
*		2. clear()--清除所有元素
*		3. count()--返回某个值元素的个数
*		4. empty()--如果集合为空，返回true
*		5. end()--返回指向最后一个元素的迭代器
*		6. equal_range()--返回集合中与给定值相等的上下限的两个迭代器
*		7. erase()--删除集合中的元素
*		8. find()--返回一个指向被查找到元素的迭代器
*		9. get_allocator()--返回集合的分配器
*		10. insert()--在集合中插入元素
*		11. lower_bound()--返回指向大于（或等于）某值的第一个元素的迭代器
*		12. key_comp()--返回一个用于元素间值比较的函数
*		13. max_size()--返回集合能容纳的元素的最大限值
*		14. rbegin()--返回指向集合中最后一个元素的反向迭代器
*		15. rend()--返回指向集合中第一个元素的反向迭代器
*		16. size()--集合中元素的数目
*		17. swap()--交换两个集合变量
*		18. upper_bound()--返回大于某个值元素的迭代器
*		19. value_comp()--返回一个用于比较元素间的值的函数
*/
void setTest1()
{
    cout << "setTest1():: ..." << endl;
    //创建对象,并初始化
    set<int> *ids = new set<int>();

    //添加元素
    ids->insert(11);
    ids->insert(18);
    ids->insert(9);
    ids->insert(12);
    ids->insert(6);

    /* set的insert函数返回值为一个对组(pair)。
       对组的第一个值first为set类型的迭代器：
       1、若插入成功，迭代器指向该元素。
       2、若插入失败，迭代器指向之前已经存在的元素
       对组的第二个值seconde为bool类型：
       1、若插入成功，bool值为true
       2、若插入失败，bool值为false
    */
    pair<set<int>::iterator,bool> ret = ids->insert(8);
    if(true == ret.second)
    {
        int ele = *(ret.first);
        cout << ele << "插入成功" << endl;
    }else
    {
        int ele = *(ret.first);
        cout << ele << "插入失败" << endl;
    }

    ret = ids->insert(9);
    if(true == ret.second)
    {
        int ele = *(ret.first);
        cout << ele << "插入成功" << endl;
    }else
    {
        int ele = *(ret.first);
        cout << ele << "插入失败" << endl;
    }

    //遍历元素
    set<int>::iterator iter;
    for(iter = ids->begin(); iter != ids->end(); iter++)
    {
        int ele = *iter;
        cout << ele << " ";
    }
    cout << endl;

    //查找元素
    iter = ids->find(18);
    if(iter != ids->end())
    {
        int ele = *iter;
        cout << "查找到元素" << ele << endl;
    }else
    {
        //int ele = *iter;
        cout << "没有查找到元素" << 18 << endl;
    }
    
    iter = ids->find(88);
    if(iter != ids->end())
    {
        int ele = *iter;
        cout << "查找到元素" << ele << endl;
    }else
    {
        //int ele = *iter;
        cout << "没有查找到元素" << 88 << endl;
    }

    //查找元素
    int count = ids->count(9);
    if(count > 0)
    {
        cout << "查找到元素" << 9 << endl;  
    }else
    {
        cout << "没有查找到元素" << 9 << endl;
    }

    count = ids->count(39);
    if(count > 0)
    {
        cout << "查找到元素" << 39 << endl;  
    }else
    {
        cout << "没有查找到元素" << 39 << endl;
    }

    //删除元素
    ids->erase(9);
    for(iter = ids->begin(); iter != ids->end(); iter++)
    {
        int ele = *iter;
        cout << ele << " ";
    }
    cout << endl;

    iter = ids->find(12);
    if(iter != ids->end())
    {
        ids->erase(iter);
    }
    for(iter = ids->begin(); iter != ids->end(); iter++)
    {
        int ele = *iter;
        cout << ele << " ";
    }
    cout << endl;

    //是否为空
    bool isEmpty = ids->empty();
    //大小
    int size = ids->size();
    cout << "isEmpty:" << isEmpty << ",size:" << size << endl;

    //清空容器
    ids->clear();
    isEmpty = ids->empty();
    size = ids->size();
    cout << "isEmpty:" << isEmpty << ",size:" << size << endl;

    //释放内存
    delete ids;
    cout << endl;
}

void setTest2()
{
    cout << "setTest2():: ..." << endl;
    // 如果想让set容器从大到小排序，需要给set容
    // 器提供一个仿函数,本例的仿函数为CompareSet
    //创建对象,并初始化
    set<int,CompareSet> *ids = new set<int,CompareSet>();

    // //添加元素
    ids->insert(11);
    ids->insert(18);
    ids->insert(9);
    ids->insert(12);
    ids->insert(6);

    // /* set的insert函数返回值为一个对组(pair)。
    //    对组的第一个值first为set类型的迭代器：
    //    1、若插入成功，迭代器指向该元素。
    //    2、若插入失败，迭代器指向之前已经存在的元素
    //    对组的第二个值seconde为bool类型：
    //    1、若插入成功，bool值为true
    //    2、若插入失败，bool值为false
    // */
    pair<set<int,CompareSet>::iterator,bool> ret = ids->insert(8);
    if(true == ret.second)
    {
        int ele = *(ret.first);
        cout << ele << "插入成功" << endl;
    }else
    {
        int ele = *(ret.first);
        cout << ele << "插入失败" << endl;
    }

    ret = ids->insert(9);
    if(true == ret.second)
    {
        int ele = *(ret.first);
        cout << ele << "插入成功" << endl;
    }else
    {
        int ele = *(ret.first);
        cout << ele << "插入失败" << endl;
    }

    //遍历元素
    set<int,CompareSet>::iterator iter;
    for(iter = ids->begin(); iter != ids->end(); iter++)
    {
        int ele = *iter;
        cout << ele << " ";
    }
    cout << endl;

    //查找元素
    iter = ids->find(18);
    if(iter != ids->end())
    {
        int ele = *iter;
        cout << "查找到元素" << ele << endl;
    }else
    {
        //int ele = *iter;
        cout << "没有查找到元素" << 18 << endl;
    }
    
    iter = ids->find(88);
    if(iter != ids->end())
    {
        int ele = *iter;
        cout << "查找到元素" << ele << endl;
    }else
    {
        //int ele = *iter;
        cout << "没有查找到元素" << 88 << endl;
    }

    //查找元素
    int count = ids->count(9);
    if(count > 0)
    {
        cout << "查找到元素" << 9 << endl;  
    }else
    {
        cout << "没有查找到元素" << 9 << endl;
    }

    count = ids->count(39);
    if(count > 0)
    {
        cout << "查找到元素" << 39 << endl;  
    }else
    {
        cout << "没有查找到元素" << 39 << endl;
    }

    //删除元素
    ids->erase(9);
    for(iter = ids->begin(); iter != ids->end(); iter++)
    {
        int ele = *iter;
        cout << ele << " ";
    }
    cout << endl;

    iter = ids->find(12);
    if(iter != ids->end())
    {
        ids->erase(iter);
    }
    for(iter = ids->begin(); iter != ids->end(); iter++)
    {
        int ele = *iter;
        cout << ele << " ";
    }
    cout << endl;

    //是否为空
    bool isEmpty = ids->empty();
    //大小
    int size = ids->size();
    cout << "isEmpty:" << isEmpty << ",size:" << size << endl;

    //清空容器
    ids->clear();
    isEmpty = ids->empty();
    size = ids->size();
    cout << "isEmpty:" << isEmpty << ",size:" << size << endl;

    //释放内存
    delete ids;
    cout << endl;
}

void setTest3()
{
    cout << "setTest3():: ..." << endl;
    //创建set容器,自定义排序规则
    set<Person,ComparePerson> *stu = new set<Person,ComparePerson>;

    //插入元素
    stu->insert(Person(33,"张三丰"));
    stu->insert(Person(24,"张无忌"));
    stu->insert(Person(88,"张三丰"));
    stu->insert(Person(27,"赵敏"));

    //遍历元素
    set<Person,ComparePerson>::iterator iter;
    for(iter = stu->begin(); iter != stu->end(); iter++)
    {
        Person p = *iter;
        cout << p;
    }

    cout << endl;
    //释放内存
    delete stu;
}

void setTest4()
{
    cout << "setTest4():: ..." << endl;
    cout << endl;
}

void setTest5()
{
    cout << "setTest5():: ..." << endl;
    cout << endl;
}