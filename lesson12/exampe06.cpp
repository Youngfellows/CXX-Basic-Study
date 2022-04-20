#include<iostream>

//抽象基类--接口
class Number
{
    protected: 
        double value;//数字
    
    public: 
        Number(double v)
        {
            this->value = v;
        }
        virtual ~Number()
        {
            std::cout << "~Number()析构函数" << std::endl;
        }

        virtual void show() = 0;//抽象函数(纯虚函数)
};

//八进制
class Hex : public Number
{
    public: 
        Hex(double v):Number(v)
        {

        }

        void show()//实现方法
        {
            std::cout << "Hex: " << this->value << std::endl;
        }
};

class Dec : public Number
{
    public: 
        Dec(double v):Number(v)
        {

        }

        void show()//实现类
        {
            std::cout << "Dec: " << this->value << std::endl;
        }
};

class Oct : public Number
{
    public: 
        Oct(double v) : Number(v)
        {
            
        }

        void show()//实现类
        {
            std::cout << "Oct: " << this->value << std::endl;
        } 
};



int main()
{
    //使用抽象类引用 
    void fun1(Number &number);//抽象类引用
    void fun2(Number *number);//基类指针
    
    Hex hex1(10);
    Hex *hex = new Hex(20);

    Dec dec1(30);
    Dec *dec = new Dec(40);

    Oct oct1(50);
    Oct *oct = new Oct(60);

    fun1(hex1);//传对象
    fun2(&hex1);//传指针变量

    fun1(dec1);
    fun2(dec);

    fun1(oct1);
    fun2(&oct1);

    delete hex;
    delete oct;
    delete dec;

    return 0;
}

//函数定义
void fun1(Number &number)
{
    number.show();
}

void fun2(Number *number)
{
    number->show();
}