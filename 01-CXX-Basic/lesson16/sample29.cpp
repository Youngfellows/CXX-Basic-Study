#include<iostream>
#include<cstring>

using namespace std;

//定义类模板
template <class T>
class Array
{
    private:
        int size;//数组长度
        T *ele;//存放任意类型的数据
    
    public:
        //构造函数
        Array(int memspace = 1);

        //析构函数
        ~Array();

        //填充数据
        void set();

        //显示数据
        void display();
};

//在外部实现模板类的的成员函数,必须是模板函数 - 构造函数
template <class T>
Array<T>::Array(int memspace)
{
    cout << "Array()构造函数" << endl;
    this->size = memspace;
    this->ele = new T[this->size];
}

//在外部实现模板类的的成员函数,必须是模板函数 - 析构函数
template <class T>
Array<T>::~Array()
{
    cout << "~Array()析构函数" << endl;
}


//在外部实现模板类的的成员函数,必须是模板函数 - set()函数
template <class T>
void Array<T>::set()
{
    int i = 0;
    cout << "请输入" <<  this->size << "个数据" << endl;
    for(i = 0; i <  this->size; i++)
    {
        cout << "第" << i << "个数据: ";
        cin >> this->ele[i];//输入数据存放到数组元素中
    }
}

//在外部实现模板类的的成员函数,必须是模板函数 - display()函数
template <class T>
void Array<T>::display()
{
    for(int i = 0; i < this->size; i++)
    {
        if (i % 4 == 0)
        {
            cout << endl;
        } 
        cout << this->ele[i] << " ";  
    }
    cout << endl;
}

int main(int arg,char *args[])
{
    //使用类模板创建模板类对象
    //1.创建一个类型为字符型的数组对象array1
    cout << "建立一个字符数组" << endl;
    Array<char> c1(4);
    c1.set();//设置对象
    cout << "数组内容是" << endl;
    c1.display();

    //2.创建一个类型为int型的数组对象array2
    cout << "建立一个int数组" << endl;
    Array<int> c2(5);
    c2.set();//设置对象
    cout << "数组内容是" << endl;
    c2.display();

    //3.创建一个类型为double型的数组对象array2
    cout << "建立一个double数组" << endl;
    Array<double> c3(6);
    c3.set();//设置对象
    cout << "数组内容是" << endl;
    c3.display();

    //4.创建一个类型为string型的数组对象array2
    cout << "建立一个string数组" << endl;
    Array<string> c4(6);
    c4.set();//设置对象
    cout << "数组内容是" << endl;
    c4.display();

    return 0;
}