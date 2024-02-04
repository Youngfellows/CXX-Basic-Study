#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>

//类模板与友元
//定义一个模板类
template<typename T>
class Complex
{
    //重载运算符
    template<typename>  friend Complex<T> operator+(const Complex<T> &c1,const Complex<T> &c2);//重载+
    template<typename>  friend Complex<T> operator-(const Complex<T> &c1,const Complex<T> &c2);//重载-
    template<typename>  friend Complex<T> operator-(const Complex<T> &c);//重载负号运算符
    template<typename>  friend std::ostream & operator<<(std::ostream & output,const Complex<T> &c);//重载输出

    public: 
        T real;//实部
        T image;//虚部

    public: 
        Complex(T real,T image);
        ~Complex();
};

//具体实现
template<typename T> Complex<T>::Complex(T real,T image)
{
    std::cout << "Complex()构造函数" << std::endl;
    this->real = real;
    this->image = image;
}

template<typename T> Complex<T>::~Complex()
{
    std::cout << "~Complex()析构函数" << std::endl;
}

template<typename T> Complex<T> operator+(const Complex<T> &c1,const Complex<T> &c2)
{
    T real = c1.real + c2.real;
    T image = c1.image + c2.image;
    return Complex<T>(real,image);
}

template<typename T> Complex<T> operator-(const Complex<T> &c1,const Complex<T> &c2)
{
    T real = c1.real - c2.real;
    T image = c1.image - c2.image;
    return Complex<T>(real,image);
}

template<typename T> Complex<T> operator-(const Complex<T> &c)
{
    return Complex<T>(-c.real,-c.image);
}

template<typename T> std::ostream & operator<<(std::ostream & output,const Complex<T> &c)
{
    output << "(" << c.real << " , " << c.image << ")";
    return output;
}

#endif