#include<iostream>

#define STU_SIZE 4 //学生个数
#define GRADEUNIT 5 //功课门数

using namespace std;

/**
 * @brief 函数返回gA或者gB的引用,作为左值gA,gB可以做运算,方便统计个数
 * 
 * @param grade 成绩列表
 * @param unit 功课门数
 * @param gA A级别的引用
 * @param gB B级别的应用
 * @return int& 返回引用
 */
int & level(int grade[],int unit,int &gA,int &gB);

int main()
{
    //统计A级和B级学生个数
    int score[STU_SIZE][GRADEUNIT] = {{60,70,80,90,78},
                                    {75,85,88,78,83},
                                    {89,88,79,96,90},
                                    {76,74,69,90,87}};

    int gradeA = 0;//存放A级人数
    int gradeB = 0;//存放B级人数

    int i = 0;
    for(i = 0; i < STU_SIZE; i++)
    {
        level(score[i],GRADEUNIT,gradeA,gradeB)++;//统计gradeA个数,gradeB个数
    }

    cout << "A级人数:" << gradeA << endl;
    cout << "B级人数:" << gradeB << endl;

    return 0;
}


/**
 * @brief 函数返回gA或者gB的引用,作为左值gA,gB可以做运算,方便统计个数
 * 
 * @param grade 成绩列表
 * @param unit 功课门数
 * @param gA A级别的引用
 * @param gB B级别的应用
 * @return int& 返回引用
 */
int & level(int grade[],int unit,int &gA,int &gB)
{
    int sum = 0;
    for(int i = 0; i < unit; i++)
    {
        sum = sum + grade[i];
    }

    int average =  sum / unit;
    if(average > 85)
    {
        return gA;
    }else
    {
        return gB;
    }
}

