#include "./include/Sample.h"

//在文件外实现接口函数
void test()
{
    cout << "test() ..." << endl;
    //创建对象,动态申请内存
    Regular *regular = new Regular();
    
    //通过指针访问函数
    regular->input();//输入字符串
    char *s = regular->get();//获取输入的字符串
    regular->calc(s);//统计数字
    regular->display(s);//显示结构

    //释放内存
    delete regular;
}