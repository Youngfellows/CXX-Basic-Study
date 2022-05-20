#include "./include/Sample.h"

//在文件外实现接口方法 - test1()函数
void test1()
{
    cout << "test1():: ..." << endl;
    //创建对象,动态申请内存
    Matrix *matrix = new Matrix();

    //通过指针访问函数
    int **p = matrix->input();//输入二维数组元素
    matrix->display();//打印二维数组元素
    p = matrix->get();//获取二维数组
    matrix->display(p);//打印二维数组,参数是指针

    int (*pNum)[N] = matrix->get1();//获取二维数组元素
    matrix->display(pNum);//打印二维数组,参数是指向一维数组的指针

    int sum = matrix->sum();//求对角线元素之和
    cout << "1,sum=" << sum << endl;
    sum = matrix->sum(p);//求对角线元素之和,参数是指向指针的指针
    cout << "2,sum=" << sum << endl;
    sum = matrix->sum(pNum);//求对角线元素之和,参数是指向一维数组的指针变量
    cout << "3,sum=" << sum << endl;
    int *pSum = matrix->psum(p);//求对角线元素之和,参数是指向指针的指针
    sum = *pSum;//获取指针变量指向的值
    cout << "4,sum=" << sum << endl;

    //释放内存
    //delete [] pNum;
    delete pSum;
    delete matrix;
}

//在文件外实现接口方法 - test2()函数
void test2()
{
    cout << "test2():: ..." << endl;
    //创建对象,动态申请内存
    Matrix *matrix = new Matrix();

    //释放内存
    delete matrix;
}

//在文件外实现接口方法 - test1()函数
void test3()
{
    cout << "test3():: ..." << endl;
    //创建对象,动态申请内存
    Matrix *matrix = new Matrix();

    //释放内存
    delete matrix;
}


//在文件外实现接口方法 - test4()函数
void test4()
{
    cout << "test4():: ..." << endl;
    //创建对象,动态申请内存
    Matrix *matrix = new Matrix();

    //释放内存
    delete matrix;
}

//在文件外实现接口方法 - test1()函数
void test5()
{
    cout << "test5():: ..." << endl;
    //创建对象,动态申请内存
    Matrix *matrix = new Matrix();

    //释放内存
    delete matrix;
}