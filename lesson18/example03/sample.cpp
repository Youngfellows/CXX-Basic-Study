#include "./include/MyArray.h"

int main(int arg,char *args[])
{
    int size = 0;//数组长度

    cout << "请输入数组长度:";
    cin >> size;

    //创建对象,动态申请内存
    MyArray *array = new MyArray(size);
    //通过指针调用对象函数
    array->set();//设置元素
    array->display();//显示数组

    int max = array->maxEle();//找出最大值
    cout << "最大值:" << max << endl;

    array->sort();//排序
    array->display();//显示数组
    
    //释放内存
    delete array;

    return 0;
}