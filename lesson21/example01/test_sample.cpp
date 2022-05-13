#include "./include/Sample.h"

int main(int arg,char *args[])
{
    //调用Sample.h中声明的函数,其实现在Sample.cpp文件中,为了简化代码
    testBaseStudent();
    testPupils();
    testMiddleStudent();
    testCat();
    testDog();
    return 0;
}
