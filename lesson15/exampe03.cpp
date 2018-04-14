#include<string>
#include<pthread.h>
#include<iostream>
#include<cstdlib>
#include<unistd.h>

#define NUM_THREAD 5


void *wait(void *t)
{
    int i;
    long tid;
    tid = *((long*)t);

    sleep(3);
    std::cout << "Sleepint in thread " << std::endl;
    std::cout << "Thread with id : " << tid << " ...exiting " << std::endl;

    long status =*((long *)t)+10;
    // pthread_exit(NULL);
    pthread_exit((void *)status);
}

int main()
{
    int rc;
    int i;
    pthread_t threads[NUM_THREAD];
    pthread_attr_t attr; //线程属性结构体，创建线程时加入的参数  
    void *status;

    //  初始化并设置线程为可连接的（joinable）
    pthread_attr_init(&attr);//初始化  
    pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_JOINABLE);
    //是设置你想要指定线程属性参数，这个参数表明这个线程是可以join连接的，join功能表示主程序可以等线程结束后再去做某事，实现了主程序和线程同步功能  

    for(i = 0; i < NUM_THREAD;i++)
    {
        std::cout << "main(): creatint thread, " << i << std::endl;
        rc = pthread_create(&threads[i],NULL,wait,(void *)&i); 
        if(rc)
        {
            std::cout << "Error: unable to create thread, " << rc << std::endl;
            exit(-1);
        }
    }

    // 删除属性，并等待其他线程
    pthread_attr_destroy(&attr);//释放内存
    for(i = 0; i < NUM_THREAD; i++)
    {
        //主程序join每个线程后取得每个线程的退出信息status 
        rc =   pthread_join(threads[i],&status); //pthread_join用来等待一个线程的结束，是一个线程阻塞的函数  
        if(rc)
        {
            std::cout << "pthread_join error:error_code = " << rc << std::endl; 
            exit(-1);
        }else
        {
            std::cout << "pthread_join 线程加入success，状态staus = " << (long)status << std::endl;
        }
        // std::cout << "Main: completed thread id : " << i;
        // std::cout << " exiting with status: " << status << std::endl;
    }
    std::cout << "Main : program exiting. " << std::endl;
    pthread_exit(NULL);

    return 0;
}