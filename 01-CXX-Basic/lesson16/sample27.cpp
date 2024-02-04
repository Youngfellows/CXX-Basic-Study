#include<iostream>

using namespace std;

//定义Undergra基类 - 大学生 
class Undergra
{
    protected:
        int fee1;//学费
        int fee2;//住宿费
        int fee3;//其他
        int fee;//总费用

    public:
        //构造函数
        Undergra();
        //析构函数
        ~Undergra();
        //计算费用,使用虚函数来实现多态
        virtual int calculate_fee();
        //显示费用,使用虚函数来实现多态
        virtual void display();
};

//定义Graduate类 - 是Undergra的派生类(子类) - 研究生 
class Graduate:public Undergra
{

        public: 
            //构造函数
            Graduate();
            //析构函数
            ~Graduate();
            //计算费用
            int calculate_fee();
            //显示费用
            void display();
};

//在类外定义函数 - 构造函数
Undergra::Undergra()
{
    cout << "Undergra()构造函数" << endl;
}

//在类外定义函数 - 析构函数
Undergra::~Undergra()
{
    cout << "~Undergra()析构函数" << endl;  
}

//在类外定义函数 - calculate_fee()函数
int Undergra::calculate_fee()
{
    this->fee1 = 4200;
    this->fee2 = 800;
    this->fee3 = 400;
    this->fee = this->fee1 + this->fee2 + this->fee3;
    return this->fee;
}

//在类外定义函数 - display()函数
void Undergra::display()
{
    cout << endl;
    cout << "大学生收费" << endl;
    cout << "学费:" << this->fee1 << endl;
    cout << "住宿费:" << this->fee2 << endl;
    cout << "其他:" << this->fee3 << endl;
    cout << "总费用:" << this->fee << endl;
    cout << endl;
}



//在类外定义函数 - 构造函数
Graduate::Graduate()
{
    cout << "Graduate()构造函数" << endl;
}

//在类外定义函数 - 析构函数
Graduate::~Graduate()
{
    cout << "~Graduate()析构函数" << endl;  
}

//在类外定义函数 - calculate_fee()函数
int Graduate::calculate_fee()
{
    this->fee1 = 2300;
    this->fee2 = 800;
    this->fee3 = 300;
    this->fee = this->fee1 + this->fee2 + this->fee3;
    return this->fee;
}

//在类外定义函数 - display()函数
void Graduate::display()
{
    cout << endl;
    cout << "研究生收费" << endl;
    cout << "学费:" << this->fee1 << endl;
    cout << "住宿费:" << this->fee2 << endl;
    cout << "其他:" << this->fee3 << endl;
    cout << "总费用:" << this->fee << endl;
    cout << endl;
}


int main(int arg,char *args[])
{
    //继承呼唤多态性 - 同化效应
    //定义大学生对象,研究生对象
    Undergra undergra;
    Graduate graduate;

    //定义一个指向父类的指针变量ps
    Undergra *ps;
    ps = &undergra;//父类的指针变量ps指向父类对象undergra
    ps->calculate_fee();
    ps->display();

    ps = &graduate;//父类的指针变量ps指向子类对象graduate
    ps->calculate_fee();
    ps->display();

    return 0;
}