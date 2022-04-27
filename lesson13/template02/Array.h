#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>

//类模板
//数组类模板
template<typename T>
class Array
{
    protected: 
        int size;//数组大小
        T *element;//类型是指针变量T * ,即是一个数组

    public: 
        Array(int s);
        virtual ~Array();//虚析构函数
        virtual const T & get(int index) const;//根据索引获取数据
        virtual void put(int index, const T & value);//插入数据    
};


//具体实现---构造函数
//类模板的成员函数是函数模板 
template<typename T> Array<T>::Array(int s)
{
    std::cout << "Array()构造函数" << std::endl;
    if(s > 1)
    {
        this->size = s;
    }else
    {
        this->size = 1;
    }

    element = new T[size];//对象数组,指针变量指向数组元素的首地址
}

//析构函数
template<typename T> Array<T>::~Array()
{
    std::cout << "~Array()析构函数" << std::endl;
    delete [] this->element;//删除数组
}

//插入元素
template<typename T> void Array<T>::put(int index,const T & value)
{
    element[index] = value;//插入元素
}

//获取元素 -- 函数返回常引用 
template<typename T> const T & Array<T>::get(int index) const
{
    return element[index];
}

#endif