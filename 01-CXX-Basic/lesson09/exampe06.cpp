#include<iostream>
#include<string>


class Address //地址类
{
    private:
        std::string address;
    public:
        Address(std::string addr);//声明构造函数
        ~Address();//析构函数
        void printAddress();//打印地址

};

class Student //学生类
{
    private:
        std::string name;//姓名
        double salary;//薪资
        long phoneNumber;//电话号码
        Address address;//地址信息

    public: 
        Student(std::string n,double s,long number,std::string addr);//含有初始式的构造函数
        ~Student();
        void printStuInfo();//打印信息
};

//含有初始式的构造函数
Student::Student(std::string n,double s,long number,std::string addr):name(n),salary(s),phoneNumber(number),address(addr)
{

}

void Student::printStuInfo()
{
    std::cout << name << " " << phoneNumber << " " << salary;
    address.printAddress();
}

Student::~Student()
{
    std::cout << "~Student()析构函数.." << std::endl;
}

Address::Address(std::string addr)
{
    std::cout << "Address()构造函数..." << std::endl;
    address = addr;
}

Address::~Address()
{
    std::cout << "~Address()析构函数" << std::endl;
}

void Address::printAddress()
{
    std::cout << address << std::endl;
}

int main()
{
    //含有初始式的构造函数
    std::cout << "请输入地址: ";
    std::string address;
    std::cin >> address;//输入地址

    std::cin.get();//消除换行影响
    std::cout << "请输入姓名: ";
    std::string name;
    std::cin >> name;

    std::cin.get();
    std::cout << "请输入电话号码: ";
    long phone;
    std::cin >> phone;

    std::cin.get();
    std::cout << "请输入薪水: ";
    double salary;
    std::cin >> salary;

    Student *pstu = new Student(name,salary,phone,address);
    pstu->printStuInfo();

    return 0;
}