#include "./include/ChangeData.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    ChangeData *change = new ChangeData();
    change->input();//输入
    change->display();//显示元素
    
    change->changeMax();//交换最大值
    change->display();//显示元素
    
    change->changeMin();//交换最小值
    change->display();//显示元素

    //释放内存
    delete change;

    return 0;
}