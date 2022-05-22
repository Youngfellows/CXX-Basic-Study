#include "./include/Sample.h"

//在文件外实现接口函数 - test1()函数
void test1()
{
    cout << "test1():: ..." << endl;
    //创建对象,动态申请内存
    StringCat *cat = new StringCat();

    //通过指针掉后函数
    cat->input1();
    char *result = cat->strcat1();//拼接字符串
    cout << result << endl;

    //释放内存
    delete cat;
}

//在文件外实现接口函数 - test2()函数
void test2()
{
    cout << "test2():: ..." << endl;
    //创建对象,动态申请内存
    StringCat *cat = new StringCat();

    //通过指针掉后函数
    cat->input1();
    char *result = cat->strcat2();//拼接字符串
    cout << result << endl;

    //释放内存
    delete cat;
}

//在文件外实现接口函数 - test2()函数
void test3()
{
    cout << "test3():: ..." << endl;
    //创建对象,动态申请内存
    StringCat *cat = new StringCat();

    //通过指针掉后函数
    cat->input2();
    string result = cat->strcat3();//拼接字符串
    cout << result << endl;

    //释放内存
    delete cat;
}