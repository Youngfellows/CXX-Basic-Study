#include<iostream>
#include<string>

void strcatTest();//字符串拼接
void strfindTest();//字符串查找
void substrTest();//查找子串
void replaceTest();//替换
void insertTest();//插入字符串
void appendTest();//追加
void deletestrTest();//删除
void swapstrTest();//交换
void otherTest();//其他

int main()
{
    //C++ string 字符串函数详解
    strcatTest();
    strfindTest();
    substrTest();
    replaceTest();
    insertTest();
    appendTest();
    deletestrTest();
    swapstrTest();
    otherTest();
    return 0;
}

void otherTest()
{
  std::string str = "www.aistudy.google.com.cn";
  std::cout << "字符串的长度是: " << str.size() << std::endl;
  std::cout << "字符串的长度是: " << str.length() << std::endl;
  std::cout << "字符串是否为空: " << str.empty() << std::endl;
  std::cout << "取出字符串的第2个字符: " << str[2] << std::endl;
  std::cout << "取出字符串的第3个字符: " << str.at(3) << std::endl << std::endl;
}

void swapstrTest()
{
    std::string str1 = "apple";
    std::string str2 = "google";

    std::cout << "交换前: str1 = " << str1 << " ,str2 = " << str2 << std::endl;

    str1.swap(str2);
    std::cout << "交换后: str1 = " << str1 << " ,str2 = " << str2 << std::endl << std::endl;
}

void deletestrTest()
{
    std::string str = "www.aistudy.com";
    std::cout << "删除3以后的字符串后的字符串: " << str.erase(3) << std::endl;
    std::cout << "删除3以后的原来字符串str: " << str << std::endl;

    str = "www.google.ai.com";
    std::cout << "删除吃从3开始的4个字符串: " << str.erase(3,4) << std::endl << std::endl;
}

void appendTest()
{
    std::string str = "www.google.com.";
    str.push_back('c');//在字符串末尾添加字符‘c’
    std::cout << str << std::endl;

    str.append("ountry");//在字符串末尾添加字符串ountry
    std::cout << str <<  std::endl << std::endl;
}

void insertTest()
{
    std::string str = "www.aispeex.com.hk";
    std::cout << "从2位置开始插入google后的字符串: " << str.insert(2,"google") << std::endl;

    str = "www.aispeex.com.hk";
    std::cout << "从4位置开始插入google的前3个字符后的字符串: " << str.insert(4,"google",3) << std::endl;
    std::cout << std::endl;
}

void replaceTest()
{
    std::string str = "www.aispee.com.en";
    std::cout << "从2开始的4个字符的替换为xixihaha的字符串: " << str.replace(2,4,"xixihaha") << std::endl;

    str = "www.google.com.hk";
    std::cout << "从2开始的4个字符的替换为apple的前3个字符的字符串: " << str.replace(2,4,"apple",3) << std::endl;
    std::cout << std::endl;
}

void substrTest()
{
    std::string str = "www.google.com.hk";
    std::cout << "返回4以后的子串: " << str.substr(4) << std::endl;
    std::cout << "返回4开始的3个字符的子串: " << str.substr(4,3) << std::endl;
    std::cout << std::endl;
}

void strfindTest()
{
    std::string str = "www.apple.com.cn";
    std::cout << "字符串ap在字符串"<< str << "中的位置: " << str.find("ap") << std::endl;

    std::cout << "orange 中任何一个字符首次在" << str << "中的位置: " << str.find_first_of("orange") << std::endl;
    std::cout << "除wapple以外的任意字符在" << str << "中的位置: " << str.find_first_not_of("wapple") << std::endl;

    std::cout << "orange 中任何一个字符最后一次在" << str << "中的位置: " << str.find_last_of("orange") << std::endl;
    std::cout << "除wapple以外的任意字符在" << str << "中的位置: " << str.find_last_not_of("wapple") << std::endl;
    std::cout << std::endl;
}


void strcatTest()
{
    std::string str1 = "apple";
    std::string str2 = " orange ";
    std::string str3 = "banana";

    std::cout << str1 + str2 + str3 << std::endl;
    std::cout << std::endl;
}
