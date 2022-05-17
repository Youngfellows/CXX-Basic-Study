#include "./include/Sample.h"

//在文件外实现接口定义的函数 - test1()函数
void test1()
{
    cout << "test1():: ~~~~" << endl;
    //创建对象,动态申请内存
    StringArray *array = new StringArray(); 
    //通过指针调用函数
    array->input1();
    array->display1();
    array->sort1();
    array->display1();

    //释放内存
    delete array;
}

//在文件外实现接口定义的函数 - test2()函数
void test2()
{
    cout << "test2():: ~~~~" << endl;
    StringArray *array = new StringArray(); 
    //通过指针调用函数
    array->input2();
    
    delete array;
}

//在文件外实现接口定义的函数 - test3()函数
void test3()
{
    cout << "test3():: ~~~~" << endl;
}

//在文件外实现接口定义的函数 - test4()函数
void test4()
{
    cout << "test4():: ~~~~" << endl;
}
