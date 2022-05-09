#include<iostream>

using namespace std;

//函数返回是一个值,是一个右值,右值不能参加运算
int min(int num1,int num2);

//函数返回一个引用,返回值可以作为左值,返回的左值是一个变量,可以参加运算
int & max(int & num1,int & num2);

int main(int arg,char *args[])
{
    int a = 3;
    int b = 4;

    //int c = min(a,b)++;//error: lvalue required as increment operand
    int c = min(a,b);
    cout << "c=" << c << endl;

    int d = ++max(a,b);//左值可以运算,曲+1后的值
    cout << "d=" << d << endl;

    return 0;
}


//函数返回是一个值,是一个右值,右值不能参加运算
int min(int num1,int num2)
{
    return (num1 < num2) ? num1: num2;
}

//函数返回一个引用,返回值可以作为左值,返回的左值是一个变量,可以参加运算
int & max(int & num1,int & num2)
{
    return (num1 > num2)? num1: num2;
}