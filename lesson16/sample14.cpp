#include<iostream>

using namespace std;

//函数返回一个引用,返回值可以作为左值,返回的左值是一个变量,可以参加运算
int & min(int & num1,int & num2);

//函数返回一个引用,返回值可以作为左值,返回的左值是一个变量,可以参加运算
int & max(int & num1,int & num2);

int main(int arg,char *args[])
{
    int a;
    int b;
    cout << "请输入第1个数a:" << endl;
    cin >> a;
    cout << "请输入第2个数b:" << endl;
    cin >> b;

    cout << "调用max()函数前: a=" << a << ",b=" << b << endl;    
    max(a,b) = 0;//左值可以运算,比如赋值最大的数是0
    cout << "调用max()函数后: a=" << a << ",b=" << b << endl;    
    
    cout << "请再输入第1个数a:" << endl;
    cin >> a;
    cout << "请再输入第2个数b:" << endl;
    cin >> b;

    cout << "调用min()函数前: a=" << a << ",b=" << b << endl;    
    min(a,b) = 0;//左值可以运算,比如赋值最大的数是0
    cout << "调用min()函数后: a=" << a << ",b=" << b << endl;    

    return 0;
}


//函数返回是一个值,是一个右值,右值不能参加运算
int & min(int & num1,int & num2)
{
    return (num1 < num2) ? num1: num2;
}

//函数返回一个引用,返回值可以作为左值,返回的左值是一个变量,可以参加运算
int & max(int & num1,int & num2)
{
    return (num1 > num2)? num1: num2;
}