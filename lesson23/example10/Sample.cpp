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
    //创建对象,动态申请内存
    StringArray *array = new StringArray();
    //通过指针访问对象
    array->input1();
    char **ps = array->getStr();//获取输入的二维字符数组
    array->display4(ps);
    array->sort3(ps);
    array->display4(ps);
    cout << endl;

    //释放内存
    free(ps);

    //释放内存
    delete array;
}

//在文件外实现接口定义的函数 - test4()函数
void test4()
{
    cout << "test4():: ~~~~" << endl;
    //创建对象,动态申请内存
    StringArray *array = new StringArray();
    //通过指针访问对象
    array->input1();//输入二维数组
    char (*p)[LEN] = array->getStr3();//返回输入的二维数组
    array->display5(p);//显示二维数组
    array->sort4(p);//排序二维数组
    array->display5(p);//显示二维数组
    
    //释放内存
    //free(p);
    delete array;
}
