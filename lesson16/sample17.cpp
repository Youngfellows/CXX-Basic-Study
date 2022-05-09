#include<iostream>

using namespace std;

//定义类Time - 时间
class Time
{
    private:
        int hour;//时
        int minute;//分
        int second;//秒
        
        //定义Time类的友元函数set()
        friend void set(Time &time,int hour,int minute,int second);

        //定义Time类的友元函数set()
        //friend void set2(Time *time,int hour,int minute,int second);

    public:
        //构造函数
        Time(int hour,int minute,int second);

        //析构函数
        ~Time();

        //友元函数是能够访问类的私有成员的普通函数,位置与private/public无关
        friend  void display(Time time);//定义Time类的友元函数display()
};

//在类外声明函数 - 构造函数
Time::Time(int hour,int minute,int second)
{
    cout << "Time()有参数构造函数~~~" << endl;
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

Time::~Time()
{
    cout << "~Time()析构函数~~~" << endl;
}

//定义普通函数 - Time类的友元函数display()
void display(Time time)
{
    //调用Time类的私有成员
    cout << time.hour << "时" << time.minute << "分" << time.second << "秒" << endl;
}

//定义普通函数 - Time类的友元函数set()
void set(Time &time,int hour,int minute,int second)
{
    time.hour = hour;
    time.minute = minute;
    time.second = second;
}

//抛出错误: error: ‘int Time::hour’ is private within this context
//定义普通函数 - Time类的友元函数set2()
// void set(Time *time,int hour,int minute,int second)
// {
//     time->hour = hour;
//     time->minute = minute;
//     time->second = second;
// }



int main(int arg,char *args[])
{
    //创建对象
    Time t1(22,12,33);

    //调用Time的友元函数
    display(t1);
    
    set(t1,23,45,55);
    display(t1);
    
    // set2(&t1,18,56,40);
    // display(t1);

    return 0;
}