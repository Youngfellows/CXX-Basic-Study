#include<iostream>

using namespace std;

//定义学生类,声明类类型
class Student
{
    //定义私有属性
    private:
        int num;//学号
        char const *name;//姓名
        char sex;//性别
        int age;//年龄

    //定义公有方法
    public:
        //构造函数
        Student()
        {
            cout << "Student()无参数构造函数~" << endl;
        }

        Student(int num,char *name,char sex,int age)
        {
            this->num = num;
            this->name = name;
            this->sex = sex;
            this->age = age;
            cout << "Student()有参数构造函数~" << endl;
        }

          Student(int num,char const *name,char sex,int age)
        {
            this->num = num;
            this->name = name;
            this->sex = sex;
            this->age = age;
            cout << "Student()有const参数构造函数~" << endl;
        }


        ~Student()
        {
            cout << "~Student()析构函数,可以释放资源" << endl;
        }

        //成员函数
        void display()
        {
            cout << endl;
            cout << "学号:" << this->num << endl;
            cout << "姓名:" << this->name << endl;
            cout << "性别:" << this->sex << endl;
            cout << "年龄:" << this->age << endl;
            cout << endl;
        }
};

int main()
{
    cout << "perform sample01 ~~~" << endl;
    //编译:  g++ -o sample01 sample01.cpp
    //编译: make
    //执行: ./sample01
    //清空: make clean

    //定义对象
    Student stu1;
    char *name = (char *)"张无忌";//常量转换为指针
    Student stu2(1,name,'M',23);

    char const *name2 = "周芷若";//常量转换为指针
    Student stu3(2,name2,'F',18);
    
    //调用函数
    stu1.display();
    stu2.display();
    stu3.display();

    return 0;
}