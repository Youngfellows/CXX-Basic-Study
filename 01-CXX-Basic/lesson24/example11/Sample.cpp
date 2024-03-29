#include "./include/Sample.h"

//在文件外实现接口函数 - test1()函数
void test1()
{
    cout << "test1():: ..." << endl;
    //创建对象,动态申请内存
    StringArray *array = new StringArray();

    //使用指针调用函数
    array->input();//输入二维字符串数组
    array->display();//显示字符串二维数组

    // char **p = array->get();//获取二维字符串数组
    // array->display(p);//显示字符串二维数组

    // char (*pText)[LEN] = array->get2();//获取字符串二维数组
    // array->display(pText);//显示字符串二维数组

    array->sort();//排序
    array->display();//显示字符串二维数组

    //释放内存
    // free(p);
    //delete pText;
    delete array;
}

//在文件外实现接口函数 - test2()函数
void test2()
{
    cout << "test2():: ..." << endl;
     //创建对象,动态申请内存
    StringArray *array = new StringArray();

    //使用指针调用函数
    array->input();//输入二维字符串数组
    // array->display();//显示字符串二维数组

    char **p = array->get();//获取二维字符串数组
    array->display(p);//显示字符串二维数组

    // char (*pText)[LEN] = array->get2();//获取字符串二维数组
    // array->display(pText);//显示字符串二维数组

    // array->sort();//排序
    // array->display();//显示字符串二维数组

    array->sort(p);//排序
    array->display(p);//显示字符串二维数组

    //释放内存
    free(p);
    //delete pText;
    delete array;
}

//在文件外实现接口函数 - test3()函数
void test3()
{
    cout << "test3():: ..." << endl;
    //创建对象,动态申请内存
    StringArray *array = new StringArray();

    //使用指针调用函数
    array->input();//输入二维字符串数组
    // array->display();//显示字符串二维数组

    // char **p = array->get();//获取二维字符串数组
    // array->display(p);//显示字符串二维数组

    char (*pText)[LEN] = array->get2();//获取字符串二维数组
    array->display(pText);//显示字符串二维数组

    // array->sort();//排序
    // array->display();//显示字符串二维数组

    array->sort(pText);//排序
    array->display(pText);//显示字符串二维数组

    //释放内存
    //free(p);
    //delete pText;
    delete array;
}

//在文件外实现接口函数 - test1()函数
void test4()
{
    cout << "test4():: ..." << endl;
}

//在文件外实现接口函数 - test5()函数
void test5()
{
    cout << "test5():: ..." << endl;
}