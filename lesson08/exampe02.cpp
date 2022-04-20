#include<iostream>
#include<cstring>

//定义一个结构体
struct Person
{
    char name[30];//姓名
    unsigned long id;//编号
    double salary;//工资
};

int main()
{
    // 结构指针 -> 成员
		// (*结构指针 ) . 成员

    //用指针访问结构变量的成员
    Person person;//定义结构体变量person
    Person *p;//定义结构体指针变量p

    p = &person;//p指向person变量

    //对结构体成员赋值
    strcpy(p->name,"jack chen");
    p->id = 987654321;
    p->salary = 12345.7;

    std::cout << "姓名: " << p->name << std::endl;
    std::cout << "编号: " << p->id << std::endl;
    std::cout << "工资: " << p->salary << std::endl;

    std::cout << std::endl;

    std::cout << "姓名: " << (*p).name << std::endl;
    std::cout << "编号: " << (*p).id << std::endl;
    std::cout << "工资: " << (*p).salary << std::endl;

    std::cout << std::endl;
    
    //类型相同的结构变量可以整体赋值
    Person employee,*pe;
    pe = &employee;//pe指向employee
    employee = person;

    std::cout << "姓名: " << pe->name << std::endl;
    std::cout << "编号: " << pe->id << std::endl;
    std::cout << "工资: " << pe->salary << std::endl;

    std::cout << std::endl;

    std::cout << "姓名: " << (*pe).name << std::endl;
    std::cout << "编号: " << (*pe).id << std::endl;
    std::cout << "工资: " << (*pe).salary << std::endl;

    return 0;
}
