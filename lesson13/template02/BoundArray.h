#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H

#include "Array.h"

//继承于模板类
template<typename T>
class BoundArray : public Array<T>
{
    private: 
        int min;//最小值

    public: 
        BoundArray(int low = 0, int height = 1,int si = 0);
        virtual ~BoundArray();
        virtual const T & getElement(int index) const;//获取元素
        virtual void putElement(int index,const T &value);//插入元素
};

template<typename T> BoundArray<T>::BoundArray(int low,int height,int si) : Array<T>(si)
{
    std::cout << "BoundArray()构造函数" << std::endl;
}

template<typename T> BoundArray<T>::~BoundArray()
{
    std::cout << "~BoundArray()析构函数" << std::endl;
}

template<typename T> const T & BoundArray<T>::getElement(int index) const
{
    return this->Array<T>::get(index);
}

template<typename T> void BoundArray<T>::putElement(int index,const T & value)
{
    this->Array<T>::put(index,value);
}

#endif