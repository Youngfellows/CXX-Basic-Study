#include "../include/Saddle.h"

//在类外实现函数 - 构造函数
Saddle::Saddle()
{
    cout << "Saddle()构造函数" << endl;
    this->init();
}

//在类外实现函数 - 构造函数
Saddle::~Saddle()
{
    cout << "~Saddle()析构函数" << endl;
}

//初始化二维数组
void Saddle::init()
{
    cout << "init():: ..." << endl;  
    srand(time(0));
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
    //重点: 通过指针间接为数组元素赋值,很重要,new 和 malloc开辟的空间都要赋值
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            //this->number[i][j] = i * j;
            //获取随机数 0 ~ 100 内的
            int random = rand() % 100;
            *(*(this->pNum + i) + j) = random;//为数组元素赋值
        }
    }

    //测试是否是鞍点的二维数组,33是鞍点
    // int temp[M][N] = {{11,22,33},{23,33,44},{99,77,55}};
    // for(int i = 0; i < M; i++)
    // {
    //     for(int j = 0; j < N; j++)
    //     {
    //         *(*(this->pNum + i) + j) = temp[i][j];
    //     }
    // }
}

//获取二维数组元素,返回的是一个指向指针的指针
int ** Saddle::getEle()
{
    cout << "getEle():: ..." << endl;   
    return this->pNum;//直接返回私有指针变量
}

//获取二维数组元素,返回的是一个指向指针的指针
int ** Saddle::getEle2()
{
    cout << "getEle2():: ..." << endl;
    //动态申请内存,并为空间赋值,开辟M个连续保存int *数据的内存空间
    int **data = (int **)malloc(M * sizeof(int *));//二维数组的行,M行
    for(int i = 0; i < M; i++)
    {
        //动态申请内存,并为空间赋值,开辟N个连续保存int数据的内存空间
        int * p = (int *)malloc(N * sizeof(int));//二维数组的列,N列
        *(data + i) = p;//重点: 为二维数组每一行空间赋值,指向一个新开辟的连续内存
        for(int j = 0; j < N; j++)
        {
            *(p + j) = this->number[i][j];//重点: 为新开辟的空间赋值
            //*(*(data + i) + j) = this->number[i][j];
        }
        //free(p);
    }
    cout << "data:" << data << endl;
    return data;//返回新开辟的内存空间
}

//获取二维数组元素,返回的是一个指向一维数组元素的指针变量
int (* Saddle::getElement())[N]
{
    cout << "getElement():: ..." << endl;
    //动态申请内存,创建一个指向一维数组的指针变量
    int (*data)[N] = new int[M][N];
    data = this->number;//指向一维数组的指针变量,指向二维数组的首行,数组元素已经赋值了,就不在为新空间再赋值
    return data;
}

//解析鞍点,行中最大,列中最小
int ** Saddle::parse(int **pNum)
{
    cout << "parse():: 1 ..." << endl;
    int max;//最大值
    int maxj;//行最大值列
    int posX = -1;//鞍点的x坐标
    int posY = -1;//鞍点的y坐标
    bool flag = false;//是否是鞍点
    for(int i = 0; i < M; i++) //行
    {
        max = *(*(pNum + i) + 0);//第一个元素max = number[i][0]
        maxj = 0;
        for(int j = 0; j < N; j++)//找到行中最大值
        {
            if(max < *(*(pNum + i) + j))
            {
                max = *(*(pNum + i) + j);//记录最大值
                maxj = j;//行中最大值所在列
            }
        }
        cout << "max=" << max << ",i=" << i <<  ",maxj=" << maxj << endl;

        //判断该元素是否也是列中最小的元素
        flag = true;//先假设是鞍点
        for(int k = 0; k < M; k++)
        {
            if(max > *(*(pNum + k) + maxj))
            {
                flag = false;//有比它小的,不是鞍点
                break;
            }
        }
        //是鞍点
        if(flag)
        {
            posX = i;
            posY = maxj;
            cout << max << "是鞍数,位置(" << posX << "," << posY << ")" << endl;
            break;
        }
    }

    if(flag)
    {
        cout << max << "是鞍数,位置(" << posX << "," << posY << ")" << endl;
    }else
    {
        cout << "没有鞍点" << endl;
    }

    return NULL; 
}

//获取鞍点,参数是指向一维数组的指针变量,返回值也是指向一维数组的指针变量
int (* Saddle::parse(int (*pNum)[N]))[N]
{
    cout << "parse():: 2 ..." << endl;
    int max;//最大值
    int maxj;//行最大值列
    int posX = -1;//鞍点的x坐标
    int posY = -1;//鞍点的y坐标
    bool flag = false;//是否是鞍点
    for(int i = 0; i < M; i++) //行
    {
        max = *(*(pNum + i) + 0);//第一个元素max = number[i][0]
        maxj = 0;
        for(int j = 0; j < N; j++)//找到行中最大值
        {
            if(max < *(*(pNum + i) + j))
            {
                max = *(*(pNum + i) + j);//记录最大值
                maxj = j;//行中最大值所在列
            }
        }
        cout << "max=" << max << ",i=" << i <<  ",maxj=" << maxj << endl;

        //判断该元素是否也是列中最小的元素
        flag = true;//先假设是鞍点
        for(int k = 0; k < M; k++)
        {
            if(max > *(*(pNum + k) + maxj))
            {
                flag = false;//有比它小的,不是鞍点
                break;
            }
        }
        //是鞍点
        if(flag)
        {
            posX = i;
            posY = maxj;
            cout << max << "是鞍数,位置(" << posX << "," << posY << ")" << endl;
            break;
        }
    }

    if(flag)
    {
        cout << max << "是鞍数,位置(" << posX << "," << posY << ")" << endl;
    }else
    {
        cout << "没有鞍点" << endl;
    }

    return NULL;      
}

//解析鞍点,参数是指向一维数组的指针
int ** Saddle::parse2(int (*pNum)[N])
{
    cout << "parse2():: 1 ..." << endl;  
    return NULL;
}

//获取鞍点,参数是指向指针的指针,返回值是指向一维数组的指针
int (* Saddle::parse2(int **pNum))[N]
{
    cout << "parse2():: 2 ..." << endl;  
    return NULL;     
}
//显示二维数组元素
void Saddle::display()
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

//显示二维数组元素,参数是指向指针的指针,其中每一个指针可以指向一个int类型数组
void Saddle::display(int **pNum)
{
    cout << "display():: 1 ..." << endl;
    cout << "display():: pNum:" << pNum << endl;
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

//显示二维数组元素,参数是指针数组,数组中的每一个元素是int *类型的,也就是指向一维数组元素的地址
// void YanghuiTriangle::display(int *pNum[M])
// {
//     cout << "display():: 2 ..." << endl;        
// }

//显示二维数组元素,参数是指向一维数组的指针变量
void Saddle::display(int (*pNum)[N])
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