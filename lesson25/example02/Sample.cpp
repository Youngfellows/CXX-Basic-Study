#include "./include/Prime.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    Prime *p = new Prime();
    //通过指针访问函数
    bool flag = p->prime();
    int number = p->getNum();
    cout << number << "是否是素数:flag=" << flag << endl;

    //释放内存
    return 0;
}