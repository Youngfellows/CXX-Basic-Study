#ifndef COMPARE_SET_H
#define COMPARE_SET_H

#include "./Global.h"

//定义类CompareSet - 仿函数CompareSet
class CompareSet
{

    public: 
        //从大到小排序
        bool operator()(int const &v1, int const &v2) const
        {
            //cout << "v1:" << v1 << ",v2:" << v2 << endl;
            return v1 > v2;
        }

        //从小到大排序
        //bool operator()(int v1, int v2)
        //{
        //    return v1 < v2;
        //}
};

#endif