#include "./include/Sample.h"

//在文件外实现函数 - test1()函数
void test1()
{
    //1. C++11线程创建的方式: 函数传递方式
    cout << "test1():: ..." << endl;
    std::thread thread_test1(myThread1);
    thread_test1.join();//等待线程结束
    std::thread thread_test2(myThread2,10);
    thread_test2.join();
    cout << "test1():: main finish ... " << endl;
    cout << endl;
}

//在文件外实现函数 - test2()函数
void test2()
{
    //2. C++11线程创建的方式: lambda表达式
    cout << "test2():: ..." << endl;
    std::thread thread_test([](){
        for(int i = 0; i < 10; i++)
        {
            cout << "thread_test():: i=" << i << endl;
        }
    });
   //等待线程结束
   thread_test.join(); 
   cout << "test2():: main finish ..." << endl;
   cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //3. C++11线程创建的方式: 重载运算符
    MyThread1 *myThread = new MyThread1();
    std::thread thread_test(*myThread);//创建线程
    //等待线程结束
    thread_test.join();
    cout << "test3():: main finish ..." << endl;
    cout << endl;
    //释放内存
    delete myThread;
}

void test4()
{
    //4. C++11线程创建的方式: 成员函数做为线程入口
    cout << "test4():: ..." << endl;
    //创建对象,动态申请内存
    MyThread2 *myThread = new MyThread2();
    //创建线程,通过指针获取对象
    std::thread *thread_test = new std::thread(&MyThread2::myThreadIn,myThread);

    //等待线程结束
    thread_test->join();
    cout << "test4():: main finish ..." << endl;
    cout << endl;

    //释放内存 
    delete thread_test;
    delete myThread;
}

void test5()
{
    cout << "test5():: ..." << endl;
    //使用detach（）会和主线程分离
    std::thread *thread_test = new std::thread(myThread3);

    //等待线程结束
    thread_test->detach();

    while(1)
    {
        //使用死循环,让主线程不结束
    }

    cout << "test6():: main finish ..." << endl;
    cout << endl;

    //释放内存
    delete thread_test;
}

void test6()
{
    cout << "test6():: ..." << endl;
    //创建对象,动态申请内存
    int *t = new int();
    *t = 6;

    //使用detach（）会和主线程分离
    std::thread *thread_test = new std::thread(myThread4,t);
    
    cout << "test6():: t=" << *t << endl;

    //等待线程结束
    thread_test->detach();

    //释放内存
    cout << "delete t" << endl;
    delete t;

    while(1)
    {
        //使用死循环,让主线程不结束
    }

    cout << "test6():: main finish ..." << endl;
    cout << endl;

    //释放内存
    delete thread_test;
}

void test7()
{
    //1. 线程和使用地双向传递数据方法: 使用std::ref()
    cout << "test7():: ..." << endl;
    string city = "广东省深圳市南山区";
    //创建一个线程
    std::thread *thread_test = new std::thread(myThread5,std::ref(city));
    cout << "test7():: main,1,city=" << city << endl;
    //等待线程结束
    thread_test->join();
    cout << "test7():: main,2,city=" << city << endl;
    
    cout << "test7():: main finish ..." << endl;
    cout << endl;

    //释放内存
    delete thread_test; 
}

void test8()
{
    //1. 线程和使用地双向传递数据方法: 使用std::ref()
    cout << "test8():: ..." << endl;
    //string *city_str = new string("广东省深圳市福田区");
    unique_ptr<string> city(new string("广东省深圳市福田区"));
    cout << "test8():: main,1,*city=" << *city << endl;
    
    //创建一个线程
    std::thread *thread_test = new std::thread(myThread6,std::move(city));
    //cout << "test8():: main,2,*city=" << *city << endl;
    //等待线程结束
    thread_test->join();
    //cout << "test8():: main,3,*city=" << *city << endl;//使用move以后原先的实效了，这样看来使用只能指针应该是只能实现传指针
    
    cout << "test8():: main finish ..." << endl;
    cout << endl;

    //释放内存
    delete thread_test; 
}

void test9()
{
    cout << "test9():: ..." << endl;

    //创建对象,动态申请内存
    MyThread3 *mythread = new MyThread3();
   
    //创建线程,通过指针获取对象
    std::thread *thread_test1 = new std::thread(&MyThread3::myThreadIn,mythread);
    std::thread *thread_test2 = new std::thread(&MyThread3::myThreadIn,mythread);
   
    //等待线程结束
    thread_test1->join();
    thread_test2->join();

    cout << "test9():: main finish ..." << endl;
    long sum = mythread->get();
    cout << "test9():: sum=" << sum << endl;
    cout << endl;

    //释放内存
    delete mythread;
    delete thread_test1;
    delete thread_test2;
}

void test10()
{
    cout << "test10():: ..." << endl;

    //创建对象,动态申请内存
    MyThread4 *mythread = new MyThread4();
   
    //创建线程,通过指针获取对象
    std::thread *thread_test1 = new std::thread(&MyThread4::myThreadIn,mythread);
    std::thread *thread_test2 = new std::thread(&MyThread4::myThreadIn,mythread);
   
    //等待线程结束
    thread_test1->join();
    thread_test2->join();

    cout << "test10():: main finish ..." << endl;
    long sum = mythread->get();
    cout << "test10():: sum=" << sum << endl;
    cout << endl;

    //释放内存
    delete mythread;
    delete thread_test1;
    delete thread_test2;
}

void test11()
{
    cout << "test11():: ..." << endl;

    //创建对象,动态申请内存
    MyThread5 *mythread = new MyThread5();
   
    //创建线程,通过指针获取对象
    std::thread *thread_test1 = new std::thread(&MyThread5::myTask1,mythread);
    std::thread *thread_test2 = new std::thread(&MyThread5::myTask2,mythread);
   
    //等待线程结束
    thread_test1->join();
    thread_test2->join();

    cout << "test11():: main finish ..." << endl;
    long sum = mythread->get();
    cout << "test11():: sum=" << sum << endl;
    cout << endl;

    //释放内存
    delete mythread;
    delete thread_test1;
    delete thread_test2;
}

void test12()
{
    cout << "test12():: ..." << endl;

    //创建对象,动态申请内存
    MyThread6 *mythread = new MyThread6();
   
    //创建线程,通过指针获取对象
    std::thread *thread_test1 = new std::thread(&MyThread6::myTask,mythread);
    std::thread *thread_test2 = new std::thread(&MyThread6::myTask,mythread);
   
    //等待线程结束
    thread_test1->join();
    thread_test2->join();

    cout << "test12():: main finish ..." << endl;
    long sum = mythread->get();
    cout << "test12():: sum=" << sum << endl;
    cout << endl;

    //释放内存
    delete mythread;
    delete thread_test1;
    delete thread_test2;
}


void test13()
{
    cout << "test13():: ..." << endl;

    //创建对象,动态申请内存
    MyThread7 *mythread = new MyThread7();
   
    //创建线程,通过指针获取对象
    std::thread *thread_test1 = new std::thread(&MyThread7::myTask,mythread);
    std::thread *thread_test2 = new std::thread(&MyThread7::myTask,mythread);
   
    //等待线程结束
    thread_test1->join();
    thread_test2->join();

    cout << "test13():: main finish ..." << endl;
    long sum = mythread->get();
    cout << "test13():: sum=" << sum << endl;
    cout << endl;

    //释放内存
    delete mythread;
    delete thread_test1;
    delete thread_test2;
}

void test14()
{
    cout << "test14():: ..." << endl;

    //创建对象,动态申请内存
    MyThread8 *mythread = new MyThread8();
   
    //创建线程,通过指针获取对象
    std::thread *thread_test1 = new std::thread(&MyThread8::myTask,mythread);
    std::thread *thread_test2 = new std::thread(&MyThread8::myTask,mythread);
   
    //等待线程结束
    thread_test1->join();
    thread_test2->join();

    cout << "test14():: main finish ..." << endl;
    long sum = mythread->get();
    cout << "test14():: sum=" << sum << endl;
    cout << endl;

    //释放内存
    delete mythread;
    delete thread_test1;
    delete thread_test2;
}