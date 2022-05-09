#include "./Point.h"

int main(int arg,char *args[])
{
    //创建对象point1点,point2点
    Point point1;
    cin >> point1;
    cout << point1;

    Point point2;
    cin >> point2;
    cout << point2;

    double dis = distance(point1,point2);
   cout << "distance:" << dis << endl;

    return 0;
}