#include<iostream>

using namespace std;

//定义一个函数模板 - 交换变量的值
template <typename T>
void swap(T &t1,T &t2)
{
    T temp = t1;
    t1 = t2;
    t2 = temp;
}

template <typename T>
void max(T &t1,T &t2)
{
    return (t1 > t2) ? t1: t2;
}


int main(int arg,char *args[])
{
    //使用函数模板
    int ia = 3;
    int ib = 4;
    double da = 3.14;
    double db = 2.877;
    char const *s1 = "深圳";
    char const *s2 = "北京";
    cout << "交换前: ia=" << ia << ",ib=" << ib << endl;
    cout << "交换前: da=" << da << ",db=" << db << endl;
    cout << "交换前: s1=" << s1 << ",s2=" << s2 << endl;

    //会抛出错误
    //error: call of overloaded ‘swap(int&, int&)’ is ambiguous | swap(ia,ib);
    //为什么不能传变量呢？

    //swap(ia,ib);
    //swap(da,db);
    //swab(s1,s2);

    cout << "交换后: ia=" << ia << ",ib=" << ib << endl;
    cout << "交换后: da=" << da << ",db=" << db << endl;
    cout << "交换后: s1=" << s1 << ",s2=" << s2 << endl;

    cout << "max=" << max(3.14,2.5) << endl;
    cout << "max=" << max(4,1024) << endl;
    //cout << "max=" << max(ia,ib) << endl;

    return 0;
}