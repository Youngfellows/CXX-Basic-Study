#ifndef M_THREAD_P_C_H
#define M_THREAD_P_C_H

#include "./Global.h"

/**
 * @brief 多线程生产者消费者模型
 *
 */
class MultiThreadProduceConsume
{
private:
    condition_variable produce_msgQueue; //定义了一个条件变量，用于线程之间的通信
    condition_variable consume_msgQueue; //定义了一个条件变量，用于线程之间的通信
    mutex mtx;                           //定义一个互斥量，即可以理解为一把锁  //防止两个线程同时操作一个内存空间
    vector<std::thread> tpool;           //线程列表

private:
    queue<int> item_buff; //数据容器列表
    const int buffsize;   //容器大小
    static int item_id;   //插入的数据的ID,根据数据不同,可以为不同的类型
    int c_no;             //消费者线程数量
    int p_no;             //生产者线程数量

private:
    /**
     * @brief 生产者,线程回调函数
     *
     */
    void producItem()
    {
        while (true)
        {
            std::unique_lock<mutex> lck(mtx); //抢占锁,才可以进行执行下面的代码

            //容器是满的,则等待消费者消费
            while (item_buff.size() == buffsize)
            {
                // wait()有两个参数，第二个参数可以为true或false（不写默认为false），若为true，那么wait直接返回并继续执行，若为false，阻塞等待，即下面的作用
                //用来等待一个东西：就本例子来说，wait解除互斥锁，并阻塞到本行，直到某个线程调用notify_all成员函数为止
                produce_msgQueue.wait(lck);
            }
            this_thread::sleep_for(chrono::milliseconds(100)); //休眠100毫秒
            item_id = item_id++ % buffsize;
            item_buff.push(item_id); //向容器添加数据
            cout << "product item id: " << item_id << endl;

            consume_msgQueue.notify_all(); //用于唤醒其他线程，即唤醒消费者线程，进行消费
            lck.unlock();                  //释放锁
        }
    }

    /**
     * @brief 消费者,线程回调函数
     *
     */
    void consumeItem()
    {
        while (true)
        {
            std::unique_lock<mutex> lck(mtx); //抢占锁,才可以进行执行下面的代码
            //容器是空的,则等待生产者生产产品
            while (item_buff.empty())
            {
                cout << "wait product" << endl;
                // wait()有两个参数，第二个参数可以为true或false（不写默认为false），若为true，那么wait直接返回并继续执行，若为false，阻塞等待，即下面的作用
                //用来等待一个东西：就本例子来说，wait解除互斥锁，并阻塞到本行，直到某个线程调用notify_all成员函数为止
                consume_msgQueue.wait(lck);
            }
            this_thread::sleep_for(chrono::milliseconds(110));         //休眠110毫秒
            cout << "customer id : " << this_thread::get_id() << endl; //获取当前线程ID
            cout << "consume Item id: " << item_buff.front() << endl;  //消费数据
            item_buff.pop();                                           //移除数据
            produce_msgQueue.notify_one();                             //用于唤醒其他线程，即唤醒生产者线程，可以进行产品生产
            lck.unlock();                                              //释放锁
        }
    }

public:
    /**
     * @brief 构造函数
     *
     * @param size 容器大小
     * @param pno
     * @param cno
     */
    MultiThreadProduceConsume(int size = 10, int pno = 1, int cno = 5) : buffsize(size), p_no(pno), c_no(cno){};

    /**
     * @brief 运行生产者消费者模型
     *
     */
    void run()
    {
        productTask();
        customerTask();
        for (auto &i : tpool)
        {
            i.join();
        }
    }

    /**
     * @brief 生产者线程
     *
     */
    void productTask()
    {
        for (int i = 0; i < p_no; i++)
        {
            tpool.emplace_back(thread(&MultiThreadProduceConsume::producItem, this));
        }
    }

    /**
     * @brief 消费者线程
     *
     */
    void customerTask()
    {
        for (int i = 0; i < c_no; i++)
        {
            tpool.emplace_back(thread(&MultiThreadProduceConsume::consumeItem, this));
        }
    }
};
#endif