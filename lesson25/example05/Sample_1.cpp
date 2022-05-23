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