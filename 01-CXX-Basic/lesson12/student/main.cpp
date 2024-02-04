#include <iostream>
#include "undergraduate.h"

using namespace std;
int main()
{
   /*
   *  1.编译
         g++ -c student.cpp
         g++ -c undergraduate.cpp
         g++ -c main.cpp
      2. 链接
         g++ main.o student.o undergraduate.o -o exec
      3. 允许
         ./exec
   */
   Undergraduate s1;//新建一个本科生对象
   s1.set("Tom",21,178,60);
   s1.setGPA(3.75);
   cout <<s1.sname() <<endl;
   cout <<s1.sage() <<endl;
   cout <<s1.sheight() <<endl;
   cout <<s1.sweight() <<endl;
   cout <<s1.score() <<endl;
   cout <<s1.isAdult() <<endl;
   
   return 0;
}