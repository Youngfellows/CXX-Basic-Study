#include "../include/MyTask.h"

//在文件外实现函数 - myThread1()函数
void myThread1()
{
    cout << "myThread1():: ..." << endl;
}

//在文件外实现函数 - myThread12()函数
void myThread2(int n)
{
    cout << "myThread2():: ..." << endl;
    for(int i = 0; i < n; i++)
    { 
        cout << "myThread2():: i=" << i << endl;
    }
}