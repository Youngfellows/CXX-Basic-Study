#include<iostream>
#include<cstring>

using namespace std;

int main(int arg,char *args[])
{

    //动态申请内存-动态存储
    unsigned short *p1;
    p1 = new unsigned short;//在自由存储区分配2个字节的空间,赋值给一个p1指针
    cout << "p1指针地址:" << p1 << endl;

    unsigned short *p2 = new unsigned short;//在自由存储区分配2个字节的空间,赋值给一个p2指针
    cout << "p2指针地址:" << p2 << endl;

    //把一个值存入指针变量指向的空间
    *p1 = 3;
    *p2 = 4;
    cout << "*p1=" << *p1 << endl;
    cout << "*p2=" << *p2 << endl;
    
    //动态申请内存并向指针指向的空间赋值
    unsigned short *p3 = new unsigned short(72);
    int *pAge = new int(18);
    float *pRadius = new float(5.55);
    char *city = new char[20];//动态申请长度为20的字符数组
    strcpy(city,"深圳市");

    cout << "*pAge=" << *pAge << endl;
    cout << "*pRadius=" << *pRadius << endl;
    cout << "city=" << city << endl;

    //释放内存
    delete p1;
    delete p2;
    delete pAge;
    delete pRadius;
    delete [] city;//释放存放数组的内存

    return 0;
}