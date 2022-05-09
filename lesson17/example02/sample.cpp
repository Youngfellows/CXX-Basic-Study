#include "./Point.h"

int main(int arg,char *args[])
{
    //创建对象point1点,point2点
    Point point1(33.5,44.98);
    Point point2(108.44,207.32);
    double dis = distance(point1,point2);
    cout << "distance:" << dis << endl;

    return 0;
}