#include "./include/Sample.h"

//在文件外实现函数 - test1()函数
void test1()
{
    cout << "test1():: ..." << endl;
    std::thread thread_test1(myThread1);
    thread_test1.join();//等待线程结束
    // std:thread thread_test2(myThread2,10);
    // thread_test2.join();
    cout << "test1():: main ... " << endl;
}

//在文件外实现函数 - test2()函数
void test2()
{
    cout << "test1():: ..." << endl;
}