#include "./include/Sample.h"

//在文件外实现接口方法
void test()
{
    cout << "test():: ..." << endl;
    //创建对象,动态申请内存
    Saddle *saddle = new Saddle();

    //通过指针访问函数
    saddle->display();//打印二维数组元素
    int **p = saddle->getEle();//获取二维数组元素,返回的是指向指针的指针
    saddle->display(p);//打印二维数组,参数是指向指针的指针

    int (*pNum)[N] = saddle->getElement();//获取二维数组元素,返回的是指向含有N个int元素的一维数组的指针变量
    saddle->display(pNum);//打印二维数组,参数是指向一维数组的指针

    int **p2 = saddle->getEle2();//获取二维数组,新开辟的空间
    cout << "p2:" << p2 << endl;
    saddle->display(p2);

    //判断是否有鞍点
    saddle->parse(p2);
    saddle->parse(pNum);

    //释放内存
    free(p2);
    delete saddle;
}