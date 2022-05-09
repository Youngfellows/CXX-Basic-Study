#include<iostream>

using namespace std;

/**
 * @brief 交换变量的值,传递值,x/y是实际参数的一个副本,临时变量,交换值临时变量的值对实际参数没有改变
 * 
 * @param x 实际参数的值
 * @param y 实际参数的值
 */
void swap1(int x,int y);

/**
 * @brief  交换变量的值,传递值,x/y是实际参数的地址,改变指针地址所指示变量的值,实际参数所指向的值改变
 * 
 * @param x 实际参数的地址
 * @param y 实际参数的地址
 */
void swap2(int *x,int *y);

/**
 * @brief  交换变量的值,传递值,x/y是实际参数的地址,改变指针地址所指示变量的值,实际参数所指向的值改变
 * 
 * @param x 实际参数的地址
 * @param y 实际参数的地址
 */
void swap2(int &x,int &y);

int main(int arg,char *args[])
{
    //引用的使用,引用是变量的一个别名,拥有和变量相同的地址
    int number = 3;
    int & num = number;//变量number的引用num
    cout << "number:" << number << endl;
    cout << "num:" << num << endl;
    cout << "number的地址:" << &number << endl;
    cout << "引用num的地址:" << &num << endl;

    int a = 10;
    int b = 20;

    cout << "传递变量的值交换前,a:" << a << ",b:" << b << endl;
    swap1(a,b); 
    cout << "传递变量的值交换后,a:" << a << ",b:" << b << endl;

    cout << "传递变量的地址交换前,a:" << a << ",b:" << b << endl;
    swap2(&a,&b); 
    cout << "传递变量的地址交换后,a:" << a << ",b:" << b << endl;
    
    cout << "传递变量的引用交换前,a:" << a << ",b:" << b << endl;
    swap2(&a,&b); 
    cout << "传递变量的引用交换后,a:" << a << ",b:" << b << endl;

    return 0;
}

void swap1(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int *x,int *y)
{
    //交换两个指针所指向内存的指向的变量的值
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap3(int &x,int &y)
{
    //交换两个指针所指向内存的指向的变量的值
    int temp = x;
    x = y;
    y = temp;
}