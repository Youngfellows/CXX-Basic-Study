#ifndef SADDLE_H
#define SADDLE_H

#include "./Global.h"

//定义Saddle类 - 鞍点
class Saddle
{
    private:
        int number[M][N];//定义一个M * M的二维数组
        int **pNum;//指向指针的指针变量,来指向二维数组
        int *pNum1[M];//使用指针数组,来指向二维数组元素
        int (*pNum2)[N];//使用指向一维数组的指针变量来指向二维数组

    public:
        Saddle();//构造函数
        ~Saddle();//析构函数
        int **getEle();//获取二维数组元素,返回的是一个指向指针的指针
        int **getEle2();//获取二维数组元素,返回的是一个指向指针的指针
        int (*getElement())[N];//获取二维数组元素,返回的是一个指向一维数组元素的指针变量
        int ** parse(int **pNum);//解析鞍点
        int (*parse(int (*pNum)[N]))[N];//获取鞍点,参数是指向一维数组的指针变量,返回值也是指向一维数组的指针变量
        int **parse2(int (*pNum)[N]);//解析鞍点,参数是指向一维数组的指针
        int (*parse2(int **pNum))[N];//获取鞍点,参数是指向指针的指针,返回值是指向一维数组的指针
        void display();//显示二维数组
        void display(int **pNum);//显示二维数组,参数是指向指针的指针,其中每一个指针可以指向一个int类型数组
        //void display(int *pNum[M]);//显示二维数组,参数是指针数组,数组中的每一个元素是int *类型的,也就是指向一维数组元素的地址
        void display(int (*pNum)[N]);//显示二维数组,参数是指向一维数组的指针变量

    private:
        void init();//初始化二维数组数据
};

#endif