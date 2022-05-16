#include "./include/Sample.h"

//在文件外实现接口方法 - test1()
void test1()
{
    cout << "test1():: ..." << endl;
    
    //创建对象,动态申请内存
    MyString *myStr = new MyString();
    try
    {
        //通过指针访问类方法
        myStr->set("深圳市南山区白石洲");//设置字符串
        int len = myStr->length();//获取字符串长度
        char *s = myStr->get();//获取字符串

        cout << "字符串长度:len=" << len << endl;
        cout << s << endl;
        
        char str[LEN];
        myStr->copy(str,4);
        cout << "1,str=" << str << endl;
    }
    catch(char *error)
    {
        cout << "error:: " << error << endl; 
    }
    cout << endl;

    //释放内存
    delete myStr;
}

//在文件外实现接口方法 - test2()
void test2()
{
    cout << "test2():: ..." << endl;
    //创建对象,动态申请内存
    MyString *myStr = new MyString("广东省广州市荔湾区");
    try
    {
        //通过指针访问类方法
        char str[LEN];//缓冲区
        myStr->copy(str,4);
        cout << "str=" << str << endl;
    }
    catch(char *error)
    {
        cout << "error:: " << error << endl; 
    }
    cout << endl;

    //释放内存
    delete myStr;
}

//在文件外实现接口方法 - test3()
void test3()
{
    cout << "test3():: ..." << endl;
    
    //创建对象,动态申请内存
    MyString *myStr = new MyString();
    cout << "请输入一个字符串:";
    char str[LEN];
    char *ps = str;
    //cin >> ps;
    fgets(ps,LEN,stdin);
    cout << "ps=" << ps << endl;

    //通过指针调用函数
    myStr->set(ps);//设置字符串
    cout << myStr->get() << endl;//获取字符串
  

    int upper;//大写字母
    int lower;//小写字母
    int digit;//数字
    int space;//空格
    int other;//其他字符
    myStr->calc(calculate1,ps,upper,lower,digit,space,other);//通过函数指针调用回调函数
    cout << "大写字母:" << upper << endl;
    cout << "小写字母:" << lower << endl;
    cout << "数字字符:" << digit << endl;
    cout << "空格字符:" << space << endl;
    cout << "其他字符:" << other << endl;

    cout << endl;

    //释放内存
    delete myStr;
}

//在文件外实现接口方法 - test4()
void test4()
{
    cout << "test4():: ..." << endl;
    //创建对象,动态申请内存
    MyString *myStr = new MyString();
    cout << "请输入一个字符串:";
    char str[LEN];
    char *ps = str;
    //cin >> ps;
    fgets(ps,LEN,stdin);
    cout << "ps=" << ps << endl;

    //通过指针调用函数
    myStr->set(ps);//设置字符串
    cout << myStr->get() << endl;//获取字符串


    int upper = 0;//大写字母
    int lower = 0;//小写字母
    int digit = 0;//数字
    int space = 0;//空格
    int other = 0;//其他字符
    myStr->calc2(calculate2,ps,&upper,&lower,&digit,&space,&other);//通过函数指针调用回调函数
    cout << "大写字母:" << upper << endl;
    cout << "小写字母:" << lower << endl;
    cout << "数字字符:" << digit << endl;
    cout << "空格字符:" << space << endl;
    cout << "其他字符:" << other << endl;

    cout << endl;

    //释放内存
    delete myStr;
}

//回调函数
void calculate1(char *str,int &upper,int &lower,int &digit,int &space,int &other)
{
    cout << "calculate1() 回调函数执行 ..." << endl;
    cout << "calculate1():: str=" << str << endl;
    char *p = str;//指针变量p指向字符串str
    while (*p != '\0')
    {
       char ch = *p;
       //cout << ch << endl;
       if(ch >= 'A' && ch <= 'Z')
       {
            upper = upper + 1;
       }else if (ch >= 'a' && ch <= 'z')
       {
            lower = lower + 1;
       }else if (ch >= '0' && ch <= '9')
       {
            digit++;
       }else if(isspace(ch))//是空格判断
       {
            cout << ch << "是空格,space=" << space << endl;
            space = space + 1;
       }else{
            cout << ch << "是特殊字符,other=" << other << endl;
            other = other + 1;
       }
       p++;//移动指针指向
    }
    cout << "calculate1()::大写字母:" << upper << endl;
    cout << "calculate1()::小写字母:" << lower << endl;
    cout << "calculate1()::数字字符:" << digit << endl;
    cout << "calculate1()::空格字符:" << space << endl;
    cout << "calculate1()::其他字符:" << other << endl;

}

//回调函数     
void calculate2(char *str,int *upper,int *lower,int *digit,int *space,int *other)
{
    cout << "calculate2() 回调函数执行 ..." << endl;
    cout << "calculate2():: str=" << str << endl;
    char *p = str;//指针变量p指向字符串str
    while (*p != '\0')
    {
       char ch = *p;
       //cout << ch << endl;
       if(ch >= 'A' && ch <= 'Z')
       {
           (*upper)++;
       }else if (ch >= 'a' && ch <= 'z')
       {
           (*lower)++;
       }else if (ch >= '0' && ch <= '9')
       {
           (*digit)++;
       }else if (isspace(ch))//是空格判断
       {
            cout << ch << "是空格,space=" << *space << endl;
            (*space)++;
       }else{
            cout << ch << "是特殊字符,other=" << *other << endl;
            (*other)++;
       }
       p++;//移动指针指向
    }
    cout << "calculate2()::大写字母:" << *upper << endl;
    cout << "calculate2()::小写字母:" << *lower << endl;
    cout << "calculate2()::数字字符:" << *digit << endl;
    cout << "calculate2()::空格字符:" << *space << endl;
    cout << "calculate2()::其他字符:" << *other << endl;
}
