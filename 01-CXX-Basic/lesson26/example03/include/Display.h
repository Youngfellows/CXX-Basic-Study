#ifndef DISPLAY_H
#define DISPLAY_H

//定义模板类 - Display
template<typename T>
class Display
{
    public:
        //定义仿函数
        void operator()(const T &t)
        {
            cout << t << endl;
        }
};

#endif