#include<iostream>

#define ARRAY_SIZE 5 //数组大小

using namespace std;

//定义Array类 - 数组
class Array
{
    private:
        int ele[ARRAY_SIZE]; //私有数据
    
    public:
        //构造函数
        Array();
        //析构函数
        ~Array();

        //公有方法 - 设置数组元素
        void set();

        //声明查找类是Array数组类的友元,则查找类能够访问数组类私有数据
        friend class Lookup;
}; 

//定义Lookup类 - 查找
class Lookup
{
    public:
        //构造函数
        Lookup();

        //析构函数
        ~Lookup();

        //查找最大元素函数
        int max(Array array); 

        //查找最小元素函数
        int min(Array array);
};

//在类外定义函数 - Array 类 构造函数
Array::Array()
{
    cout << "Array()构造函数" << endl;
}

//在类外定义函数 - Array 类 析构函数
Array::~Array()
{
    cout << "~Array()析构函数" << endl;
}

//在类外定义函数 - Array 类 set函数
void Array::set()
{
    cout << "请输入" << ARRAY_SIZE << "个元素" << endl;
    for(int i = 0; i < ARRAY_SIZE; i++)
    {   
        cin >> this->ele[i];
    }
}


//在类外定义函数 - Lookup 类 构造函数
Lookup::Lookup()
{
    cout << "Lookup()构造函数" << endl;
}

//在类外定义函数 - Lookup 类 析构函数
Lookup::~Lookup()
{
    cout << "~Lookup()析构函数" << endl;
}

//在类外定义函数 - Lookup 类 max函数
int Lookup::max(Array array)
{
    int _max;//最大值
    int i;
    _max = array.ele[0];
    for(i = 0; i < ARRAY_SIZE; i++)
    {
        if(_max < array.ele[i])
        {
            _max = array.ele[i];
        }
    }
    return _max;//返回数组最大值
}

//在类外定义函数 - Lookup 类 min函数
int Lookup::min(Array array)
{
    int _min;//最大值
    int i;
    _min = array.ele[0];
    for(i = 0; i < ARRAY_SIZE; i++)
    {
        if(_min > array.ele[i])
        {
            _min = array.ele[i];
        }
    }
    return _min;//返回数组最小值
}

int main(int arg,char *args[])
{
    //创建对象array,lookup
    Array array;//数组类对象
    array.set();

    Lookup lookup;//查找类对象
    
    int max = lookup.max(array);
    int min = lookup.min(array);
    cout << "max=" << max << endl;
    cout << "min=" << min << endl;

    return 0;
}