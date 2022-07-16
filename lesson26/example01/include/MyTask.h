#ifndef MY_TASK_H
#define MY_TASK_H

#include "./Global.h"

//线程回调函数
void myThread1();
void myThread2(int n);
void myThread3();
void myThread4(int *num);
void myThread5(string &city);
void myThread6(unique_ptr<string> city);
#endif