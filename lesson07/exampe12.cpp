#include<iostream>

int main()
{
    const int SIZE = 50;
    char buf[SIZE];//字符串

    std::cout << "请输入一段文本: " << std::endl;
    std::cin.read(buf,20);//从输入缓冲区读取20个字符到字符数组中
    std::cout << "字符串收集到的字符数是: " << std::cin.gcount() << std::endl;

    //std::cout << buf << std::endl;
    std::cout.write(buf,20);
    std::cout << std::endl;

    return 0;
}
