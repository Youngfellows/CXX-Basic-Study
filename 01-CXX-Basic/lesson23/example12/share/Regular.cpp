#include "../include/Regular.h"

//在类外实现函数 - 构造函数
Regular::Regular()
{
    cout << "Regular()构造函数" << endl;
}

//在类外实现函数 - 析构函数
Regular::~Regular()
{
    cout << "~Regular()析构函数" << endl;
    //释放内存
    if (this->str != NULL)
    {
        cout << "free this->str" << endl;
        free(this->str);
    }
    if (this->number != NULL)
    {
        cout << "free this->number" << endl;
        free(this->number);
    }
}

//在类外实现函数 - input()函数
char *Regular::input()
{
    cout << "input() ..." << endl;
    char buffer[LEN];//定义缓冲区
    char *p = buffer;//定义char *类型指针变量p,指针p指向字符串buffer
    cout << "请输入一个含有数字的字符串:" << endl;
    //cin >> p;
    fgets(p,LEN,stdin);

    //动态申请内存
    cout << "len=" << strlen(p) << endl;
    //this->str = new char[strlen(p)];//使用new的内存只是在局部变量
    this->str = (char *)malloc(strlen(p)*sizeof(char));//动态申请内存
    strcpy(this->str,p);//拷贝数据到内存
    //this->str = p;//指针变量str指向字符串str,并赋值,不能成功赋值,需要使用拷贝
    cout << "this->str=" << this->str << endl;
    return this->str;
}

//在类外实现函数 - calc()函数
int *Regular::calc(char *s)
{
    cout << "calc() ..." << endl;
    cout << "this->str=" << this->str << endl;
    cout << "s=" << s << endl;
    int i = 0;//代表字符串的第几个字符
    int j = 0;//代表连续数字的位数
    int k = 0;//代表位数
    int m;
    int el0;//el0代表该位数所应该乘的因子
    int digit;//数字
    int ndigit = 0;//有多少个整数
    int a[LEN];//保证数字的数组
    int *pa = a;//指针变量pa指向数组a首元素
    char *pstr = this->str;//指针变量pstr指向字符串str首元素
    //char *pstr = &this->str[0];

    while (*(pstr + i) != '\0')
    {
        char ch = *(pstr + i);
        //cout << ch << endl;
        //是数字字符
        if((ch >= '0') && (ch <= '9' ))
        {
            j++;//连续数字的位数累加
        }else
        {
            //cout << "j=" << j <<  endl;
            //不是数字字符
            if(j > 0)//获取连续数字
            {
                digit = *(pstr + i - 1) - 48;//将个位数赋给digit,将数字字符转换为整数,字符0的ASSCII是48
                //cout << "1,digit=" << digit << endl;
                k = 1;//位数
                while(k < j)//将含有2位以上的其他位的数字累加到digit
                {
                    el0 = 1;
                    for(m = 1; m <= k; m++)
                    {
                        el0 = el0 * 10;//el0代表该位数所应该乘的因子
                        //cout << "el0=" << el0 << endl;
                    }
                    digit = digit + (*(pstr + i - 1 - k) - 48) * el0;//将该位数累加与digit
                    //cout << "2,digit=" << digit << endl;
                    k++;//位数k自增
                }
                //cout << "3,digit=" << digit << endl;
                //将数字放入数组中
                *(pa+ndigit) = digit;
                ndigit++;//数字个数累加
                //pa++;//指针变量pa指向数组a的下一个元素
                j = 0;//从新开始统计
            }
        }
        i++;
    }

    //如果最后一个是数字字符
    if(j > 0)//获取连续数字
    {
        digit = *(pstr + i - 1) - 48;//将个位数赋给digit,将数字字符转换为整数,字符0的ASSCII是48
        //cout << "1,digit=" << digit << endl;
        k = 1;//位数
        while(k < j)//将含有2位以上的其他位的数字累加到digit
        {
            el0 = 1;
            for(m = 1; m <= k; m++)
            {
                el0 = el0 * 10;//el0代表该位数所应该乘的因子
                //cout << "el0=" << el0 << endl;
            }
            digit = digit + (*(pstr + i - 1 - k) - 48) * el0;//将该位数累加与digit
            //cout << "2,digit=" << digit << endl;
            k++;//位数k自增
        }
        //cout << "3,digit=" << digit << endl;
        //将数字放入数组中
        *(pa+ndigit) = digit;
        ndigit++;//数字个数累加
        //pa++;//指针变量pa指向数组a的下一个元素
        j = 0;//从新开始统计
    }

    cout << endl;
    if(ndigit > 0)
    {
        //动态申请内存,并位数组元素赋值
        this->size = ndigit;
        this->number = (int *)malloc(ndigit * sizeof(int) );
        for(int i = 0; i < ndigit; i++)
        {
            *(this->number + i) = *(pa + i);
            cout << *(pa + i) << " ";
            //cout << a[i] << " ";
        }
    }
    cout << endl;
    return this->number;
}


//在类外实现函数 - display()函数
void Regular::display(char *s)
{
    cout << "display():: size=" << this->size << endl;
    cout << "this->str=" << this->str << endl;
    cout << "s=" << s << endl;
    if (this->size != 0 && number != NULL)
    {
       for(int i = 0; i < size; i++)
       {
           cout << *(number + i) << " ";
       }
    }
    cout << endl;
}

//在类外实现函数 - get()函数
char *Regular::get()
{
    cout << "get() ..." << endl;
    return this->str;
}

