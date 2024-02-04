#include "../include/Game.h"

//在类外定义函数 - 构造函数
Game::Game()
{
    cout << "Game()构造函数" << endl;
}

//在类外定义函数 - 析构函数
Game::~Game()
{
    cout << "~Game()析构函数" << endl;
}

//在类外定义函数 - input()函数
void Game::input()
{
    cout << "input() ..." << endl;
    cout << "请输入游戏人数:"; 
    cin >> this->count;
    if (this->count > SIZE)
    {
        throw this->count;
    }
    //初始化游戏人数,并为每个人编号
    for(int i = 0; i < this->count; i++)
    {
        this->number[i] = i + 1;
    }
}

//在类外定义函数 - display()函数
void Game::display()
{
    //cout << "display() ..." << endl;
    for(int i = 0; i < this->count; i++)
    {
        cout << this->number[i] << " ";
    }
    cout << endl;
}

//在类外定义函数 - start()函数
void Game::start()
{
    cout << "start() ..." << endl;
    int *p = this->number;//int *p型指针变量p,p指向数组number
    int i = 0;//i为每次循环时的计数变量
    int k = 0;//k为按1/2/3报数时的计数变量
    int q = 0;//q为退出人数
    while(q < this->count - 1)//退出人数大于1时,执行循环
    {
        //如果该人员退出,则置它的编号是0
        if(*(p + i) != 0)//如果该人员未退出,计数
        {
            k++;//报数计数
        }

        //将报数为3退出,则置它的编号是0
        if(k == 3)
        {
            *(p + i) = 0;//编号置0
            k = 0;//重置报数为0
            q++;//累加退出人数个数
            this->display();
        }
        i++;
        //报数到尾后,i恢复成0
        if (i == this->count)
        {
            i = 0;
        }
    }
}

//在类外定义函数 - start()函数 - 找出最后一个原理的编号
int Game::getLastNum()
{
    cout << "getLastNum() ..." << endl;
    int *p = this->number;//int *p型指针变量p,p指向数组number
    //过滤已经排除的元素
    while (*p == 0)
    {
        p++;
    }
    return *p;//最后一个元素取值
}

