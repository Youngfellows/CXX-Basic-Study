#include<iostream>
#include<cstdlib>
#include<pthread.h>

//定义5条线程
#define NUM_THREADS 5

//线程执行功能--打印线程号
void *printHello(void *threadid)
{
    long tid;//线程号
    tid = (long)threadid;//类型转换
    std::cout << "Hello world Thread ID, " << tid << std::endl;
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
    int threadCount;
    long i;
    for(i = 0; i < NUM_THREADS;i++)
    {
        std::cout << "main() : creating thread, " << i << std::endl;
        threadCount = pthread_create(&threads[i],NULL,printHello,(void *)i);//创建线程
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