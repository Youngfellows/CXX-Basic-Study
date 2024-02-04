#include "./include/Student.h"

#define SIZE 5

//声明函数
void show(Student *p,int size);

//函数声明 - 找出成绩最好的学生
Student max(Student *,int size);

int main(int arg,char *args[])
{
    //创建一个对象数组
    Student stu[SIZE] = {
        Student(1001,88.5),
        Student(1002,99.0),
        Student(1003,77.5),
        Student(1004,85.0),
        Student(1005,59.5)
    };

    //Student类型的指针变量p,指针指向数组
    Student *p = stu;
    show(p,SIZE);

    cout << "成绩最好的学生是:" << endl;
    Student maxStudent = max(p,SIZE);
    maxStudent.display();

    //delete p;

    return 0;
}

//定义函数
void show(Student *p,int size)
{
    cout << endl;
    Student *pt = p;
    for (int i = 0; i < size; i++,pt++)
    {
        pt->display();
    }
    cout << endl;
}

//定义函数
Student max(Student *p,int size)
{
    Student *pt = p;
    Student *maxStu = pt;
    for (int i = 0; i < size; i++,pt++)
    {
       if (pt->getScore() > maxStu->getScore())
       {
           maxStu = pt;
       }  
    }

    //返回一个对象
    return *maxStu;
}