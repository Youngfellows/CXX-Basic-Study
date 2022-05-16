#include "./include/MyString.h"

int main(int arg,char *args[])
{
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

        //Segmentation fault (core dumped),有内存泄漏问题
        // char str2[LEN];//缓冲区
        // myStr->copy2(str2,4);
        // cout << "2,str2=" << str2 << endl;
    }
    catch(char *error)
    {
        cout << "error:: " << error << endl; 
    }
    //释放内存
    delete myStr;

    return 0;
}