#include<iostream>



int main()
{
    int *p = NULL;
    p = new int(89);//初始化存储区,p指针变量指向89

    if(p == NULL)
    {
      std::cout << "内存申请失败啦..." << std::endl;
      return 1;
    }else
    {
      std::cout << "*p = " << *p << std::endl;
    }
    delete p;
    return 0;
}
