#include "./include/Sample.h"

//在文件外实现接口函数
void test1()
{
    cout << "test1()::" << endl;
    int n1 = 3;
    int n2 = 4;
    //int &a = n1;
    //int &b = n2;
    cout << "交换前:n1=" << n1 << ",n2=" << n2 << endl;
    swap1(n1,n2);
    cout << "交换后:n1=" << n1 << ",n2=" << n2 << endl;
    cout << endl;
}

//在文件外实现接口函数
void test2()
{
    cout << "test2()::" << endl;
    //动态申请内存
    int *p1 = new int(5);
    int *p2 = new int(6);
    cout << "交换前:*p1=" << *p1 << ",*p2=" << *p2 << endl;
    swap2(p1,p2);
    cout << "交换后:*p1=" << *p1 << ",*p2=" << *p2 << endl;
    cout << endl;

    //释放内存
    delete p1;
    delete p2;
}

//在文件外实现接口函数
//实现三个数的交换
void test3()
{
    cout << "test3() ..." << endl;
    //创建对象,动态申请内存
    int *p1 = new int(3);
    int *p2 = new int(1);
    int *p3 = new int(2);

    cout << "交换前:*p1=" << *p1 << ",*p2=" << *p2 << ",*p3=" << *p3 << endl;
    sort(p1,p2,p3);
    cout << "交换后:*p1=" << *p1 << ",*p2=" << *p2 << ",*p3=" << *p3 << endl;
    cout << endl;

    //释放内存
    delete p1;
    delete p2;
    delete p3;
}

//在文件外实现接口函数 - 排序输出
void sort(int *p1,int *p2,int *p3)
{
    if(*p1 > *p2)
    {
        swap2(p1,p2);
    }
    if(*p1 > *p3)
    {
        swap2(p1,p3);
    }
    if(*p2 > *p3)
    {
        swap2(p2,p3);
    }
}

//在文件外实现接口函数 - 交换字符串
void test4()
{
    cout << "test4() ... " << endl;
    string str1 = "深圳市";
    string str2 = "上海市";
    cout << "交换前:str1=" << str1 << endl;
    cout << "交换前:str2=" << str2 << endl;
    swap2(&str1,&str2);
    cout << "交换后:str1=" << str1 << endl;
    cout << "交换后:str2=" << str2 << endl;
    cout << endl;
}

//在文件外实现接口函数 - 交换字符串
void test5()
{
    cout << "test5() ... " << endl;
    char str1[128] = "天津市";
    char str2[128] = "广州市";
    char *p1 = str1;
    char *p2 = str2;
    cout << "交换前:str1=" << str1 << endl;
    cout << "交换前:str2=" << str2 << endl;
    swap(p1,p2);
    cout << "交换后:str1=" << str1 << endl;
    cout << "交换后:str2=" << str2 << endl;
    cout << endl;
}

//在文件外实现接口函数 - 交换字符串
void swap(char *p1,char *p2)
{
    cout << "swap() ..." << endl;
    char p[128];
    strcpy(p,p1);
    strcpy(p1,p2);
    strcpy(p2,p);
}