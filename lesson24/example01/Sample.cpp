#include "./include/Sample.h"

//在文件外实现接口函数
void test()
{
    cout << "test():: ... " << endl;
    //创建对象,动态申请内存
    PrimeNum *primeNum = new PrimeNum();

    //通过指针访问对象方法
    primeNum->display();//显示元素
    int *pPrime = primeNum->prime();//求素数
    primeNum->display();//显示元素
    primeNum->display(pPrime);//显示素数数组元素

    //释放内存
    delete primeNum;
}