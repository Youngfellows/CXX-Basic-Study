
#include<iostream>

using namespace std;

//定义Compare类模板 - 比较数据
template<class T>
class Compare
{
    private:
        T t1;//私有数据t1
        T t2;//私有数据t2

    public:
        Compare(T t1,T t2);//构造函数
        T max();//求最大值
        T min();//求最小值

}; 

//在类外定义类模板的各个成员函数 - 也是模板函数
template<class T>
Compare<T>::Compare(T t1,T t2)
{
    this->t1 = t1;
    this->t2 = t2;
}


//在类外定义类模板的各个成员函数 - 也是模板函数 - max()函数
template<class T>
T Compare<T>::max()
{
   return (t1 > t2) ? t1: t2;
}

//在类外定义类模板的各个成员函数 - 也是模板函数 - min()函数
template<class T>
T Compare<T>::min()
{
   return (t1 < t2) ? t1: t2;
}