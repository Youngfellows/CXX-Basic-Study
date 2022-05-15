#include "../include/ManageSystem.h"

//在类外定义函数 - 构造函数
ManageSystem::ManageSystem()
{
    cout << "ManageSystem()无参数构造函数" << endl;
}

//在类外定义函数 - 析构函数
ManageSystem::~ManageSystem()
{
    cout << "~ManageSystem()析构函数" << endl;
}

//在类外定义函数 - input()函数
void ManageSystem::input(int size,int count)
{
    this->size = size;
    this->count = count;

    cout << "input:: 输入" << size << "个学生信息 " << endl;
    struct Student stu[size];//创建一个结构体数组
    int i = 0;
    int j = 0;
    struct Student *ps = stu;
    for(i = 0; i < size; i++,ps++)
    {
        cout << "请输入第" << i << "个学生信息" << endl;
        cout << "学号:";
        cin >> ps->num;
        cout << ps->num << endl;

        cout << "姓名:";
        cin >> ps->name;
        
        cout << "性别:";
        char tempSex[LEN];
        cin >> tempSex;
        strcpy(ps->sex,tempSex);
        //cin >> ps->sex;

        for(j = 0; j < count; j++ )
        {
            cout << "score[" << j + 1 << "]=";
            cin >>  ps->score[j];  
        }
        print(*ps);
    }

    //指针变量stu指向数组对象
    this->pStu = stu;
}

//在类外定义函数 - display()函数
void  ManageSystem::print(struct Student &stu )
{       
        cout << stu.num << "\t" << stu.name << "\t" << stu.sex << "\t";
        for(int j = 0; j < this->count; j++ )
        {
            cout << stu.score[j] << "\t";
        }
        cout << endl;  
}

//在类外定义函数 - display()函数
void ManageSystem::display()
{
    cout << "display:: 学生数量" << this->size << "课程数" << this->count << endl;
    int i = 0;
    int j = 0;
    cout << "学号\t姓名\t性别\t";
    for(j = 0; j < this->count; j++)
    {
        cout << "成绩" << j + 1 << "\t";
    }
    cout << "平均成绩" << endl;

    struct Student *ps = this->pStu;
    for(i = 0; i < this->size; i++,ps++)
    {
        cout << ps->num << "\t" << ps->name << "\t" << ps->sex << "\t";
        for(j = 0; j < this->count; j++ )
        {
            cout << ps->score[j] << "\t";
        }
        cout << endl;
    }
   
    cout << "成绩最好的学生信息是" << endl;
    cout << "学号\t姓名\t性别\t";
    for(j = 0; j < this->count; j++)
    {
        cout << "成绩" << j << "\t";
    }
    cout << "平均成绩" << endl;
}

//在类外定义函数 - superior()函数
struct Student * ManageSystem::superior()
{
    cout << "superior:: ..." << endl;
    return NULL;
}
