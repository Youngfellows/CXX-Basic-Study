#ifndef APPLICATION_H
#define APPLICATION_H

#include "./Global.h"

//定义Application类  - 应用程序
class Application
{
    private:
        std::mutex mMutex;//互斥量
        std::mutex mMutex2;//互斥量
        std::condition_variable mCondVar;//条件变量
        bool mDataLoaded;//数据是否加载完成
        long mMoney = 0;//钱
        int count = 0;//次数
    public:
        Application();
        ~Application();
        void loadData();//加载数据
        void mainTask();//添加任务
        long getMoney();

    private:
        void notify();//通知另外一共线程
        bool isDataLoaded();//数据是否加载完成
};

#endif