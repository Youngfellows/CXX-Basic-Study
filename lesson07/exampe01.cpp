#include<iostream>
#include<string>

void storyString();//字符串存储
void storyStringPoint();//用字符指针初始化字符串
void storyStrArray();//用字符指针管理串

int main()
{

    storyString();//字符串存储
    storyStringPoint();//用字符指针初始化字符串
    storyStrArray();//用字符指针管理串

    return 0;
}

//用字符指针管理串
void storyStrArray()
{
    const int size = 5;
    const char *nameArray[size]
    = {"张三","李四","王五","赵六","孙七"};//nameArray是一个数组,数组中的每一个元素是char *类型数据,也就是每一个元素都指向一个字符串
    //字符指针，每个元素指向一个字符串

    for(int i = 0; i < size; i++)
    {
      std::cout << nameArray[i] << " ";
    }
    std::cout << std::endl;
}

//用字符指针初始化字符串
void storyStringPoint()
{
    const char *p = "www.aispeex.com";
    std::cout << p << std::endl;

    for(int i = 0; p[i] != '\0';i++)
    {
      std::cout << p[i];
    }
    std::cout << std::endl;

    for(int i = 0;i < 15; i++)
    {
      std::cout << *(p + i) ;
      //std::cout << p + i ;
    }
    std::cout << std::endl;
}

//字符串存储
void storyString()
{
    //1.用字符数组存放字符串
    char str1[10] = {'A','I','S','P','E','E','X'};
    std::cout << "数组大小: " << sizeof(str1)/sizeof(char) << " ," << str1 << std::endl;

    char str2[] = "Linux c++ study";
    std::cout << str2 << std::endl;

    char str3[] = "google ndk study";
    std::cout << str3 << std::endl;

    char str4[15] = {"I am a student"};
    std::cout << str4 << std::endl;

    char str5[] = {"you are well"};
    std::cout << str5 << std::endl;

}
