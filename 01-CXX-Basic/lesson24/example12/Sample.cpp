#include "./include/Sample.h"

//在文件外实现接口 - test1()函数
void test1()
{
    cout << "test1():: ..." << endl;
    //创建对象,动态申请内存
    StringArray *array = new StringArray();

    //通过指针访问函数
    array->input();//输入字符串数组
    array->display();//显示字符串数组
    array->sort();//排序字符串数组
    array->display();//排序字符串数组

    //释放内存
    delete array;
}

//在文件外实现接口 - test2()函数
void test2()
{
    cout << "test2():: ..." << endl;
    //创建对象,动态申请内存
    StringArray *array = new StringArray();

    //通过指针访问函数
    array->input();//输入字符串数组
    string *text = array->get();//获取字符串数组
    array->display(text);//显示字符串数组
    array->sort(text);//排序字符串数组
    array->display(text);//显示字符串数组

    //释放内存
    delete array;
}