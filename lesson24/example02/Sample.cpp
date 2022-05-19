#include "./include/Sample.h"

//在文件外实现接口方法
void test()
{
    cout << "test():: ..." << endl;
    //创建对象,动态申请内存
    SelectSort *select = new SelectSort();

    try
    {
        cout << "请输入数组大小:" ;
        int size;
        cin >> size;
        int *p = select->input(size);//输入数组元素
        select->display();//显示数组元素
        //p = select->sort(p);//选择排序
        p = select->selectSort(p);
        select->display(p);//输出数组元素
    }catch(char *err)
    {
        cout << "catch,err:" << err << endl;
    }catch(int e)
    {
        cout << "catch,error:" << e << endl;
    }catch(...)
    {
        cout << "catch,error" << endl;
    }

    //释放内存
    delete select;
}

//在文件外实现接口方法
void test1()
{
    cout << "test1():: ..." << endl;
    //创建对象,动态申请内存
    SelectSort *select = new SelectSort();
    try
    {
        cout << "请输入数组大小:" ;
        int size;
        cin >> size;
        int *p = select->input(size);//输入数组元素
        select->display();//显示数组元素
        p = select->sort(p);//冒泡排序
        //p = select->selectSort(p);//选择排序
        select->display(p);//输出数组元素

        cout << "请输入要查找的元素:";
        int searchNum;
        cin >> searchNum;
        int *search = select->search(p,searchNum);//折半查找法,查找元素
        if(search != NULL)
        {
            int pos = *search;//取元素值
            cout << "元素:" << searchNum << "在数组中的位置是:" << pos << endl;
        }else
        {
            cout << "在数组中未找到" << searchNum << "元素" << endl;
        }

        cout << "输入要插入的元素:";
        int number;
        cin >> number;
        p = select->insert(p,number);//插入元素到数组
        select->display2(p);//输出数组元素

        select->reverse(p);//逆序数组元素
        select->display2(p);//输出数组元素
    }catch(char *err)
    {
        cout << "catch,err:" << err << endl;
    }catch(int e)
    {
        cout << "catch,error:" << e << endl;
    }catch(...)
    {
        cout << "catch,error" << endl;
    }

    //释放内存
    delete select;
}