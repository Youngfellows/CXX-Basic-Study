#ifndef GAME_H
#define GAME_H

#include "./Global.h"

//定义Game类 - 游戏
class Game
{
    private:
        int number[SIZE];//游戏人数数组
        int count;//游戏人数
        int lastNum;//最后一个编号

    public:
        Game();//构造函数
        ~Game();//析构函数
        void input();//请输入多少人参加游戏
        void display();//打印游戏信息
        void start();//开始游戏
        int getLastNum();//获取最后一个编号
};

#endif