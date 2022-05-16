#include "./include/Game.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    Game *game = new Game();
    try
    {
        //通过指针调用函数
        game->input();//输入游戏人数,并初始化
        game->display();//显示游戏信息
        game->start();//开始游戏
        int lastNum = game->getLastNum();//获取最后一个编号
        cout << "最后一个原来的编号是:" << lastNum << endl;
    }
    catch(int e)
    {
        cout << "catch error," << e << endl;
    }

    //是否内存
    delete game;

    return 0;
}