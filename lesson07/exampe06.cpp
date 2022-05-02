#include<iostream>
// #include<string>
#include<cstring>

void strcpyTest();
void strcatTest();
void strcmpTest();
void strlenTest();
void strchrTest();//返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
void strstrTest();//返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。

int main()
{
    strcpyTest();
    strcatTest();
    strcmpTest();
    strlenTest();
    strchrTest();
    strstrTest();
    return 0;
}

void strstrTest()
{
  char str1[] = "www.apple.com.cn";
  char ch[] = "apple";
  //strchr(str1,ch);
  std::cout << "字符串" << ch << "在字符串中第一次出现的位置" << strstr(str1,ch) << std::endl;
}

void strchrTest()
{
  //返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
  char str1[] = "www.apple.com.cn";
  char ch = 'c';
  //strchr(str1,ch);
  std::cout << "字符" << ch << "在字符串中第一次出现的位置" << strchr(str1,ch) << std::endl;

}

void strlenTest()
{
    char str[] = "www.aispeex.com";
    std::cout << "字符串的长度是: " << strlen(str) << std::endl;
}

void strcmpTest()
{
    char str1[] = "apple";
    char str2[] = "orange";

    int compare = strcmp(str1,str2);


    std::cout << compare << std::endl;
    if(compare > 0)
    {
      std::cout << "字符串str1大于字符串str2" << std::endl;
    }else if (compare < 0) {
      std::cout << "字符串str1小于字符串str2" << std::endl;
    }else
    {
      std::cout << "字符串str1等于字符串str2" << std::endl;
    }

}


void strcatTest()
{
    char str1[30] = "People's Republic of";
    char str2[] = " China";

    strcat(str1,str2);//字符串连接函数
    std::cout << str1 << std::endl;
}


void strcpyTest()
{
  char str1[30];
  char str2[] = "aispeex";

  strcpy(str1,str2);  //字符串复制函数strcpy
  std::cout << str1 << std::endl;

}
