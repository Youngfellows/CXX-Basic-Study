#ifndef GLOBAL_H
#define GLOBAL_H

//定义全局引用
#include<iostream>
#include<cstring>
#include<ctype.h>

using namespace std;

//常量 - 字符串最大长度
const int LEN = 128;

/**
* @brief 定义一个函数指针,用来统计大写字母、小写字母、数字、空格、其他字符的个数
* 
*/
typedef void  (*CALCULATE_1)(char *str,int &upper,int &lower,int &digit,int &space,int &other);
        
/**
* @brief 定义一个函数指针,用来统计大写字母、小写字母、数字、空格、其他字符的个数
* 
*/
typedef void  (*CALCULATE_2)(char *str,int *upper,int *lower,int *digit,int *space,int *other);

#endif