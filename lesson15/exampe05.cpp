#include<iostream>
#include<string>
#include<pthread.h>
#include<cstdlib>

//定义常量
#define BOUNDARY 5

int tasks = 10;//变化的全局变量
pthread_mutex_t tasks_mutex;//互斥锁 
//条件信号变量，处理两个线程间的条件关系，当task>5，hello2处理，反之hello1处理，直到task减为0  
pthread_cond_t tasks_cond;

void * say_hello2(void * args)
{
    pthread_t pid = pthread_self();//获取当前线程id  
    std::cout << "[" << pid << "] hello in 线程 2 线程号 " << (int)args << std::endl;

    bool is_signaled = false;//信号
    while(1)
    {
        pthread_mutex_lock(&tasks_mutex);//加锁
        if(tasks > BOUNDARY)
        {
            std::cout << "[" << pid << "] 线程 task = " << tasks << " 在线程" << (int)args << std::endl;
            --tasks;//tasks自减
        }else if(!is_signaled)//信号处理
        {
            std::cout << "[" << pid << "] 线程2交给信号控制线程1执行" << (int)args << std::endl;
            pthread_cond_signal(&tasks_cond);//signal:向hello1发送信号，表明tasks已经>5  
            is_signaled = true;//表明信号已发送，退出此线程
        }
        pthread_mutex_unlock(&tasks_mutex);//解锁 

        if(tasks == 0)
        {
            break;//结束线程
        }

    } 
}

void * say_hello1(void * args)
{
    pthread_t pid = pthread_self();//获取当前线程id  
    std::cout << "[" << pid << "] hello 在线程 1 线程号 " << (int)args << std::endl;
    while(1)
    {
        pthread_mutex_lock(&tasks_mutex);//加锁
        if(tasks > BOUNDARY)
        {
            std::cout << "[" << pid << "]信号控制在线程" << (int)args << std::endl;
            //wait:等待信号量生效，接收到信号，向hello2发出信号，跳出wait,执行后续
            pthread_cond_wait(&tasks_cond,&tasks_mutex);
        }else
        {
            std::cout << "[" << pid << "] 线程 task = " << tasks << " 在线程" << (int)args << std::endl;
            --tasks;//自减
        }

        pthread_mutex_unlock(&tasks_mutex);//解锁  
        if(tasks == 0)
        {
            break;
        }
    }


}

int main()
{
    //信号量的实现线程的同步
    pthread_attr_t attr;//线程属性结构体，创建线程时加入的参数  
    pthread_attr_init(&attr);//初始化
     //是设置你想要指定线程属性参数，这个参数表明这个线程是可以join连接的，join功能表示主程序可以等线程结束后再去做某事，实现了主程序和线程同步功能 
    pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_JOINABLE);
    pthread_cond_init(&tasks_cond,NULL);//初始化条件信号量  
    pthread_mutex_init(&tasks_mutex,NULL);//初始化互斥量
    pthread_t tid1,tid2; //保存两个线程id 

    int index1 = 1;
    int ret = pthread_create(&tid1,&attr,say_hello1,(void*)&index1);
    if(ret != 0)
    {
        std::cout << "线程1创建失败" << ret << std::endl;
    }

    int index2 = 2;
    ret = pthread_create(&tid2,&attr,say_hello2,(void*)&index2);
    if(ret != 0)
    {
        std::cout << "线程2创建失败" << ret << std::endl;
    }

    pthread_join(tid1,NULL);//连接两个线程  
    pthread_join(tid2,NULL);

    pthread_attr_destroy(&attr);//释放内存
    pthread_mutex_destroy(&tasks_mutex);//注销锁 
    pthread_cond_destroy(&tasks_cond);//正常退出 

    return 0;
}
