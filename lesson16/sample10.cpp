#include<iostream>

using namespace std;

//定义Cat类 - 猫
class Cat
{
    private:
        char const *name;//名字
        int age;//年龄
        char sex;//性别
        char const *color;//颜色
    
    public:
        //构造函数
        Cat();
        Cat(char const *name,int age,char sex,char const *color);

        //析构函数
        ~Cat();

        //公有函数
        void display();
};

//在类外定义函数 - 构造函数
Cat::Cat()
{
    cout << "Cat()无参数构造函数~" << endl;
}

Cat::Cat(char const *name,int age,char sex,char const *color)
{
    cout << "Cat()有参数构造函数~" << endl;
    this->name = name;
    this->age = age;
    this->sex = sex;
    this->color = color;
}


//在类外定义函数 - 析构函数
Cat::~Cat()
{
    cout << "~Cat()析构函数~" << endl;
}

//在类外定义函数 - display函数
void Cat::display()
{
    cout << endl;
    cout << "猫信息如下" << endl;
    cout << "姓名:" << this->name << endl;
    cout << "年龄:" << this->age << endl;
    cout << "性别:" << this->sex << endl;
    cout << "颜色:" << this->color << endl;
    cout << endl;
}

int main(int arg,char *args[])
{
    //创建对象cat1
    char const *name1 = "小花猫";
    char const *color1 = "白色";
    Cat cat1(name1,1,'F',color1);//调用有参数构造函数


    //动态申请内存，使指针指向创建的一只猫
     char const *name2 = "大灰猫";
    char const *color2 = "灰色";
    Cat *cat2 = new Cat(name2,2,'M',color2);
    
    //调用对象方法
    cat1.display();
    cat2->display();

    //释放指针cat2指向的内存空间
    delete cat2;

    return 0;
}