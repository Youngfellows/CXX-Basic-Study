#include "./include/Sample.h"

//在文件外实现接口方法
void test()
{
    cout << "test():: ..." << endl;
    //创建对象,动态申请内存
    YanghuiTriangle *triangle = new YanghuiTriangle();

    //释放内存
    delete triangle;
}