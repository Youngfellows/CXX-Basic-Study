#include "./include/Sample.h"

//在文件外实现接口方法 - test1()函数
void test1()
{
    cout << "test1():: ..." << endl;
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

//在文件外实现接口方法 - test2()函数
void test2()
{
    cout << "test2():: ..." << endl;
    //创建对象,动态申请内存
    YanghuiTriangle *triangle = new YanghuiTriangle();

    //通过指针访问函数
    triangle->display();//打印二维数组元素
    int **p = triangle->getEle();//获取二维数组元素,返回的是指向指针的指针
    triangle->display(p);//打印二维数组,参数是指向指针的指针

    int (*pNum)[N] = triangle->getElement();//获取二维数组元素,返回的是指向含有N个int元素的一维数组的指针变量
    triangle->display(pNum);//打印二维数组,参数是指向一维数组的指针

    p = triangle->parse(p);//解析获取杨辉三角二维数组元素
    triangle->display(p);//打印二维数组,显示杨辉三角

    //释放内存
    delete triangle;
}

//在文件外实现接口方法 - test3()函数
void test3()
{
    cout << "test3():: ..." << endl;
    //创建对象,动态申请内存
    YanghuiTriangle *triangle = new YanghuiTriangle();

    //通过指针访问函数
    triangle->display();//打印二维数组元素
    int **p = triangle->getEle();//获取二维数组元素,返回的是指向指针的指针
    triangle->display(p);//打印二维数组,参数是指向指针的指针

    int (*pNum)[N] = triangle->getElement();//获取二维数组元素,返回的是指向含有N个int元素的一维数组的指针变量
    triangle->display(pNum);//打印二维数组,参数是指向一维数组的指针

    pNum = triangle->parse(pNum);//解析获取杨辉三角二维数组元素
    triangle->display(pNum);//打印二维数组,显示杨辉三角

    //释放内存
    delete triangle;
}

//在文件外实现接口方法 - test4()函数
void test4()
{
    cout << "test4():: ..." << endl;
    //创建对象,动态申请内存
    YanghuiTriangle *triangle = new YanghuiTriangle();

    //通过指针访问函数
    triangle->display();//打印二维数组元素
    int **p = triangle->getEle();//获取二维数组元素,返回的是指向指针的指针
    triangle->display(p);//打印二维数组,参数是指向指针的指针

    int (*pNum)[N] = triangle->getElement();//获取二维数组元素,返回的是指向含有N个int元素的一维数组的指针变量
    triangle->display(pNum);//打印二维数组,参数是指向一维数组的指针

    p = triangle->parse2(pNum);//解析获取杨辉三角二维数组元素
    triangle->display(p);//打印二维数组,显示杨辉三角

    //释放内存
    free(p);
    delete triangle;
}

//在文件外实现接口方法 - test5()函数
void test5()
{
    cout << "test5():: ..." << endl;
    //创建对象,动态申请内存
    YanghuiTriangle *triangle = new YanghuiTriangle();

    //通过指针访问函数
    triangle->display();//打印二维数组元素
    int **p = triangle->getEle();//获取二维数组元素,返回的是指向指针的指针
    triangle->display(p);//打印二维数组,参数是指向指针的指针

    int (*pNum)[N] = triangle->getElement();//获取二维数组元素,返回的是指向含有N个int元素的一维数组的指针变量
    triangle->display(pNum);//打印二维数组,参数是指向一维数组的指针

    int (*pNum2)[N] = triangle->parse2(p);//解析获取杨辉三角二维数组元素
    cout << "pNum2:" << pNum2 << endl;
    triangle->display(pNum2);//打印二维数组,显示杨辉三角

    //释放内存
    free(pNum2);
    delete triangle;
}