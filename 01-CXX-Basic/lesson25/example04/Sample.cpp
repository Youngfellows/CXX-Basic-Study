#include "./include/Equation.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    Equation *equation = new Equation();

    //通过指针访问函数
    float disc = equation->getDisc();//获取判别式的值
    if (disc > 0)
    {
        cout << "有两个不同的实根" << endl;
        float x1 = equation->getX1();
        float x2 = equation->getX2();
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }else if (disc == 0)
    {
        cout << "有两个相同的实根" << endl;
        float x12 = equation->getX12();
        cout << "x12=" << x12 << endl;
    }else
    {
        cout << "有两个不同的共轭复数根" << endl;
        Complex c1 = equation->getC1();
        Complex c2 = equation->getC2();
        c1.display();
        c2.display();
    }
    
    //释放内存
    delete equation;

    return 0;
}