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

    //重点: 通过指针数组进行中转,指针数组保存二维数组每一行的地址
    for(int i = 0; i < M; i++)
    {
        //this->pNum1[i] = &(this->number[i]);
        this->pNum1[i] = this->number[i];//指针数组保存二维数组行地址
        //cout << "this->pNum1[" << i << "]=" << this->pNum1[i] << ",this->number[" << i << "]=" << this->number[i] << endl;
    }

    //重点: 指向指针的指针指向一个指针数组的首元素
    this->pNum = this->pNum1;
        
    //数组为11行、11列,0行0列不可用
    //重点: 通过指针间接为数组元素赋值
    for(int i = 1; i < M; i++)
    {
        for(int j = 1; j < N; j++)
        {
            //this->number[i][j] = i * j;
            //*(*(this->pNum + i) + j) = i * j;//为数组元素赋值
            if((i == j) || (j == 1))
            {
                //*(*(this->pNum1 + i) + j) = 1;//OK
                //*(this->pNum1[i] + j) = 1;//OK
                *(*(this->pNum + i) + j) = 1;//OK,对角线为1,第一列为1
            }
        }

    }
}

//获取二维数组元素,返回的是一个指向指针的指针
int ** YanghuiTriangle::getEle()
{
    cout << "getEle():: ..." << endl;   
    return this->pNum;
}

//获取二维数组元素,返回的是一个指向一维数组元素的指针变量
int (* YanghuiTriangle::getElement())[N]
{
    cout << "getElement():: ..." << endl;
    //动态申请内存,创建一个指向一维数组的指针变量
    int (*data)[N] = new int[M][N];
    data = this->number;//指向一维数组的指针变量,指向二维数组的首行
    return data;
}

//解析杨辉三角
int ** YanghuiTriangle::parse(int **pNum)
{
    cout << "parse():: 1 ..." << endl;     
    return NULL; 
}

//获取杨辉三角,参数是指向一维数组的指针变量,返回值也是指向一维数组的指针变量
int (* YanghuiTriangle::parse(int (*pNum)[N]))[N]
{
    cout << "parse():: 2 ..." << endl;  
    return NULL;      
}

//解析杨辉三角,参数是指向一维数组的指针
int ** YanghuiTriangle::parse2(int (*pNum)[N])
{
    cout << "parse2():: 1 ..." << endl;  
    return NULL;
}

//获取杨辉三角,参数是指向指针的指针,返回值是指向一维数组的指针
int (* YanghuiTriangle::parse2(int **pNum))[N]
{
    cout << "parse2():: 2 ..." << endl;  
    return NULL;     
}
//显示杨辉三角
void YanghuiTriangle::display()
{
    cout << "display():: ..." << endl;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {   
            //int ele = this->number[i][j];//访问number[i][j]元素
            int ele = *(*(this->pNum + i) + j);//通过指针访问number[i][j]元素
            cout.width(3);
            cout << ele << " ";
        }
        cout << endl;
    }      
}

//显示杨辉三角,参数是指向指针的指针,其中每一个指针可以指向一个int类型数组
void YanghuiTriangle::display(int **pNum)
{
    cout << "display():: 1 ..." << endl;
    //通过指针变量pNum,间接访问数组元素
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout.width(3);
            int ele = *(*(pNum + i) + j);//获取元素number[i][j]
            cout << ele << " ";
        }
        cout << endl;
    }
}

//显示杨辉三角,参数是指针数组,数组中的每一个元素是int *类型的,也就是指向一维数组元素的地址
// void YanghuiTriangle::display(int *pNum[M])
// {
//     cout << "display():: 2 ..." << endl;        
// }

//显示杨辉三角,参数是指向一维数组的指针变量
void YanghuiTriangle::display(int (*pNum)[N])
{
    cout << "display():: 2 ..." << endl;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            //通过指向一维数组的指针变量,间接访问number[i][j]元素
            int ele = *(*(pNum + i) + j);
            cout.width(3);
            cout << ele << " ";
        }
        cout << endl;
    }
}