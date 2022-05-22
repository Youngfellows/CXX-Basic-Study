#include "./include/Factorial.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    Factorial *p = new Factorial();
    //通过指针访问函数
    int result = p->sum();
    cout <<"result=" << result << endl;

    //释放内存
    return 0;
}