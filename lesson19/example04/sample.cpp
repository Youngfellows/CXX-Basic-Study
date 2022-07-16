#include "./include/Student.h"

#define SIZE 5

//声明一个函数,参数是Student对象的引用
void function(Student &stu,int num,float score);

int main(int arg,char *args[])
{
    //创建一个对象,动态申请内存
    Student *stu = new Student(1001,77.5);
    
    //通过*取值,是一个对象
    function(*stu,stu->getNum(),88.0);

    //释放内存
    delete stu;
    return 0;
}

/**
 * @brief 
 * 
 * @param stu 引用
 * @param num 
 * @param score 
 * @return voit 
 */
void function(Student &stu,int num,float score)
{
    stu.display();
    stu.change(num,score);
    stu.display();
}


