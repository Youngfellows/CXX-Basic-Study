#ifndef SAMPLE_H
#define SAMPLE_H

#include "./MyString.h"

//定义接口方法,在文件外实现
void test1();
void test2();
void test3();
void test4();

//回调函数
void calculate1(char *str,int &upper,int &lower,int &digit,int &space,int &other);

//回调函数     
void calculate2(char *str,int *upper,int *lower,int *digit,int *space,int *other);

#endif