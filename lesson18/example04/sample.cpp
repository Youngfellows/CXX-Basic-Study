#include "./include/Box.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    Box *box = new Box(11.1,22.2,33.3);
    double vol = box->volume();//求体积
    cout << "体积:" << vol << endl;

    //释放内存
    delete box;

    return 0;
}