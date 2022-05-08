#include<iostream>

using namespace std;

//定义类Ratio - 比例
class Ratio
{
    private:
        int length;//长
        int width;//宽

    public:
        //构造函数
        Ratio();
        Ratio(int l,int w);

        //析构函数
        ~Ratio();

        //拷贝构造函数 - 参数是Ratio对象的引用
        Ratio(Ratio &r);

        //普通函数
        double rate();
};

//在类外定义 - 构造函数
Ratio::Ratio()
{
    cout << "Ratio()无参数构造函数~~"  << endl;
}

//在类外定义 - 有构造函数 - 通过参数初始化表初始化
Ratio::Ratio(int l,int w):length(l),width(w)
{
    cout << "Ratio()有参数构造函数~~"  << endl;
}

//在类外定义 - 拷贝构造函数
Ratio::Ratio(Ratio &r)
{
    cout << "Ratio(Ratio &r) 拷贝构造函数 ~~~" << endl;
    this->length = r.length;
    this->width = r.width;
}

//在类外定义 - 析构函数
Ratio::~Ratio()
{
    cout << "~Ratio()析构函数~~" << endl;
}

//在类外定义 - rate函数 - 长宽比例
double Ratio::rate()
{
    //int 类型转换为double类型 - C语言方式
    //retur (double)length / (double)width;

    //int 类型转换为double类型 - C++方式
    return double(length) / double(width);
}

int main(int arg,char *args[])
{
    //创建Ratio对象 ratio1
    Ratio ratio1(22,3);

    //通过对象调用对象rate函数
    double rate1 = ratio1.rate();
    cout << "ratio1长宽比例:" << rate1 << endl;

    //通过拷贝构造函数把对象ratio1的值复制给对象ratio2
    Ratio ratio2(ratio1);
    double rate2 = ratio2.rate();
    cout << "ratio2长宽比例:" << rate2 << endl;

    return 0;
}