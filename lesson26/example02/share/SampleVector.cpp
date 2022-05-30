#include "../include/SampleVector.h"

//在文件外实现接口 - vectorTest1()函数
void vectorTest1()
{
    cout << "vectorTest1():: ..." << endl;
    //vector对象的定义和初始化
    vector<int> ivec;//空
    //是否为空
    bool isEmpty = ivec.empty();
    cout << "是否为空:isEmpty=" << isEmpty << endl;
    int size = ivec.size();
    cout << "size=" << size << endl;
    if(isEmpty)
    {
        cout << "ivec为空" << endl;
    }else
    {
        cout << "ivec不为空" << endl;
    }

    //添加元素
    ivec.push_back(3);
    ivec.push_back(4);

    isEmpty = ivec.empty();
    cout << "是否为空:isEmpty=" << isEmpty << endl;
    if(isEmpty)
    {
        cout << "ivec为空" << endl;
    }else
    {
        cout << "ivec不为空" << endl;
    }

    //大小
    size = ivec.size();
    cout << "size=" << size << endl;

    //获取元素
    for(int i = 0; i < 2; i++)
    {
        int ele = ivec[i];//获取元素
        cout << "ele=" << ele << endl;
    }

    cout << endl;
}

//在文件外实现接口 - vectorTest2()函数
void vectorTest2()
{
    cout << "vectorTest2():: ..." << endl;
    //vector对象的定义和初始化
    vector<string> citys;

    //添加元素
    citys.push_back("深圳");
    citys.push_back("广州");

    //拷贝citys
    vector<string> newCitys(citys);
    //vector<string> *newCitys = new vector<string>(citys);

    //是否为空
    bool isEmpty = newCitys.empty();
    int size = newCitys.size();
    cout << "size:" << size << ",isEmpty:" << isEmpty << endl;
    if(isEmpty)
    {
        cout << "newCitys为空" << endl;
    }else
    {
        cout << "newCitys不为空" << endl;
    }

    //使用迭代器获取元素
    vector<string>::iterator iter;
    for(iter = newCitys.begin(); iter != newCitys.end(); iter++)
    {
        //获取元素
        string city = *iter;
        cout << city << " ";
    }
    cout << endl;


    cout << endl;
}

//在文件外实现接口 - vectorTest3()函数
void vectorTest3()
{
    cout << "vectorTest3():: ..." << endl;
    //vector对象的定义和初始化
    vector<string> *citys = new vector<string>(10,"深圳");//添加10个元素,每个初始化为"深圳"

    //遍历元素
    vector<string>::iterator iter;
    for(iter = citys->begin(); iter != citys->end(); iter++)
    {
        //获取元素
        string city = *iter;
        cout << city << " ";
    } 
    cout << endl;
    
    cout << endl;

    //释放内存
    delete citys;
}

//在文件外实现接口 - vectorTest4()函数
void vectorTest4()
{
    cout << "vectorTest4():: ..." << endl;
    //vector对象的定义和初始化
    vector<int> *vec = new vector<int>(10);//添加10个元素,每个初始化为"0"

    //遍历元素
    vector<int>::iterator iter;
    for(iter = vec->begin(); iter != vec->end(); iter++)
    {
        //获取元素
        int num = *iter;
        cout << num << " ";
    } 
    cout << endl;
    
    cout << endl;

    //释放内存
    delete vec;
}

//在文件外实现接口 - vectorTest5()函数
void vectorTest5()
{
    cout << "vectorTest5():: ..." << endl;
    //vector对象的定义和初始化
    vector<string> *animals = new vector<string>();
    //添加元素
    animals->push_back("猫猫");
    animals->push_back("狗狗");
    animals->push_back("大熊");

    //获取元素大小
    vector<string>::size_type size = animals->size();
    cout << "大小: size=" << size << endl;
    //通过下标获取元素
    for(vector<string>::size_type index = 0; index != size; index++)
    {
        string animal = (*animals)[index];//通过下标获取元素
        cout << animal << " ";
        (*animals)[index] = animal + "xxx"; //修改元素,通过下标
    }
    cout << endl;

    size = animals->size();
    cout << "大小: size=" << size << endl;
    //遍历元素,通过下标
    for(vector<string>::size_type index = 0; index != size; index++)
    {
        string animal = (*animals)[index];//通过下标获取元素
        cout << animal << " ";
    }
    cout << endl;

    //遍历元素,通过迭代器
    vector<string>::iterator iter;
    for(iter = animals->begin(); iter != animals->end(); iter++)
    {
        string animal = *iter;
        cout << animal << " ";
    }
    cout << endl;

    
    //释放内存
    delete animals;
    cout << endl;
}

//在文件外实现接口 - vectorTest6()函数
void vectorTest6()
{
    cout << "vectorTest6():: ..." << endl;  
}

//在文件外实现接口 - vectorTest7()函数
void vectorTest7()
{
    cout << "vectorTest7():: ..." << endl;  
}

//在文件外实现接口 - vectorTest8()函数
void vectorTest8()
{
    cout << "vectorTest8():: ..." << endl;  
}

//在文件外实现接口 - vectorTest9()函数
void vectorTest9()
{
    cout << "vectorTest9():: ..." << endl;  
}

//在文件外实现接口 - vectorTest10()函数
void vectorTest10()
{
    cout << "vectorTest10():: ..." << endl;  
}