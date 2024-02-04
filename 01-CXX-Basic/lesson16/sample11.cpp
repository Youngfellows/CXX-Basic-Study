#include<iostream>
#include<cstring>

using namespace std;

//定义Person类
class Person
{
    private:
        char *name;//姓名
    
    public:
        //构造函数
        Person();
        Person(char *pName = "no_name");

        //析构函数
        ~Person();

        //拷贝构造函数
        Person(Person &s);

};

//在类外定义函数 - 构造函数
Person::Person()
{
    cout << "Person()构造函数~~~" << endl;
}

//在类外定义函数 - 构造函数
Person::Person(char *pName)
{
    cout << "Person()有参数构造函数~~~" << endl;
    //动态申请内存
    this->name = new char[strlen(pName)+1];
    //为指针变量所指向的内存地址赋值
    if(this->name != NULL)
    {
        strcpy(this->name,pName);
    }
}

//在类外定义函数 - 拷贝构造函数
Person::Person(Person &s)
{
    cout << "Person(Person &s)拷贝构造函数" << endl;
   
    //会抛出内存泄漏,两次释放内存
    //this->name = s.name;
    //free(): double free detected in tcache 2  
    //Aborted (core dumped)
     
    //动态申请内存 - 申请一份自己的name指针内存空间,避免内存泄漏
    this->name = new char[strlen(s.name)+1];
    //为指针变量所指向的内存地址赋值
    if(this->name != NULL)
    {
        strcpy(this->name,s.name);
    }

}

//在类外定义函数 - 析构函数
Person::~Person()
{
    cout << "~Person()析构函数~" << endl;
    //释放动态申请的内存
    delete this->name;
}

int main(int arg,char *args[])
{
    //创建对象person1,person2是对象person1的一个拷贝
    Person person1((char*)"杨过");
    Person person2(person1);
    
    return 0;
}