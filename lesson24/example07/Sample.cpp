#include "./include/Sample.h"

//在文件外实现接口方法 - test()函数
void test()
{
     cout << "test():: ..." << endl;
     //创建对象,动态申请内存
     Star *star = new Star();

     //通过指针访问函数
     char *p = star->getStar();//获取字符串
     star->display(p);//打印函数

     string strStar = star->getStr();//获取字符串
     star->display(strStar);//打印平行四边形

     //释放内存
     free(p);
     delete star;
}