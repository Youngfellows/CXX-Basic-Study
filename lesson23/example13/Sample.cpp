#include "./include/Sample.h"

//在文件外实现接口函数
void test()
{
    cout << "test() ..." << endl;
    char *s1,*s2;//定义char *指针变量s1,s2
    char buf1[LEN],buf2[LEN];//定义缓冲区
    s1 = buf1;//指针变量s1,指向数组buf1
    s2 = buf2;//指针变量s1,指向数组buf1  
    cout << "请输入字符串s1:" << endl;
    fgets(s1,LEN,stdin);

    cout << "请输入字符串s2:" << endl;
    fgets(s2,LEN,stdin);

    //创建对象,动态申请内存
    MyString *str = new MyString();
    
    //通过指针访问函数
    int result = str->compare(s1,s2);
    cout << "比较结果:" << result << endl;
    cout << endl;

    //释放内存
    delete str;
}