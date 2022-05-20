#include "./include/Sample.h"

//在文件外实现接口方法
void test()
{
    cout << "test():: ..." << endl;
    //创建对象,动态申请内存
    YanghuiTriangle *triangle = new YanghuiTriangle();

    //通过指针访问函数
    triangle->display();//打印二维数组元素
    int **p = triangle->getEle();//获取二维数组元素,返回的是指向指针的指针
    triangle->display(p);//打印二维数组,参数是指向指针的指针

    int (*pNum)[N] = triangle->getElement();//获取二维数组元素,返回的是指向含有N个int元素的一维数组的指针变量
    triangle->display(pNum);//打印二维数组,参数是指向一维数组的指针

    //释放内存
    delete triangle;
}