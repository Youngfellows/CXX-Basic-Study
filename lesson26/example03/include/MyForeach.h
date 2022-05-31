#ifndef MY_FOREACH_H
#define MY_FOREACH_H

#include "./Global.h"

class MyForeach
{
    private:
        int nums[SIZE];//数组
        vector<string> citys;//集合

    public:
        MyForeach();
        ~MyForeach();
        void testForeach1();
        void testForeach2();

    private:
        void init();//初始化数据
};

#endif