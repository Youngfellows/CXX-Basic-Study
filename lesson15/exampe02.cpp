#include<iostream>
#include<cstdlib>
#include<pthread.h>
#include<string>

//定义5条线程
#define NUM_THREADS 10

//向线程传递参数
//定义结构体
struct ThreadData
{
    int thread_id;//线程ID
    const char  *message;//内容
};


//线程执行功能--打印线程号
void *printHello(void *thread_arg)
{
    // long tid;//线程号
    // tid = (long)threadid;//类型转换
    //说明: 创建的线程，没有机会执行就结束了

    struct ThreadData *my_data;
    my_data = (struct ThreadData *)thread_arg;//类型转换


    std::cout << "Thread ID " << my_data->thread_id << " ,";
    std::cout << "Message " << my_data->message << std::endl;

    pthread_exit(NULL);//结束这个线程
}

int main()
{
    //编译 g++ exampe01.cpp -lpthread

    //C++多线程编程
    std::cout << "Value of __LINE__: " << __LINE__ << std::endl;
    std::cout << "Value of __FILE__: " << __FILE__ << std::endl;
    std::cout << "Value of __DATE__: " << __DATE__ << std::endl;
    std::cout << "Value of __TIME__: " << __TIME__ << std::endl;

    //创建5条线程
    pthread_t threads[NUM_THREADS];
    //结构体数组
    struct ThreadData datas[NUM_THREADS];

    int threadCount;
    int i;
    for(i = 0; i < NUM_THREADS;i++)
    {
        std::cout << "main() : creating thread, " << i << std::endl;

        //赋值
        datas[i].thread_id = i;
        datas[i].message = "this is message";

        threadCount = pthread_create(&threads[i],NULL,printHello,(void *)&datas[i]);//创建线程
        if(threadCount)
        {
            std::cout << "创建线程" << threadCount << "失败" << std::endl;
            exit(-1);
        }
    }

    //结束线程
    pthread_exit(NULL);

    return 0;
} 