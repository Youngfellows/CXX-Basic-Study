#include "./include/Sample.h"

//在头文件外实现打印面积函数,参数是基类的对象
double getArea(Shape &shape)
{
    //cout << "getArea()" << endl;
    return shape.area();
}

//在头文件外定义函数 - 接口的实现 - testCircle()函数
void testCircle()
{
    cout << endl;
    cout << "test1() ..." << endl;
    //创建对象,动态申请内存
    Circle *c = new Circle(2.5);
    float area = c->area();
    cout << "1,圆形面积:" << area << endl;
    area = getArea(*c);
    cout << "1,圆形面积:" << area << endl;
    
    //创建对象
    Circle c2(4.8);
    area = c2.area();
    cout << "2,圆形面积:" << area << endl;
    area = getArea(c2);
    cout << "2,圆形面积:" << area << endl;
    cout << endl;

    //释放内存
    delete c;
}

//在头文件外定义函数 - 接口的实现 - testSquare()函数
void testSquare()
{
    cout << endl;
    cout << "testSquare() ..." << endl;
    //创建对象,动态申请内存
    Square *square = new Square(8);
    float area = getArea(*square);//传递对象过去,指针取值就是对象
    cout << "1,正方形面积:" << area << endl;
    area = square->area();
    cout << "1,正方形面积:" << area << endl;

    //创建一个对象,并调用构造函数
    Square sq(7);
    area = sq.area();
    cout << "2,正方形面积:" << area << endl;
    area = getArea(sq);
    cout << "2,正方形面积:" << area << endl;
    cout << endl;
    //释放内存
    delete square;

}

//在头文件外定义函数 - 接口的实现 - testRectangle()函数
void testRectangle()
{
    cout << endl;
    cout << "testRectangle() ..." << endl;
    //创建对象,动态申请内存
    Rectangle *rect = new Rectangle(8,6);
    float area = getArea(*rect);//传递对象过去,指针取值就是对象
    cout << "1,矩形面积:" << area << endl;
    area = rect->area();
    cout << "1,矩形面积:" << area << endl;

    //创建一个对象,并调用构造函数
    Rectangle rect2(7,9);
    area = rect2.area();
    cout << "2,矩形面积:" << area << endl;
    area = getArea(rect2);
    cout << "2,矩形面积:" << area << endl;
    cout << endl;
    //释放内存
    delete rect;
}

//在头文件外定义函数 - 接口的实现 - testTrapezoid()函数
void testTrapezoid()
{
    cout << endl;
    cout << "testTrapezoid() ..." << endl;
    //创建对象,动态申请内存
    Trapezoid *trap = new Trapezoid(8,6.5,4);
    float area = getArea(*trap);//传递对象过去,指针取值就是对象
    cout << "1,梯形面积:" << area << endl;
    area = trap->area();
    cout << "1,梯形面积:" << area << endl;

    //创建一个对象,并调用构造函数
    Trapezoid trap2(7,9,8);
    area = trap2.area();
    cout << "2,梯形面积:" << area << endl;
    area = getArea(trap2);
    cout << "2,梯形面积:" << area << endl;
    cout << endl;
    //释放内存
    delete trap;
}

//在头文件外定义函数 - 接口的实现 - testTriangle()函数
void testTriangle()
{
    cout << endl;
    cout << "testTriangle() ..." << endl;
    //创建对象,动态申请内存
    Triangle *triangle = new Triangle(8,6);
    float area = getArea(*triangle);//传递对象过去,指针取值就是对象
    cout << "1,三角形面积:" << area << endl;
    area = triangle->area();
    cout << "1,三角形面积:" << area << endl;

    //创建一个对象,并调用构造函数
    Triangle trian(7,9);
    area = trian.area();
    cout << "2,三角形面积:" << area << endl;
    area = getArea(trian);
    cout << "2,三角形面积:" << area << endl;
    cout << endl;
    //释放内存
    delete triangle;
}

void testSumArea()
{
    cout << "testSumArea() ..." << endl;
    //创建对象,动态申请内存
    Circle *circle = new Circle(7);//圆形
    Rectangle *rectangle = new Rectangle(8,9);//矩形
    Square *square = new Square(10);//正方形
    Trapezoid *trapezoid = new Trapezoid(11,15,8);//梯形
    Triangle *triangle = new Triangle(18,19);//三角形

    //创建一个数组,数组中的元素都是Shape类的子类对象的指针
    Shape *sp[SIZE] = {circle,rectangle,square,trapezoid,triangle};
    float totalArea = 0;//总面积
    for(int i = 0; i < SIZE; i++)
    {
        totalArea = totalArea + sp[i]->area();
    }
    cout << "总面积是:" << totalArea << endl;

    //释放内存
    delete circle;
    delete rectangle;
    delete square;
    delete trapezoid;
    delete triangle;
}

void testTotalArea()
{
    cout << "testTotalArea() ..." << endl;
    //创建对象
    Circle circle(7);//圆形
    Rectangle rectangle(8,9);//矩形
    Square square(10);//正方形
    Trapezoid trapezoid(11,15,8);//梯形
    Triangle triangle(18,19);//三角形

    //创建一个数组,数组中的元素都是Shape类的子类对象的指针
    Shape *sp[SIZE] = {&circle,&rectangle,&square,&trapezoid,&triangle};
    float totalArea = 0;//总面积
    for(int i = 0; i < SIZE; i++)
    {
        totalArea = totalArea + sp[i]->area();
    }
    cout << "总面积是:" << totalArea << endl;
}