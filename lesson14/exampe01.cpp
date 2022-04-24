#include<iostream>
#include<string>
#include<vector>

//定义函数模板
template<typename T>
void showVector(std::vector<T> vc)
{
    //显示数组元素,类型成员
    for(typename std::vector<T>::iterator iter = vc.begin(); iter != vc.end(); iter++)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

int main()
{
  
    std::vector<int> vc1;
    for(int i = 0; i < 20; i++)
    {
        vc1.push_back(i);//插入数据
    }

    std::cout << "数组大小: " << vc1.size() << std::endl;
    //遍历数组元素
    for(unsigned int i = 0; i < vc1.size(); i++)
    {
        std::cout << vc1[i] << " " ;
    }
    std::cout << std::endl;

    //使用迭代器来遍历数组元素
    showVector(vc1);

    //使用迭代器,反向遍历
    for(std::vector<int>::reverse_iterator iter = vc1.rbegin(); iter != vc1.rend(); iter++)
    {
        std::cout << *iter << " " ;
    }
    std::cout << std::endl;

    //删除元素
    std::string str[] = {"aispeex","apple","google","banana"};
    std::vector<std::string> vc2(str,str+4);
    
    std::cout << "str数组大小: " << vc2.size() << std::endl;
    showVector(vc2);

    vc2.erase(vc2.end());//删除最后一个元素
    std::cout << "str数组大小: " << vc2.size() << std::endl;
    showVector(vc2);

    vc2.clear();//清空数组
    std::cout << "str数组大小: " << vc2.size() << std::endl;

    return 0;
}