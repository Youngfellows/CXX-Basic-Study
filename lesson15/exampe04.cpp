#include<iostream>
#include<pthread.h>
#include<cstdlib>
#include<string>

//定义常量
#define NUM_THREAD 10

int sum = 0;//定义全局变量，让所有线程同时写，这样就需要锁机制
pthread_mutex_t sum_mute;//互斥锁 


void * say_hello(void * args)
{
    std::cout << "hello 在线程 " << *((int*)args) << std::endl;
    pthread_mutex_lock(&sum_mute);//先加锁，再修改sum的值，锁被占用就阻塞，直到拿到锁再修改sum;
    std::cout << "修改前: sum = " << sum << " 在线程" << *((int*)args) << std::endl;
    sum += *((int *)args);//求和
    std::cout << "修改后: sum = " << sum << " 在线程" << *((int*)args) << std::endl;
    pthread_mutex_unlock(&sum_mute);//释放锁，供其他线程使用  
    pthread_exit(0);
}

int main()
{
    //互斥锁的实现
    pthread_t tids[NUM_THREAD];//线程ID
    int indexs[NUM_THREAD];//线程索引

    pthread_attr_t attr;//线程属性结构体，创建线程时加入的参数 
    pthread_attr_init(&attr);//初始化

    //是设置你想要指定线程属性参数，这个参数表明这个线程是可以join连接的，join功能表示主程序可以等线程结束后再去做某事，实现了主程序和线程同步功能 
    pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_JOINABLE); 

    pthread_mutex_init(&sum_mute,NULL);//对锁进行初始化

    for(int i = 0; i < NUM_THREAD; i++)
    {
        indexs[i] = i;//赋值
        //5个进程同时去修改sum
        int ret = pthread_create(&tids[i],&attr,say_hello,(void *)&indexs[i]);//创建一个线程

        if(ret != 0)
        {
            std::cout << "创建现场失败: 错误码" << ret << std::endl;
        }else
        {
            std::cout << "创建线程成功" << i << std::endl;
        }
    }

    pthread_attr_destroy(&attr);//释放内存

    void *status;
    for(int i = 0; i < NUM_THREAD; i++)
    {
        int ret = pthread_join(tids[i],&status);//主程序join每个线程后取得每个线程的退出信息status  
        if(ret != 0)
        {
            std::cout << "Main线程join线程error,错误码: " << ret << std::endl;
        }else
        {
            std::cout << "join线程成功" << i << std::endl;
        }
    }

    std::cout << "5个线程操作后,最终的sum = " << sum << std::endl;
    pthread_mutex_destroy(&sum_mute);
    pthread_exit(NULL);

    return 0;
}
