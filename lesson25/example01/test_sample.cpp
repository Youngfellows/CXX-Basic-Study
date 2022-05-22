#include "./include/MaxMin.h"

int main()
{
    //动态申请内存,创建对象
    int a = 3;
    int b = 4;
    MaxMin *maxmin = new MaxMin(a,b);

    //通过指针调用函数
    int maxValue = maxmin->max();
    int minValue = maxmin->min();
    cout << a << "和" << b << "的最大公约数:" << maxValue << endl;
    cout << a << "和" << b << "的最小公倍数:" << minValue << endl;

    //释放内存
    delete maxmin;
    return 0;
}