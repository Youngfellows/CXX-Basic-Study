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

//在文件外实现接口函数 - test1()函数
void test1()
{
    cout << "test1() ... " << endl;
    //创建对象,动态申请内存
    MyString *myStr = new MyString();

    //通过指针访问对象函数
    char **s = myStr->input();//输入数组元素
    myStr->display();//显示二维数组元素
    //myStr->display(s);//显示二维数组元素
    myStr->sort();//排序二维数组元素
    //myStr->sort(s);//排序二维数组元素
    //myStr->display(s);//显示二维数组元素
    myStr->display();//显示二维数组元素

    cout << endl;

    //释放内存
    free(s);
    delete myStr;
}

//在文件外实现接口函数 - test2()函数
void test2()
{
    cout << "test2() ... " << endl;
    //创建对象,动态申请内存
    MyString *myStr = new MyString();

    //通过指针访问对象函数
    char **s = myStr->input();//输入数组元素
    //myStr->display();//显示二维数组元素
    myStr->display(s);//显示二维数组元素
    //myStr->sort();//排序二维数组元素
    myStr->sort(s);//排序二维数组元素
    myStr->display(s);//显示二维数组元素

    cout << endl;

    //释放内存
    free(s);
    delete myStr;
}

//在文件外实现接口函数 - test1()函数
void test3()
{
    cout << "test3() ... " << endl;
    //创建对象,动态申请内存
    MyString *myStr = new MyString();

    //通过指针访问对象函数
    char (*s)[LEN] = myStr->input2();//输入数组元素,返回指向一维数组的指针变量s,一维数组长度是LEN
    myStr->display();//显示二维数组元素
    myStr->display(s);//显示二维数组元素
    myStr->sort(s);//排序二维数组元素
    myStr->display(s);//显示二维数组元素
    cout << endl;

    //释放内存
    //delete s;
    delete myStr;
}

