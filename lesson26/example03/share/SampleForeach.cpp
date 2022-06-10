#include "../include/Sample.h"

void testForeach1()
{
    cout << "testForeach1():: ..." << endl;
    //创建对象,动态申请内存
    MyForeach *myforeach = new MyForeach();
    //通过指针访问函数
    myforeach->testForeach1();

    //释放内存
    delete myforeach;
}

void testForeach2()
{
    cout << "testForeach2():: ..." << endl;
}