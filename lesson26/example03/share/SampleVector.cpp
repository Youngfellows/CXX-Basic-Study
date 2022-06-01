#include "../include/SampleVector.h"

/**
 *  3.1 vector
 *  3.1.1 基本函数实现
 *  1.构造函数
 *
 *	   vector():创建一个空vector
 *	   vector(int nSize):创建一个vector,元素个数为nSize
 *	   vector(int nSize,const t& t):创建一个vector，元素个数为nSize,且值均为t
 *	   vector(const vector&):复制构造函数
 *	   vector(begin,end):复制[begin,end)区间内另一个数组的元素到vector中
 *  
 *	2.增加函数
 *	   void push_back(const T& x):向量尾部增加一个元素X
 *	   iterator insert(iterator it,const T& x):向量中迭代器指向元素前增加一个元素x
 *	   iterator insert(iterator it,int n,const T& x):向量中迭代器指向元素前增加n个相同的元素x
 *	   iterator insert(iterator it,const_iterator first,const_iterator last):向量中迭代器指向元素前插入另一个相同类型向量的[first,last)间的数据
 *  
 *  3.删除函数
 *	   iterator erase(iterator it):删除向量中迭代器指向元素
 *	   iterator erase(iterator first,iterator last):删除向量中[first,last)中元素
 *	   void pop_back():删除向量中最后一个元素
 *	   void clear():清空向量中所有元素
 *  
 *  4.遍历函数
 *	   reference at(int pos):返回pos位置元素的引用
 *	   reference front():返回首元素的引用
 *	   reference back():返回尾元素的引用
 *	   iterator begin():返回向量头指针，指向第一个元素
 *	   iterator end():返回向量尾指针，指向向量最后一个元素的下一个位置
 *	   reverse_iterator rbegin():反向迭代器，指向最后一个元素
 *	   reverse_iterator rend():反向迭代器，指向第一个元素之前的位置
 *  
 *  5.判断函数
 *	    bool empty() const:判断向量是否为空，若为空，则向量中无元素
 *  
 *  6.大小函数
 *	   int size() const:返回向量中元素的个数
 *	   int capacity() const:返回当前向量张红所能容纳的最大元素值
 *	   int max_size() const:返回最大可允许的vector元素数量值
 *
 *  7.其他函数
 *	   void swap(vector&):交换两个同类型向量的数据
 *	   void assign(int n,const T& x):设置向量中第n个元素的值为x
 *	   void assign(const_iterator first,const_iterator last):向量中[first,last)中元素设置成当前向量元素
 *
 *  8.看着清楚
 *	   1.push_back 在数组的最后添加一个数据
 *	   2.pop_back 去掉数组的最后一个数据
 *	   3.at 得到编号位置的数据
 *	   4.begin 得到数组头的指针
 *	   5.end 得到数组的最后一个单元+1的指针
 *	   6．front 得到数组头的引用
 *	   7.back 得到数组的最后一个单元的引用
 *	   8.max_size 得到vector最大可以是多大
 *	   9.capacity 当前vector分配的大小
 *	   10.size 当前使用数据的大小
 *	   11.resize 改变当前使用数据的大小，如果它比当前使用的大，者填充默认值
 *	   12.reserve 改变当前vecotr所分配空间的大小
 *	   13.erase 删除指针指向的数据项
 *	   14.clear 清空当前的vector
 *	   15.rbegin 将vector反转后的开始指针返回(其实就是原来的end-1)
 *	   16.rend 将vector反转构的结束指针返回(其实就是原来的begin-1)
 *	   17.empty 判断vector是否为空
 *	   18.swap 与另一个vector交换数据
 *
 */

//在文件外实现接口 - vectorTest1()函数
void vectorTest1()
{
    cout << "vectorTest1():: ..." << endl;
    //创建vector向量,动态申请内存
    vector<string> *person = new vector<string>();
    
    //添加元素
    person->push_back("郭靖");
    person->push_back("黄蓉");
    person->push_back("小龙女");
    person->push_back("杨过");

    //遍历元素 - 使用at()函数
    int size = person->size();
    bool isEmpty = person->empty();
    cout << "isEmpty:" << isEmpty << ",size:" << size << endl;
    if(!isEmpty)
    {
        for(int i = 0; i < size; i++)
        {
            string name = person->at(i);
            cout << name << " ";
        }
    }
    cout << endl;
    
    //删除元素
    vector<string>::iterator iter;//迭代器
    for(iter = person->begin(); iter != person->end(); iter++)
    {
        if(*iter == "黄蓉")
        {
            person->erase(iter);  //删除指定元素
        }
    }

    //删除向量中最后一个元素
    person->pop_back();

    //遍历元素 - 使用迭代器
    for(iter = person->begin(); iter != person->end(); iter++)
    {
        string name = *iter;//获取元素
        cout << name << " ";
    }
    cout << endl;

    //遍历元素 - 使用数组
    size = person->size();
    isEmpty = person->empty();
    if(!isEmpty)
    {
        for(int i = 0; i < size; i++)
        {
            string name = (*person)[i];//通过数组方式访问vector
            cout << name << " ";
        }
        cout << endl;
    }


    //清空容器
    person->clear();

    size = person->size();
    isEmpty = person->empty();
    cout << "isEmpty:" << isEmpty << ",size:" << size << endl;

    //释放内存
    delete person;

    cout << endl;
}

//在文件外实现接口 - vectorTest2()函数
void vectorTest2()
{
    cout << "vectorTest2():: ..." << endl;
    //创建一个含有10个元素的vector
    vector<int> *number = new vector<int>(10);

    //添加元素
    number->push_back(9);
    number->push_back(12);
    number->push_back(6);
    number->push_back(11);

    //添加元素
    vector<int>::iterator iter = number->begin();
    iter++;//移动指针
    number->insert(iter,7);

    //遍历元素
    for(iter = number->begin(); iter != number->end(); iter++)
    {
        int num = *iter;
        cout << num << " ";
    }
    cout << endl;
 
    //排序 - 从小到大
    sort(number->begin(),number->end());
    for(iter = number->begin(); iter != number->end(); iter++)
    {
        int num = *iter;
        cout << num << " ";
    }
    cout << endl;

    //排序 - 从大到小
    reverse(number->begin(),number->end());
    for(iter = number->begin(); iter != number->end(); iter++)
    {
        int num = *iter;
        cout << num << " ";
    }
    cout << endl;

    //排序 - 从小到大
    sort(number->begin(),number->end(),compare);
    for(iter = number->begin(); iter != number->end(); iter++)
    {
        int num = *iter;
        cout << num << " ";
    }
    cout << endl;


    cout << endl;
    //释放内存
    delete number;
}

//在文件外实现接口 - compare()函数,自定义排序规则
bool compare(int a,int b)
{
    return a < b;//降序排列
}

//在文件外实现接口 - vectorTest3()函数
void vectorTest3()
{
    cout << "vectorTest3():: ..." << endl;
    //二维数组定义,动态申请内存
    vector<vector<int>> *score = new vector<vector<int>>(M);//定义二维动态数组大小M行

    for(vector<int>::size_type i = 0; i < score->size(); i++)
    {
        //动态二维数组为M行N列，值全为0
        (*score)[i].resize(N);
    }

    //为二维数组赋值
    for(vector<int>::size_type i = 0; i < score->size(); i++)
    {
        for(vector<int>::size_type j = 0; j < (*score)[i].size(); j++)
        {
            (*score)[i][j] = (i+1) * (j+1);//赋值
        }
    }

    //遍历二维数组
    for(vector<int>::size_type i = 0; i < score->size(); i++)
    {
        for(vector<int>::size_type j = 0; j < (*score)[i].size(); j++)
        {
            int ele = (*score)[i][j];
            cout << ele << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << endl;
    //释放内存
    delete score;
}

//在文件外实现接口 - vectorTest4()函数
void vectorTest4()
{
    cout << "vectorTest4():: ..." << endl;
     //二维数组定义,动态申请内存
    vector<int> *row = new vector<int>(N);
    vector<vector<int>> *score = new vector<vector<int>>(M,*row);//定义二维动态数组大小M行N列

    // for(vector<int>::size_type i = 0; i < score->size(); i++)
    // {
    //     //动态二维数组为M行N列，值全为0
    //     (*score)[i].resize(N);
    // }

    //为二维数组赋值
    for(vector<int>::size_type i = 0; i < score->size(); i++)
    {
        for(vector<int>::size_type j = 0; j < (*score)[i].size(); j++)
        {
            (*score)[i][j] = (i+1) * (j+1);//赋值
        }
    }

    //遍历二维数组
    for(vector<int>::size_type i = 0; i < score->size(); i++)
    {
        for(vector<int>::size_type j = 0; j < (*score)[i].size(); j++)
        {
            int ele = (*score)[i][j];
            cout << ele << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << endl;
    //释放内存
    delete row;
    delete score;

    cout << endl;
}

//在文件外实现接口 - vectorTest5()函数
void vectorTest5()
{
    cout << "vectorTest5():: ..." << endl;
  
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