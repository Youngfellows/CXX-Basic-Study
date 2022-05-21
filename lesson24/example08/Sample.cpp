#include "./include/Sample.h"

//在文件外实现接口方法 - test()函数
void test()
{
     cout << "test():: ..." << endl;
     //创建对象,动态申请内存
     Cipher *star = new Cipher();

     //通过指针访问函数
     star->input();
     char *p = star->getStar();//获取字符串
     p = star->decrypt(p);
     star->display(p);//打印函数

     // string strStar = star->getStr();//获取字符串
     // star->display(strStar);//打印平行四边形

     //释放内存
     free(p);
     delete star;
}

//在文件外实现接口方法 - test()函数
void test1()
{
     cout << "test1():: ..." << endl;
     //创建对象,动态申请内存
     Cipher *star = new Cipher();

     //通过指针访问函数
     star->input2();
     string str = star->getStr();//获取字符串
     str = star->decrypt(str);
     star->display(str);//打印函数

     //释放内存
     delete star;
}