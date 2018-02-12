#include<iostream>

void constConst();//定义常量
void constConstPoint();//指向常量的指针
void pointConst();//指针常量
void varConstPointConst();//指向常量的指针常量
void constQuote();//常引用

int main()
{

    //1.标识常量
    constConst();

    //2.指向常量的指针
    constConstPoint();

    //3.指针常量
    pointConst();

    //4.指向常量的指针常量
    varConstPointConst();

    //5.常引用
    constQuote();

    return 0;
}

/**
5.常引用
*/
void constQuote()
{
    //5.常引用
    //定义: const  类型  & 引用名  = 对象名 ;

    int  a = 12306;
    const int & ra = a;//ra是a的常引用
    //ra = 618//错误，不能通过常引用对对象a执行写操作
    std::cout << "a = " << ra << std::endl;

    a = 985;
    std::cout << "a = " << ra << std::endl;
}

/**
4.指向常量的指针常量
*/
void varConstPointConst()
{
    //4.指向常量的指针常量
    //定义: const  类型  * const  指针
    //特性: 指针本身和所指对象的值在定义之后都限制为只读
    const int MIN = 10;//常量MIN
    int max;//变量max
    const int * const pmax = &max;//指向常量的指针常量pmax,pmax指向max
    //*pmax = 100;//错误，间址访问为只读

    max = 1234;
    std::cout << "max = " << max << " ,*pmax = " << *pmax << std::endl;

    const int * const pmin = &MIN;//指向常量的指针常量pmin,pmin指向常量MIN
    //pmin = &max;//错误，不能修改指针常量
    //*pmax = 32;//错误，间址访问为只读
    std::cout << "MIN = " << *pmin << std::endl;

}


/**
3.指针常量
*/
void pointConst()
{
    //3.指针常量
    //定义: 类型  * const 指针
    //指针常量的值只能在定义的时候初始化
    //指针常量的值不可变

    int max;//变量max
    int * const pmax = &max;//指针常量pmax,pmax指向max
    int *p;//int *型指针变量p
    *pmax = 10086;
    std::cout << "*pmax = " << *pmax << ",max = " << max << std::endl;

    p = new int;
    *p = 2134;
    std::cout << "*p = " << *p << std::endl;

    //pmax = p;//error,指针常量的值不可变
    p = pmax;//pmax赋值给指针变量p
    std::cout << "*p = " << *p << std::endl;

    *pmax = *pmax + *p;
    std::cout << "*pmax = " << *pmax << ",max = " << max << std::endl;
    std::cout << "\n";
}

/**
1.标识常量
*/
void constConst()
{
  //1.标识常量
  //定义形式：    const  类型  常量标识符  = 常量值 ;
  //常量的值不可变

  //定义常量
  const double PI = 3.1415926;
  const int MIN = 30;
  const int MAX = 2 * MIN;

  std::cout << PI << "\t" << MIN << "\t" << MAX << std::endl;
  std::cout << "\n";
}

/**
2.指向常量的指针
*/
void constConstPoint() {
  //2.指向常量的指针
  //定义形式: const  类型  *  指针
  //         或	类型  const  *  指针
  const int A = 78;//常量A
  const int B = 25;//常量B
  int c = 32;//变量c

  const int *pi = &A;//指向常量的指针pi,pi指向常量A
  //*pi = 44;//常量只允许读，并不能修改不
  // 错误, 不能修改所指常量

  std::cout << "指向常量A,  *pi = " << *pi << std::endl;

  pi = &B;//指向常量B
  std::cout << "指向常量B,  *pi = " << *pi << std::endl;

  pi = &c;//指向变量c
  std::cout << "指向变量c,  *pi = " << *pi << std::endl;

  //*pi = 341; // 错误，不能用间址方式修改对象
  c = 99;
  std::cout << "指向变量c,  *pi = " << *pi << std::endl;
  std::cout << "\n";
}
