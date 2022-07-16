#include "./include/Sample.h"

int MultiThreadProduceConsume::item_id = 0;

void test1()
{
    cout << "test1():: ..." << endl;
    //生产者消费者模型
    MultiThreadProduceConsume t;
    t.run();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}