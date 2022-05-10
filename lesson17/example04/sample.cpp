#include "./include/Prelector.h"
#include "./include/Professor.h"

int main(int arg,char *args[])
{
    //声明一个普通函数
    void display(Professor &p);
    //创建一个教授对象p1
    char const *profName = "令狐冲";
    Professor *p1 = new Professor(profName,10086,3200.5,1200.8,200.4);
    cout << "========== 教授 =========" << endl;
    display(*p1);

    //创建一个讲师对象p2
    char const *preName = "田伯光";
    Professor *p2 = (Professor *) new Prelector(preName,10010,2500.7,1000.6,300.5);//基类的指针指向子类对象
    display(*p2);

    //释放内存
    delete p1;
    delete p2;

    return 0;
}

/**
 * @brief 声明一个引用作为参数的display()显示函数
 * 
 * @param p 对象Professor的引用
 */
void display(Professor &p)
{
    p.calculateSalary();//计算工资
    p.display();//显示详情
}