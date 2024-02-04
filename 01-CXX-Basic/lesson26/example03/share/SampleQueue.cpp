#include "../include/SampleQueue.h"


/**
 *  queue<int> q; //priority_queue<int> q;
 *  q.empty();  //判断队列是否为空
 *  q.size();   //返回队列长度
 *  q.push(item);   //对于queue，在队尾压入一个新元素
 *              //对于priority_queue，在基于优先级的适当位置插入新元素
 *  
 *  //queue only:
 *  q.front();  //返回队首元素的值，但不删除该元素
 *  q.back();   //返回队尾元素的值，但不删除该元素
 *  
 *  //priority_queue only:
 *  q.top();    //返回具有最高优先级的元素值，但不删除该元素
 *
 */
void queueTest1()
{
    cout << "queueTest1():: ..." << endl;
    //创建队列对象,动态申请内存
    queue<string> *queueAnimal = new queue<string>();

    //向队列添加元素
    queueAnimal->push("小花猫");
    queueAnimal->push("大黄狗");
    queueAnimal->push("母老虎");
    queueAnimal->push("大象");
  

    //判断队列是否为空
    bool isEmpty = queueAnimal->empty();
    //获取队列大小
    int size = queueAnimal->size();
    cout << "isEmpty:" << isEmpty << ",size:" << size << endl;
    while(!queueAnimal->empty())
    {
        //string animal = queueAnimal->front();//获取队列的头元素
        string animal = queueAnimal->back();//获取队列尾元素
        cout << animal << " ";
        queueAnimal->pop();//删除队列尾元素
    }
   

    cout << endl;
    cout << endl;

    //释放内存
    delete queueAnimal;
}



/**
*	3.2.1 声明deque容器
*		#include<deque>  // 头文件
*		deque<type> deq;  // 声明一个元素类型为type的双端队列que
*		deque<type> deq(size);  // 声明一个类型为type、含有size个默认值初始化元素的的双端队列que
*		deque<type> deq(size, value);  // 声明一个元素类型为type、含有size个value元素的双端队列que
*		deque<type> deq(mydeque);  // deq是mydeque的一个副本
*		deque<type> deq(first, last);  // 使用迭代器first、last范围内的元素初始化deq
*
*	3.2.2 deque的常用成员函数
*		deque<int> deq;
*		deq[]：用来访问双向队列中单个的元素。
*		deq.front()：返回第一个元素的引用。
*		deq.back()：返回最后一个元素的引用。
*		deq.push_front(x)：把元素x插入到双向队列的头部。
*		deq.pop_front()：弹出双向队列的第一个元素。
*		deq.push_back(x)：把元素x插入到双向队列的尾部。
*		deq.pop_back()：弹出双向队列的最后一个元素。
*
*	3.2.3 deque的一些特点
*		支持随机访问，即支持[ ]以及at()，但是性能没有vector好。
*		可以在内部进行插入和删除操作，但性能不及list。
*		deque两端都能够快速插入和删除元素，而vector只能在尾端进行。
*		deque的元素存取和迭代器操作会稍微慢一些，因为deque的内部结构会多一个间接过程。
*		deque迭代器是特殊的智能指针，而不是一般指针，它需要在不同的区块之间跳转。
*		deque可以包含更多的元素，其max_size可能更大，因为不止使用一块内存。
*		deque不支持对容量和内存分配时机的控制。
*		在除了首尾两端的其他地方插入和删除元素，都将会导致指向deque元素的任何pointers、references、iterators失效。不过，deque的内存重分配优于vector，因为其内部结构显示不需要复制所有元素。
*		deque的内存区块不再被使用时，会被释放，deque的内存大小是可缩减的。不过，是不是这么做以及怎么做由实际操作版本定义。
*		deque不提供容量操作：capacity()和reverse()，但是vector可以。
*
*/
void dequeTest1()
{
    cout << "dequeTest1():: ..." << endl;
    //创建一个双向队列,动态申请内存
    deque<int> *id = new deque<int>();

    //向双向队列添加元素
    for(int i = 0; i < 20; i++)
    {
        if(i % 2 == 0)
        {
            //在队列前面插入元素i
            id->push_front(i);
        }else
        {
            //在队列后面插入元素i
            id->push_back(i);
        }
    }
    
    //变量队列元素
    deque<int>::iterator iter;
    for(iter = id->begin(); iter != id->end(); iter++)
    {
        int ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl;

    //弹出队列的第一个元素
    id->pop_front();

    //弹出队列的最后一共元素
    id->pop_back();
    for(iter = id->begin(); iter != id->end(); iter++)
    {
        int ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl;

    //不停的弹出元素
    // while(!id->empty())
    // {
    //    int ele = id->back();//获取最后一个元素
    //    cout << ele << " ";
    //    id->pop_back();//弹出队列的最后一共元素
    // }
    // cout << endl;

    while(!id->empty())
    {
       int ele = id->front();//获取最后一个元素
       cout << ele << " ";
       id->pop_front();//弹出队列的最后一共元素
    }
    cout << endl;

    //弹出后
    bool isEmpty = id->empty();
    int size = id->size();
    cout << "弹出后,isEmpty:" << isEmpty << ",size:" << size << endl;
    for(iter = id->begin(); iter != id->end(); iter++)
    {
        int ele = *iter;//获取元素
        cout << ele << " ";
    }
    cout << endl; 

    //释放内存
    delete id;
    cout << endl;
}