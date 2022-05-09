#include "./include/School.h"

int main(int arg,char *args[])
{
    /**
     * 编译: 
     *   g++ -c -o Student.o Student.cpp
     *   g++ -c -o Teacher.o Teacher.cpp
     *   g++ -c -o School.o School.cpp
     *   cp *.o ..
     *   g++ -c -o sample.o sample.cpp 
     * 
     * 链接:
     *    g++ -o sample sample.o Student.o Teacher.o School.o
     * 
     * 执行:
     *    ./sample
     */


    //创建对象
    char const *schoolName = "北京师范大学附属中学";
    School schoo11(schoolName);
    schoo11.set(200,9);
    schoo11.display();
    

    return 0;
}