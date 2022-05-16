#include "./Global.h"

//定义一个函数模板 - 交换变量的值
template <typename T>
void swap1(T &t1,T &t2)
{
    cout << "swap1():: " << endl;
    T temp = t1;
    t1 = t2;
    t2 = temp;
}

//定义一个函数模板 - 交换变量的值
template <typename T>
void swap2(T *t1,T *t2)
{
    cout << "swap2():: " << endl;
    T temp = *t1;
    *t1 = *t2;
    *t2 = temp;
}
