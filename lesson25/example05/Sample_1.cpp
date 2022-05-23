#include "./include/Sample.h"

//在文件外实现接口函数 - test1()方法
void test1()
{
    cout << "test1():: ..." << endl;
    //创建对象,动态申请内存
    Sinh *sin = new Sinh();
    //通过指针访问函数
    double result = sin->sinh();
    cout << "result=" << result << endl;


    //释放内存
    delete sin;
}


//在文件外实现接口函数 - test2()方法
void test2()
{
    cout << "test2():: ..." << endl;
    //创建对象,动态申请内存
    Equation *equation = new Equation();

    //通过指针访问函数
    double result = equation->solut();
    cout << "result=" << result << endl;

    //释放内存
    delete equation;
}

//在文件外实现接口函数 - test3()方法
void test3()
{
    cout << "test3():: ..." << endl;
    //创建对象,动态申请内存
    Godbaha *godhaba = new Godbaha();

    //通过指针访问函数
    int *p = godhaba->get();
    for(int i = 0; i < 2; i++)
    {
        int ele = *(p + i);
        cout << ele << " ";
    }
    cout << endl;
    int primeA = godhaba->getPrimeA();
    int primeB = godhaba->getPrimeB();
    cout << "primeA:" << primeA << endl;
    cout << "primeB:" << primeB << endl;

    //释放内存
    free(p);
    delete godhaba;
}

//在文件外实现接口函数 - test4()方法
void test4()
{
    cout << "test4():: ..." << endl;

    //创建对象,动态申请内存
    Polynomial *p = new Polynomial();
    //通过指针访问函数
    float result =  p->fx();
    cout << "result=" << result << endl;

    //释放内存
    delete p;
}