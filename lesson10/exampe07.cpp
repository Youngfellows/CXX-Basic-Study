#include<iostream>

const int SIZE = 10;//数组大小

class SafeArray
{
    private: 
        int array[SIZE];

    public: 
        SafeArray();
        ~SafeArray();

        //下标运算符 [] 重载
        int & operator [] (int position);
};

SafeArray::SafeArray()
{
    std::cout << "SaveArray()无参数构造函数" << std::endl;
    for(int i = 0; i < SIZE; i++)
    {
        array[i] = i;
    }
}

SafeArray::~SafeArray()
{
    std::cout << "~SaveArray()析构函数" << std::endl;
}

 //下标运算符 [] 重载
int & SafeArray::operator[](int position)
{
    if(position > SIZE || position < 0)
    {
        std::cout << "数组脚标越界了" << std::endl;
        return array[0];
    }

    return array[position];
}

int main()
{

    SafeArray a;

    std::cout << "a[2] = " << a[2] << std::endl;
    std::cout << "a[8] = " << a[8] << std::endl;
    std::cout << "a[23] = " << a[23] << std::endl;
    std::cout << "a[-2] = " << a[-2] << std::endl;

    return 0;
}