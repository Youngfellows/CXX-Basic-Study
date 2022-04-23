#include<iostream>

void test(int ap[],double bp[],char cp[]);//函数声明
void test1(int *ap,double *bp,char *cp);//函数声明

int main()
{
    int  a [ 10 ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ;
    double  b [ 10 ] = { 0.1,  0.2,  0.3,  0.4,  0.5,  0.6,  0.7,  0.8,  0.9,  1.0 } ;
    char  c [ 10 ] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' } ;

    std::cout << "sizeof(a) = " << sizeof(a) << std::endl;
    std::cout << "sizeof(b) = " << sizeof(b) << std::endl;
    std::cout << "sizeof(c) = " << sizeof(c) << std::endl;

    test(a,b,c);
    test1(a,b,c);

    return 0;
}


//函数定义
void test(int ap[],double bp[],char cp[])
{   
    //返回的是一个int *指针的大小
    std::cout << "sizeof(ap) = " << sizeof(ap) << std::endl;
    std::cout << "sizeof(bp) = " << sizeof(bp) << std::endl;
    std::cout << "sizeof(cp) = " << sizeof(cp) << std::endl;
}

//函数定义
void test1(int *ap,double *bp,char *cp)
{
    //返回的是一个int *指针的大小
    std::cout << "sizeof(ap) = " << sizeof(ap) << std::endl;
    std::cout << "sizeof(bp) = " << sizeof(bp) << std::endl;
    std::cout << "sizeof(cp) = " << sizeof(cp) << std::endl;
}
