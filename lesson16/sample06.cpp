#include<iostream>

using namespace std;

//定义Box类 - 盒子
class Box
{
    //私有属性
    private:
        int length;//长
        int width;//宽
        int heigth;//高

    public:
        //构造函数
        //Box();
        //构造函数,声明还有默认参数值
        Box(int l = 10,int w = 10,int h = 10);
        //析构函数
        ~Box();

        //公有函数 - 设置长宽高
        void set(int l,int w,int h);

        //公有函数 - 体积
        int volume();
};

//在类外定义函数 - 构造函数
// Box::Box()
// {
//     cout << "Box()无参数构造函数~" << endl;
// }

//构造函数,声明还有默认参数值,使用初始化列表形式
Box::Box(int l,int w,int h):length(l),width(w),heigth(h)
{
    cout << "Box()有参数构造函数~" << endl;
    // this->length = l;
    // this->width = w;
    // this->heigth = h;
}

//在类外定义函数 - 析构函数
Box::~Box()
{
    cout << "~Box()析构函数" << endl;
}

//在类外定义函数 - 设置盒子长宽高
void Box::set(int l,int w,int h)
{
    cout << "set:: ~~~" << endl;
    this->length = l;
    this->width = w;
    this->heigth = h;
}


//在类外定义函数 - 求盒子体积
int Box::volume()
{
    cout << "volume:: ~~~" << endl;
    return this->length * this->width * this->heigth;
}

int main(int arg,char *args[])
{
    //创建Box类的指针变量box1,box2,box3,box1指向对象Box,box2指向对象Box,box3指向对象Box(1,2,3);
    Box *box1 = new Box();
    Box *box2 = new Box();
    Box *box3 = new Box(3,3,3);
    Box *box4 = new Box();//使用含有默认属性的构造函数
    
    //通过指针-设置对象
    box1->set(1,1,1);
    box2->set(2,2,2);

    //通过指针-求体积
    int v1 = box1->volume();
    int v2 = box2->volume();
    int v3 = box3->volume();
    int v4 = box4->volume();

    cout << "box1盒子体积:" << v1 << endl;
    cout << "box2盒子体积:" << v2 << endl;
    cout << "box3盒子体积:" << v3 << endl;
    cout << "box4盒子体积:" << v4 << endl;

    //删除指针,释放对象
    delete box1;
    delete box2;
    delete box3;
    delete box4;

    return 0;
}