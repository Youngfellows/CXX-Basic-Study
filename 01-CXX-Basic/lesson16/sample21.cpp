#include<iostream>

using namespace std;

//定义Complex类 - 复数
class Complex
{
    private:
        double real;//实部
        double image;//虚部

    public:
        //构造函数
        Complex(double real,double image);
        //析构函数
        ~Complex();

        //+运算符重载 - 使用类的友元函数来实现
        friend Complex operator + (Complex c1,Complex c2);

        //+运算符重载 - 使用类的友元函数来实现
        //friend Complex operator + (Complex *c1,Complex *c2);

        //普通函数
        void display();
};

//在类外定义函数 - 构造函数
Complex::Complex(double real,double image)
{
    cout << "Complex()有参数构造函数" << endl;
    this->real = real;
    this->image = image;
}

//在类外定义函数 - 析构函数
Complex::~Complex()
{
    cout << "~Complex()析构函数" << endl;
}

//在类外定义函数 - 重载的+运算符 - 普通函数 - 友元函数
Complex operator +(Complex c1,Complex c2)
{
    return Complex(c1.real + c2.real,c1.image + c2.image);
}

//在类外定义函数 - 重载的+运算符 - 普通函数 - 友元函数
// Complex * operator +(Complex *c1,Complex *c2)
// {
//     return new Complex(c1->real + c2->real,c1->image + c2->image);
// }


//在类外定义函数 - display()函数
void Complex::display()
{
    cout << "(" << this->real << "+" << this->image << "i" << ")" << endl;
}

int main(int arg,char *args[])
{
    //创建对象c1,c2,c3
    Complex c1(1.0,1.0);
    Complex c2(2.0,2.0);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}