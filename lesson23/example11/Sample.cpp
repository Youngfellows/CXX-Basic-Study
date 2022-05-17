#include "./include/Sample.h"

//在文件外实现接口函数 - fsin()函数
float fsin(float x)
{
    cout << "fsin():: sin[" << x << "]=" << sin(x) << endl;
    return sin(x);
}

//在文件外实现接口函数 - fcos()函数
float fcos(float x)
{
    return cos(x);
}

//在文件外实现接口函数 - fexp()函数
float fexp(float x)
{
    return exp(x);
}

//在文件外实现接口函数 - test1()函数
void test1()
{
    cout << "test1() ..." << endl;
    int bottom;
    int top;
    int n;
    cout << "定积分累加次数:";
    cin >> n;
    cout << "下限:";
    cin >> bottom;
    cout << "上线:";
    cin >> top;

    try
    {
        //创建对象,动态申请内存
        Integral *p = new Integral(bottom,top,n);
        //通过指针调用函数
        float area = p->calIntegral(fsin);
        cout << "area:" << area << endl;
        cout << endl;

        //释放内存
        delete p;
    }catch(char *err)
    {
        cout << "err:" << err << endl;
    }
}

//在文件外实现接口函数 - test2()函数
void test2()
{
    cout << "test2() ..." << endl;
    int bottom;
    int top;
    int n;
    cout << "定积分累加次数:";
    cin >> n;
    cout << "下限:";
    cin >> bottom;
    cout << "上线:";
    cin >> top;
    try
    {
        //创建对象,动态申请内存
        Integral *p = new Integral(bottom,top,n);
        //通过指针调用函数
        float area = p->calIntegral(fcos);
        cout << "area:" << area << endl;
        cout << endl;

        //释放内存
        delete p;
    }catch(char *err)
    {
        cout << "err:" << err << endl;
    }
}

//在文件外实现接口函数 - test3()函数
void test3()
{
    cout << "test3() ..." << endl;
    int bottom;
    int top;
    int n;
    cout << "定积分累加次数:";
    cin >> n;
    cout << "下限:";
    cin >> bottom;
    cout << "上线:";
    cin >> top;
    try
    {
        //创建对象,动态申请内存
        Integral *p = new Integral(bottom,top,n);
        //通过指针调用函数
        float area = p->calIntegral(fexp);
        cout << "area:" << area << endl;
        cout << endl;

        //释放内存
        delete p;
    }catch(char *err)
    {
        cout << "err:" << err << endl;
    }
}
