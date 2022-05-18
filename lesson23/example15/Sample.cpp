#include "./include/Sample.h"

//在文件外实现函数 - test()函数
void test()
{
    cout << "test() ..." << endl;

    //创建对象,动态申请内存
    Sort *sort = new Sort();
    int number;
    cout << "请输入数组个数:";
    cin >> number;
    try
    {
        //通过指针调用函数,并且捕获异常
        int **p = sort->input(number);//输入数组元素
        sort->display(p);//显示数组元素
        sort->sort(p);//排序数组元素
        sort->display(p);//显示数组元素
    }catch(const char *err)
    {
        cout << "catch error:" << err << endl;
    }catch(...){
        cout << "catch error -^_^- ..."<< endl;
    }

    //释放内存   
    delete sort;
}