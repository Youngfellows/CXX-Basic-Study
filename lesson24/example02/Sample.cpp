#include "./include/Sample.h"

//在文件外实现接口方法
void test()
{
    cout << "test():: ..." << endl;
    //创建对象,动态申请内存
    SelectSort *select = new SelectSort();

    try
    {
        cout << "请输入数组大小:" ;
        int size;
        cin >> size;
        int *p = select->input(size);//输入数组元素
        select->display();//显示数组元素
        p = select->sort(p);//选择排序
        select->display(p);//输出数组元素
    }catch(char *err)
    {
        cout << "catch,err:" << err << endl;
    }catch(int e)
    {
        cout << "catch,error:" << e << endl;
    }catch(...)
    {
        cout << "catch,error" << endl;
    }

    //释放内存
    delete select;
}