#include "./include/Sample.h"

//在文件外实现接口函数 - test1()函数
void test1()
{
    cout << "test1()::" << endl;
    //创建对象,动态申请内存
    Matrix *matrix = new Matrix();

    //通过指针调用函数
    matrix->input();//输入元素
    matrix->display();//显示元素
    matrix->move();//交换元素
    matrix->display();//显示元素
    cout << endl;

    //释放内存
    delete matrix; 
}

//在文件外实现接口函数 - test2()函数
void test2()
{
    cout << "test2()::" << endl;
    //创建对象,动态申请内存
    Matrix *matrix = new Matrix();

    //通过指针调用函数
    matrix->input();//输入元素
    int *p = matrix->getMatrix();//获取元素
    matrix->display2(p);//显示元素

    matrix->maxChange(p);//交换最大值元素
    matrix->display2(p);//显示元素

    matrix->leftTopChange(p);//交换最大值元素
    matrix->display2(p);//显示元素

    matrix->rightTopChange(p);//交换最大值元素
    matrix->display2(p);//显示元素

    matrix->leftBottomChange(p);//交换最大值元素
    matrix->display2(p);//显示元素

    matrix->rightBottomChange(p);//交换最大值元素
    matrix->display2(p);//显示元素
    cout << endl;

    //释放内存
    delete matrix; 
}