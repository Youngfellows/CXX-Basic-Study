#include<iostream>
#include<map>
#include<string>

int main()
{
    std::map<int,std::string> map1;
    std::pair<int,std::string> p1(1,"深圳");
    std::pair<int,std::string> p2(2,"广州");
    std::pair<int,std::string> p3(3,"珠海");
    std::pair<int,std::string> p4(4,"中山");
    map1.insert(p1);
    map1.insert(p2);
    map1.insert(p3);
    map1.insert(p4);

    std::cout << "map1集合的大小: " << map1.size() << std::endl;

    //正向遍历map
    std::map<int,std::string>::iterator iter = map1.begin();
    for(;iter != map1.end(); iter++)
    {
        std::cout << iter->first <<" = " << iter->second << std::endl;
    }
    std::cout << std::endl;

    //反向遍历map
    std::map<int,std::string>::reverse_iterator riter = map1.rbegin();
    for(; riter != map1.rend();riter++)
    {
        std::cout << riter->first << " = " << riter->second << std::endl;
    }

    //清空map
    map1.clear();
    std::cout <<"清空后的大小: " << map1.size() << std::endl;

    return 0;
}
