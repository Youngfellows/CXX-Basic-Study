#include "../include/YanghuiTriangle.h"

//在类外实现函数 - 构造函数
YanghuiTriangle::YanghuiTriangle()
{
    cout << "YanghuiTriangle()构造函数" << endl;
    this->init();
}

//在类外实现函数 - 构造函数
YanghuiTriangle::~YanghuiTriangle()
{
    cout << "~YanghuiTriangle()析构函数" << endl;
}

//初始化杨辉三角数据
void YanghuiTriangle::init()
{
    cout << "init():: ..." << endl;  
}

//获取二维数组元素,返回的是一个指向指针的指针
int ** YanghuiTriangle::getEle()
{
    cout << "getEle():: ..." << endl;   
    return NULL;
}

//获取二维数组元素,返回的是一个指向一维数组元素的指针变量
int (* YanghuiTriangle::getElement())[M]
{
    cout << "getElement():: ..." << endl;
    return NULL;
}

//解析杨辉三角
int ** YanghuiTriangle::parse(int **pNum)
{
    cout << "parse():: 1 ..." << endl;     
    return NULL; 
}

//获取杨辉三角,参数是指向一维数组的指针变量,返回值也是指向一维数组的指针变量
int (* YanghuiTriangle::parse(int (*pNum)[M]))[M]
{
    cout << "parse():: 2 ..." << endl;  
    return NULL;      
}

//解析杨辉三角,参数是指向一维数组的指针
int ** YanghuiTriangle::parse2(int (*pNum)[M])
{
    cout << "parse2():: 1 ..." << endl;  
    return NULL;
}

//获取杨辉三角,参数是指向指针的指针,返回值是指向一维数组的指针
int (* YanghuiTriangle::parse2(int **pNum))[M]
{
    cout << "parse2():: 2 ..." << endl;  
    return NULL;     
}
//显示杨辉三角
void YanghuiTriangle::display()
{
    cout << "display():: ..." << endl;      
}

//显示杨辉三角,参数是指向指针的指针,其中每一个指针可以指向一个int类型数组
void YanghuiTriangle::display(int **pNum)
{
    cout << "display():: 1 ..." << endl;       
}

//显示杨辉三角,参数是指针数组,数组中的每一个元素是int *类型的,也就是指向一维数组元素的地址
// void YanghuiTriangle::display(int *pNum[M])
// {
//     cout << "display():: 2 ..." << endl;        
// }

//显示杨辉三角,参数是指向一维数组的指针变量
void YanghuiTriangle::display(int (*pNum)[M])
{
    cout << "display():: 3 ..." << endl;   
}