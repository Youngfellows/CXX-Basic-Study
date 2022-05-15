#include "./include/MoveEle.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    MoveEle *moveEle = new MoveEle();
    moveEle->inputEle(7);//输入元素
    moveEle->display();//显示元素
    moveEle->move(3);//移动元素
    moveEle->display();//显示元素

    //释放内存
    delete moveEle;

    return 0;
}