#include "../include/MyTask.h"

//在文件外实现函数 - myThread1()函数
void myThread1()
{
    cout << "myThread1():: ..." << endl;
}

//在文件外实现函数 - myThread2()函数
void myThread2(int n)
{
    cout << "myThread2():: ..." << endl;
    for(int i = 0; i < n; i++)
    { 
        cout << "myThread2():: i=" << i << endl;
    }
}

//在文件外实现函数 - myThread3()函数
void myThread3()
{
    cout << "myThread3():: ..." << endl;
    for(int i = 0; i < 10; i++)
    { 
        cout << "myThread3():: i=" << i << endl;
    }
}

//在文件外实现函数 - myThread4()函数
void myThread4(int *num)
{
    //使用detach（）不能使用局部变量
    //使用detach（）以后因为和当前函数分离开了，有可能调用detach 的函数执行完成而线程没有结束这个使用如果引用了局部变量可能会出问题
    cout << "myThread4():: ..." << endl;
    //开辟的空间已经释放了,可能出现问题
    for(int i = 0; i < 20; i++)
    {
        cout << "myThread4():: i=" << i << ",&num=" << num << ",num=" << *num << endl;       
    }
}

//在文件外实现函数 - myThread5()函数
void myThread5(string &city)//定义线程入口函数
{
    cout << "myThread4():: ..." << endl;
    cout << "city:" << city << endl;
    city = "贵州省贵阳市南明区";
}

//在文件外实现函数 - myThread6()函数
void myThread6(unique_ptr<string> city)
{
    cout << "myThread6():: ..." << endl;
    cout << "myThread6():: city=" << *city << endl;
    //*city = "海南省海口市海沧区";//修改智能指针的值
}