#include "../include/SampleStack.h"

/**
 *   stack<int> s;
 *   stack< int, vector<int> > stk;  //覆盖基础容器类型，使用vector实现stk
 *   s.empty();  //判断stack是否为空，为空返回true，否则返回false
 *   s.size();   //返回stack中元素的个数
 *   s.pop();    //删除栈顶元素，但不返回其值
 *   s.top();    //返回栈顶元素的值，但不删除此元素
 *   s.push(item);   //在栈顶压入新元素item
 * 
 */
void stackTest1()
{
    cout << "stackTest1():: ..." << endl;
    //初始化一个栈,创建对象,动态申请内存
    stack<string> *stackCity = new stack<string>();

    //在栈顶压入元素
    stackCity->push("深圳");
    stackCity->push("上海");
    stackCity->push("北京");
    stackCity->push("广州");

    //栈是否为空
    bool isEmpty = stackCity->empty();
    //栈大小
    int size = stackCity->size();
    cout << "isEmpty:" << isEmpty << ",size:" << size << endl;
    if(isEmpty)
    {
        cout << "为空" << endl;
    }else
    {
        cout << "不为空" << endl;
    }

    //遍历栈元素,出栈
    while(!stackCity->empty())
    {
        string city = stackCity->top();//返回栈顶元素
        cout << city << " ";
        stackCity->pop();//删除栈顶元素
    }
    cout << endl;
    cout << endl;

    //释放内存
    delete stackCity;
}

void stackTest2()
{
    cout << "stackTest2():: ..." << endl;
}

void stackTest3()
{
    cout << "stackTest3():: ..." << endl;
}

void stackTest4()
{
    cout << "stackTest4():: ..." << endl;
}