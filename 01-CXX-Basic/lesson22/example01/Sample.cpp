#include "./include/Sample.h"

//在文件外实现接口函数 - testPoint()函数
void testPoint()
{
    cout << endl;
    cout << "testPoint() ..." << endl;
    //创建对象,动态申请内存
    Point *point = new Point();

    point->setPoint(1.0,2.0);//通过指针调用函数
    cout << *point;//调用重载的输出运算符 <<

}

//在文件外实现接口函数 - testCircle()函数
void testCircle()
{
    cout << endl;
    cout << "testCircle() ..." << endl;
    //创建对象,动态申请内存
    Circle *c = new Circle(3.0,4.0,5.0);
    cout << "修改前:" << endl;
    cout << *c;

    c->setRadius(6.6);
    cout << "修改后:" << endl;
    cout << *c;

    //释放内存
    delete c;

}

//在文件外实现接口函数 - testCylinder()函数
void testCylinder()
{
    cout << endl;
    cout << "testCylinder() ..." << endl;
    //创建对象,动态申请内存
    Point *point = new Point(2.5,3.5);
    Circle *c = new Circle(*point,4.4);
    Cylinder *cy = new Cylinder(*c,8.8);
    
    float area = cy->area();//通过指针访问方法
    cout << "圆柱体面积:" << area << endl;

    //释放内存
    delete point;
    delete c;
    delete cy;
}

//在文件外实现接口函数 - testCircle()函数
void test()
{
    cout << endl;
    cout << "test() ..." << endl;
    //创建派生类的对象,动态申请基类对象的指针变量,使其指向派生类对象
    Point *p = new Circle(2.5,2.5,4.0);
    
    //释放内存
    delete p;
}

//在文件外实现接口函数 - testRef()函数
void testRef()
{
    cout << endl;
    cout << "testRef() ......." << endl;

    //创建对象,动态申请内存
    Point *point = new Point(1,2);
    Circle *c = new Circle(*point,3);
    Cylinder *cy = new Cylinder(*c,4);

    float area = getArea(*c) ;//通过指针访问方法
    cout << "圆面积:" << area << endl;

    area = getArea(*cy);
    cout << "圆柱体面积:" << area << endl;

    //释放内存
    delete point;
    delete c;
    delete cy;
}

//使用多态,使用基类的指针变量,指向子类对象,调用的是子类的方法
float getArea(Circle &c)
{
    cout << "getArea() ......." << endl;
    cout << c;
    return c.area();
}