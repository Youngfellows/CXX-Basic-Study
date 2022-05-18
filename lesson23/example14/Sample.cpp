#include "./include/Sample.h"

//在文件外实现接口函数
void test()
{
    cout << "test() ..." << endl;
    int month = 0;
    cout << "请输入月份数" << endl;
    cin >> month;

    //创建对象,动态申请内存
    Month *pmonth = new Month();
   
    //通过指针访问函数
    try
    {
        char *result = pmonth->get(month);
        cout << "result=" << result << endl;
    }catch(int err)
    {
        cout << "error," << err << endl;
    }

    //释放内存
    delete pmonth;
}