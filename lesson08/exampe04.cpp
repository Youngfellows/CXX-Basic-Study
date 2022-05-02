#include<iostream>
using namespace std;

struct Date//声明一个结构体类型Date
{
       int month;      //日期中的月份
       int day;        //日期中的天
       int year;       //日期中的年份
};

struct Student{      //声明一个结构体类型Student
       int num;         //声明一个整形变量num
       char name[20];   //声明一个字符型数组name
       char sex[5];        //声明一个字符型变量sex
       int age;         //声明一个整形变量age
       struct Date birthday;   //Date是结构体类型，birthday是Date的类型的变量
       float score;     //声明一个单精度型变量
       char addr[30];   //声明一个字符型数组addr
};


int main()
{
       struct Student one;//声明一个结构体变量one

       //输入信息
       cout<<"请输入学号:";
       cin>>one.num;
       cout<<"请输入姓名:";
       cin>>one.name;
       cout<<"请输入性别:";
       cin>>one.sex;
       cout<<"请输入年龄:";
       cin>>one.age;
       cout<<"请输入生日的年 月 日：";
       cin>>one.birthday.year;
       cin>>one.birthday.month;
       cin>>one.birthday.day;
       cout<<"请输入你的成绩：";
       cin>>one.score;
       cout<<"请输入地址：";
       cin>>one.addr;

       //输出信息
       cout<<"\n以下是你的信息\n";
       cout<<"学号:"<<one.num<<endl;
       cout<<"姓名:"<<one.name<<endl;
       cout<<"性别:"<<one.sex<<endl;
       cout<<"年龄:"<<one.age<<endl;
       cout<<"生日:"<<one.birthday.year<<"/"<<one.birthday.month<<"/"<<one.birthday.day<<endl;
       cout<<"成绩:"<<one.score<<endl;
       cout<<"地址:"<<one.addr<<endl;

    return 0;
}
